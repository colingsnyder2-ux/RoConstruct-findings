// from server: 43% by atomic.potato
struct S
{
    S* f();
    S* g();
};

S* S::f()
{
    S* result = g();
    result->g();
    return result;
}
