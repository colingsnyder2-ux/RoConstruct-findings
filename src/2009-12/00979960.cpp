// from server: 26% by atomic.potato
typedef int DWORD;

struct C738CC0
{
    void f(DWORD, DWORD, DWORD, DWORD);
};

extern "C" void __cdecl sub_007F4929(const void *);

void C738CC0::f(DWORD a, DWORD b, DWORD c, DWORD d)
{
}

void sub_00979960()
{
    ((C738CC0 *)0x00B96578)->f(0x009E1D00, 0x009E1C14, 0x168, 0x0F);
    sub_007F4929((const void *)0x00988750);
}
