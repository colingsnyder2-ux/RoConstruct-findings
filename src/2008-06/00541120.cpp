// from server: 25% by atomic.potato
struct S
{
    int f();
};

int S::f()
{
    return *(int*)this == 0;
}
