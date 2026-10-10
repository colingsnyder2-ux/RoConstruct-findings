// from server: 26% by atomic.potato
struct S_func_0085a9e0
{
    int Check();
    int Reset();
    int f();
};

int S_func_0085a9e0::Check()
{
    return 0;
}

int S_func_0085a9e0::Reset()
{
    return 1;
}

int S_func_0085a9e0::f()
{
    if (Check())
        return 1;
    Reset();
    return 0;
}
