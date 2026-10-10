// from server: 65% by atomic.potato
struct S
{
    char pad[0x68];
    int a68;
    int a6c;
    int f();
};

int __declspec(nothrow) callee(S *, int);

int S::f()
{
    int n = (a6c - a68) >> 6;
    if (n > 0)
        return callee((S *)((char *)this + 0x5c), 0);
    return 0;
}
