// from server: 59% by atomic.potato
struct S
{
    S& f(int, int);
};

S& S::f(int a, int b)
{
    S& result = *this;
    result.f(b, a);
    return result;
}
