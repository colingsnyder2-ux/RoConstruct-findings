// from server: 76% by atomic.potato
extern "C" void Initialize();

unsigned char g_initialized;
int g_value1;
int g_value2;

int Function00704750()
{
    if (g_initialized)
        return 0;

    g_initialized = 1;
    g_value1 = 0;
    g_value2 = 0;
    Initialize();
    return 0;
}
