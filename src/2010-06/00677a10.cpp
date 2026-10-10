// from server: 60% by atomic.potato
struct S
{
    int *vtable;
    char pad[236];
    int *p;

    int f();
};

int S::f()
{
    return p[2];
}
