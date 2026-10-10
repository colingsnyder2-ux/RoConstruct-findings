// from server: 66% by atomic.potato
struct S
{
    unsigned char flags[0x55];
    void* field44;
    void f(void*);
};

typedef void (__thiscall *Call1)(void*, void*);
typedef void (__thiscall *Call2)(void*, void*);

extern Call1 g_call1;
extern Call2 g_call2;

void S::f(void* arg)
{
    if ((flags[0x54] & 1) != 0 && field44 != 0)
    {
        g_call1(field44, arg);
        g_call2(&arg, 0);
    }
}
