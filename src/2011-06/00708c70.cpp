// from server: 79% by atomic.potato
extern "C" void __cdecl f0080b15d(const char*);

int f00708c70()
{
    static unsigned char initialized;
    static int value1;
    static int value2;

    if (!initialized)
    {
        initialized = 1;
        value1 = 0;
        value2 = 0;
        f0080b15d("8csm");
    }

    return 0;
}
