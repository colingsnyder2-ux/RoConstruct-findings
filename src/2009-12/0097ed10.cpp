// from server: 82% by atomic.potato
extern "C" void FontCall(void*);

struct S
{
	void f();
};

void S::f()
{
	FontCall((void*)0x00b0b5ec);
	FontCall((void*)0x00b0b5e8);
}
