// from server: 44% by atomic.potato
typedef unsigned long DWORD;

extern "C" DWORD __cdecl Function401860(void *);

DWORD __stdcall Function7A60C2(void *p)
{
    DWORD result;

    if (p == 0)
        result = 0x80070057UL;
    else
    {
        while (*(DWORD *)p != 0x2cUL)
            result = 0x80070057UL;

        *(DWORD *)((char *)p + 0x1c) = 0;
        result = Function401860((char *)p + 4);
    }

    return result;
}
