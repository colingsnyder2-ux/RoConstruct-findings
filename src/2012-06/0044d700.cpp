// from server: 73% by atomic.potato
typedef unsigned char byte;
typedef void (*InitFunction)();

extern "C" InitFunction g_initFunction;
extern "C" byte g_initialized;
extern "C" int g_valueB0;
extern "C" int g_valueB4;

void Function9831F5();

void Function44D700()
{
    if (!g_initialized)
    {
        g_initialized = 1;
        g_valueB0 = 0;
        g_valueB4 = 0;
        Function9831F5();
    }
}
