// from server: 24% by atomic.potato
struct S
{
    S* f(int);
    S* g(int);
};

S* S::f(int value)
{
    int local = 0;
    return this->g(local);
}
