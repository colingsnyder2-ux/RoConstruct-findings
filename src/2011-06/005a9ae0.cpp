// from server: 89% by atomic.potato
typedef unsigned char BYTE;

extern "C" void __cdecl sub_0080b15d(const char *);

volatile int g_cbd9ec;
volatile int g_cbd9e4;
volatile int g_cbd9e8;

void sub_005a9ae0()
{
    if ((g_cbd9ec & 1) == 0)
    {
        g_cbd9ec |= 1;
        g_cbd9e4 = 0;
        g_cbd9e8 = 0;
        sub_0080b15d("8csm");
    }
}
