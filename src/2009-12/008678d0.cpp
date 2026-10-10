// from server: 75% by atomic.potato
typedef unsigned long DWORD;

extern "C" void __stdcall ImportedCall(void *, DWORD *);

struct S
{
    int f(DWORD value);
};

int S::f(DWORD value)
{
    DWORD local = 0;
    ImportedCall(reinterpret_cast<char *>(this) + 0xb4, &local);
    return reinterpret_cast<int>(this);
}
