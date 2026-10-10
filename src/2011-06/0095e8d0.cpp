// from server: 10% by atomic.potato
struct S
{
    S& f();
};

S& S::f()
{
    return *this;
}
