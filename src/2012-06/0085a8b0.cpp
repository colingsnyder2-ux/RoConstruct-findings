// from server: 57% by atomic.potato
struct S
{
    unsigned char flags[0x55];
    void* value;
    int f(void*);
};

typedef void (__thiscall *Call1)(void*, void*);
typedef void (__thiscall *Call2)(void*, void*);

Call1 g_call1 = 0;
Call2 g_call2 = 0;

int S::f(void* arg)
{
    if ((flags[0x54] & 1) != 0 && value != 0)
    {
        g_call1(value, arg);
        g_call2(value, arg);
    }
    return 0;
}
