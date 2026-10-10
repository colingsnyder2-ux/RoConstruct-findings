// from server: 56% by atomic.potato
typedef unsigned int DWORD;

extern "C" void __cdecl sub_85bfd0(void *, DWORD);

struct CXTPStatusBar
{
    void f(void *);
};

void CXTPStatusBar::f(void *arg)
{
    sub_85bfd0(*(void **)((char *)this + 0x50),
               *(DWORD *)((char *)this + 0x54));
}
