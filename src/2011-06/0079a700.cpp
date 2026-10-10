// from server: 90% by atomic.potato
extern "C" void __cdecl Function_0080B15D(const char *);

int g_00CD56B0;
int g_00CD56A8;
int g_00CD56AC;

void Function_0079A700()
{
    if ((g_00CD56B0 & 1) == 0)
    {
        g_00CD56B0 |= 1;
        g_00CD56A8 = 0;
        g_00CD56AC = 0;
        Function_0080B15D(0);
    }
}
