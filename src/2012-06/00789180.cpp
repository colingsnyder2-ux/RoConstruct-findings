// from server: 80% by atomic.potato
struct Value
{
    void Set(double, double);
};

struct Creator
{
    char pad[8];
    Value** value;
    int enabled;
    void __cdecl f(double, double);
};

void Creator::f(double a, double b)
{
    if (!enabled)
        return;
    (*value)->Set(a, b);
}
