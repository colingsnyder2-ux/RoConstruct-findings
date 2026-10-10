// from server: 79% by atomic.potato
extern void G1_func_0080b15d(const char *);

int func_00740e80()
{
    static volatile int initialized;
    static int value1;
    static int value2;

    if (!initialized)
    {
        initialized = 1;
        value1 = 0;
        value2 = 0;
        G1_func_0080b15d("8csm");
    }
    return 0;
}
