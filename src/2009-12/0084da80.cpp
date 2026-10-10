// from server: 85% by atomic.potato
struct S_func_0084da80
{
    virtual S_func_0084da80* f148();
    char pad04[0x148];
    S_func_0084da80* member14c;
    char pad150[0xb0 - sizeof(S_func_0084da80*)];
    S_func_0084da80* member0b0;
    S_func_0084da80* f();
};

S_func_0084da80* S_func_0084da80::f()
{
    if (member14c == 0)
    {
        member14c = f148();
        member14c->member0b0 = this;
    }
    return member14c;
}
