// from server: 81% by atomic.potato
typedef unsigned char byte;
typedef unsigned long DWORD;

extern "C" void __cdecl f_80b15d(const char *);

volatile DWORD g_cb5740;
volatile DWORD g_cb5744;
volatile DWORD g_cb5748;

int f_4b3970()
{
    if (g_cb5748 & 1)
        return 0;

    g_cb5748 |= 1;
    g_cb5740 = 0;
    g_cb5744 = 0;
    f_80b15d(0);
    return 0;
}
