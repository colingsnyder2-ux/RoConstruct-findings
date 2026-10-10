// from server: 51% by atomic.potato
typedef unsigned long DWORD;

extern "C" DWORD __stdcall Function403610(void *);

DWORD Function903c06(void *p)
{
    DWORD result;

    if (p == 0)
        return 0x80070057UL;

    while (*(DWORD *)p != 0x2c)
        return 0x80070057UL;

    *(DWORD *)((char *)p + 0x1c) = 0;
    Function403610((char *)p + 4);
    result = 0;
    return result;
}
