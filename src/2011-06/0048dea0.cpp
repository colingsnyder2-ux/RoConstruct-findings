// from server: 86% by atomic.potato
typedef unsigned char byte;
typedef unsigned long DWORD;

extern byte g_00cb4168;
extern DWORD g_00cb4160;
extern DWORD g_00cb4164;

extern "C" void __cdecl func_0080b15d(const char*);

void func_0048dea0()
{
    if ((g_00cb4168 & 1) == 0)
    {
        g_00cb4168 |= 1;
        g_00cb4160 = 0;
        g_00cb4164 = 0;
        func_0080b15d("8csm");
    }
}
