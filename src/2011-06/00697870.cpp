// from server: 89% by atomic.potato
typedef void (__cdecl *InitFunction)(const char *);

static volatile int g_00ccfa54;
static int g_00ccfa4c;
static int g_00ccfa50;
static InitFunction g_0080b15d = 0;

extern "C" void __cdecl func_0080b15d(const char *);

void func_00697870()
{
    if ((g_00ccfa54 & 1) == 0)
    {
        g_00ccfa54 |= 1;
        g_00ccfa4c = 0;
        g_00ccfa50 = 0;
        func_0080b15d("8csm");
    }
}
