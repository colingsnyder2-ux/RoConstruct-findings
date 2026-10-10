// from server: 76% by atomic.potato
extern "C" void __cdecl Call80B15D(const char *);

unsigned char g_cb280c;
int g_cb2804;
int g_cb2808;

int Function00441550()
{
    if (g_cb280c != 0)
        return 0;

    g_cb280c |= 1;
    g_cb2804 = 0;
    g_cb2808 = 0;
    Call80B15D("8csm");
    return 0;
}
