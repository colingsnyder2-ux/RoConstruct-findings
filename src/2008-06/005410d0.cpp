// from server: 45% by atomic.potato
typedef unsigned long DWORD;

struct S
{
    int f(S *p);
};

extern "C" void __cdecl S_f_call(S *p, DWORD value);

int S::f(S *p)
{
    *(DWORD *)this = 0;
    S_f_call(this, *(DWORD *)p);
    return (int)this;
}
