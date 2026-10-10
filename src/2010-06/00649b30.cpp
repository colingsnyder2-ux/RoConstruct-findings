// from server: 56% by atomic.potato
extern "C" void __cdecl Func_00649a50(void *, const char *, double);

struct StatsItem_00649b30 {
    int value;
    void f(int *);
};

void StatsItem_00649b30::f(int *p)
{
    Func_00649a50(this, (const char *)0x00a07674, (double)*p);
}
