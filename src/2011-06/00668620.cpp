// from server: 81% by atomic.potato
typedef unsigned char BYTE;
typedef unsigned long DWORD;

extern "C" void __cdecl sub_0080B15D(const char*);

volatile BYTE g_00CCDE10;
volatile DWORD g_00CCDE08;
volatile DWORD g_00CCDE0C;

void sub_00668620()
{
    if ((g_00CCDE10 & 1) == 0)
    {
        g_00CCDE10 |= 1;
        g_00CCDE08 = 0;
        g_00CCDE0C = 0;
        sub_0080B15D("8csm");
    }
}
