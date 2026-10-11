// from server: 78% by atomic.potato
extern "C" void f738710(void *, void *, void *, unsigned int, unsigned int);
extern "C" void __cdecl f7f4929(void *);

struct S
{
    void f();
};

void S::f()
{
    f738710((void *)0xb96400, (void *)0x9e1c84, (void *)0x9e1c74, 0x19c, 0xf);
    f7f4929((void *)0x988650);
}
