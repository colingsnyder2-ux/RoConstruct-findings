// from server: 23% by atomic.potato
struct EventDesc
{
    int f(int, int, int);
};

struct Helper
{
    static Helper* create(int);
    int invoke(int, int, int);
};

Helper* Helper::create(int)
{
    return 0;
}

int Helper::invoke(int, int, int)
{
    return 0;
}

int EventDesc::f(int a, int b, int c)
{
    Helper* p = Helper::create(0);
    p->invoke(a, b, c);
    return a;
}
