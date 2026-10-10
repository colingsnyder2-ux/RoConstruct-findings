// from server: 76% by atomic.potato
extern "C" void __cdecl Function_0080B15D(const char *);

int Function_00698340()
{
    static volatile int flag = 0;
    static volatile int value1 = 0;
    static volatile int value2 = 0;

    if ((flag & 1) != 0)
        return 1;

    flag |= 1;
    value1 = 0;
    value2 = 0;
    Function_0080B15D((const char *)0xA3BF20);
    return 0;
}
