// from server: 60% by atomic.potato
struct S
{
    S* __cdecl f(int, int);
};

S* S::f(int a, int b)
{
    a = 0;
    f(a, b);
    return this;
}
