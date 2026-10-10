// from server: 46% by atomic.potato
typedef unsigned int DWORD;

struct S
{
    DWORD value;
    DWORD pad;
    DWORD pad2;
    DWORD pad3;
    DWORD pad4;
    S *f(DWORD);
};

extern "C" void __stdcall Call(DWORD, S *);

S *S::f(DWORD arg)
{
    S *p = (S *)((char *)this + 0x10);
    S *q = p->f(0);
    Call((DWORD)q + 4, q);
    return q;
}
