// from server: 61% by atomic.potato
typedef unsigned int DWORD;
typedef unsigned char BYTE;

extern "C" void G1_func_006041b0();

struct S
{
    void __cdecl f(void*, int);
};

void S::f(void* a, int b)
{
    if (b != 4)
    {
        G1_func_006041b0();
    }
    else
    {
        *(DWORD*)a = 0x00c48c10;
        ((BYTE*)a)[4] = 0;
        ((BYTE*)a)[5] = 0;
    }
}
