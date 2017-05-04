template<typename B>
class A{
	B b1,*b2;
	B foo(const B x){
		b1.a=b2->a;
		return x;
	}
};