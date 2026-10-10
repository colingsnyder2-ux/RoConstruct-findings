// from server: 95% by atomic.potato
struct S
{
    unsigned long value;
    unsigned long limit;
    unsigned long data;
    void __thiscall f(unsigned long);
};

void __thiscall S::f(unsigned long n)
{
    while (limit > n)
    {
        f(*((unsigned long*)data + 1) + 8);
    }
}
