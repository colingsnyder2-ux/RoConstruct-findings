// from server: 52% by atomic.potato
typedef int (__cdecl *InvalidParameterNoInfo)(void);
typedef int (__thiscall *MyPtr)(void *);

extern InvalidParameterNoInfo g_invalid_parameter_noinfo;
extern MyPtr g_my_ptr;

struct S
{
    void *value;
    int limit;
    int f();
};

int S::f()
{
    if (value != (void *)-4)
    {
        if (value == 0)
            g_invalid_parameter_noinfo();

        int n = g_my_ptr(value);
        if (limit >= n + *(int *)((char *)value + 20))
            g_invalid_parameter_noinfo();
    }

    return limit;
}
