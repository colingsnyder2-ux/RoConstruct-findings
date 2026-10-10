// from server: 64% by atomic.potato
typedef unsigned long DWORD;

extern "C" void __stdcall Imported(DWORD, DWORD, DWORD);

struct S
{
    S *f(DWORD, DWORD);
};

S *S::f(DWORD a, DWORD b)
{
    Imported(0, (DWORD)this, b + 0x58);
    return this;
}
