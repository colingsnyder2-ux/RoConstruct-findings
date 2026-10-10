// from server: 76% by atomic.potato
struct S
{
    void f();
    int value;
    char flag;
};

extern "C" void target();

void S::f()
{
    if (flag)
        target();
}
