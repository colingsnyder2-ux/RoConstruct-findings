// from server: 78% by atomic.potato
struct S
{
	void f();
};

extern "C" void fn(void *, void *, unsigned int, unsigned int, unsigned int);
extern "C" void __cdecl cleanup(void *);

void S::f()
{
	fn((void *)0xB9860C, (void *)0x9E89C0, 0x9D1B80, 0x120, 2);
	cleanup((void *)0x989DF0);
}
