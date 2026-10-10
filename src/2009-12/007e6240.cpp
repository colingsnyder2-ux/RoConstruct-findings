// from server: 68% by atomic.potato
extern "C" void __stdcall basic_string_ctor(void *, const char *);

struct S
{
	int f();
};

int S::f()
{
	char *p;
	basic_string_ctor(&p, "ExclusiveArbiter");
	return (int)this;
}
