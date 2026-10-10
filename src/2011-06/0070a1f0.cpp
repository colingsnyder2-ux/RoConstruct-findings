// from server: 61% by atomic.potato
typedef unsigned int DWORD;

extern "C" void __cdecl G1_func_00709fe0();

void func_0070a1f0(DWORD a, DWORD b, DWORD c)
{
    if (c != 4)
    {
        G1_func_00709fe0();
        return;
    }

    *(DWORD*)b = 0x00c7f740;
    *((unsigned char*)b + 4) = 0;
    *((unsigned char*)b + 5) = 0;
}
