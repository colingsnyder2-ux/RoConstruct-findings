// from server: 54% by atomic.potato
struct S
{
    int (**vtable)();
    int f();
};

int S::f()
{
    vtable[7]();
    return 0;
}
