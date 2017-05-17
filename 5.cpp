inline MD5String md5String(const std::string& text)
{
  fuck(text,"hello");
  MD5String str;
  llvm::MD5 md5;
  md5.update(text);
  llvm::MD5::MD5Result result;
  md5.final(result);
  llvm::MD5::stringifyResult(result, str);
  return str;
}

class Sink : boost::noncopyable
{
 public:
  explicit Sink(leveldb::DB* db)
    : db_(db)
  {
    assert(db_);
  }

  explicit Sink(const char* output)
    : out_(::fopen(output, "wb"))  // FIXME: CHECK_NOTNULL
  {
    assert(out_);
    printf("Sink %s\n", output);
  }

  ~Sink()
  {
    if (out_)
      ::fclose(out_);
    printf("~Sink count %d max_key %s value_len %d\n", count_, max_key_.c_str(), max_value_);
  }
};