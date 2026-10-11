// from server: 73% by atomic.potato
typedef unsigned int DWORD;

extern "C" void __cdecl sub_738640(void *, void *, DWORD, DWORD, DWORD);
extern "C" void __cdecl sub_7f4929(void *);

struct S
{
    void f();
};

void S::f()
{
    sub_738640((void *)0x9e1c3c, (void *)0x9e1c48, 0x190, 0xf, 0);
    sub_7f4929((void *)0x988870);
}
