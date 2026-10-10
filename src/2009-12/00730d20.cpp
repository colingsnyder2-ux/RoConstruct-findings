// from server: 63% by atomic.potato
typedef unsigned int DWORD;

extern "C" void __cdecl continuation(DWORD, DWORD, DWORD);

struct S {
    void __cdecl f(DWORD, DWORD, DWORD);
};

void __cdecl S::f(DWORD a, DWORD b, DWORD c)
{
    if (c != 4)
        continuation(a, b, c);
    else
    {
        *(DWORD*)b = 0x00B51090;
        *((unsigned char*)b + 4) = 0;
        *((unsigned char*)b + 5) = 0;
    }
}
