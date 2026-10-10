// from server: 89% by atomic.potato
extern "C" void __cdecl call_80b15d(const char*);

volatile unsigned int g_cb5980;
volatile int g_cb5978;
volatile int g_cb597c;

void f()
{
    if (!(g_cb5980 & 1))
    {
        g_cb5980 |= 1;
        g_cb5978 = 0;
        g_cb597c = 0;
        call_80b15d((const char*)0xa321f0);
    }
}
