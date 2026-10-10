// from server: 57% by atomic.potato
struct S
{
    S* __cdecl f(S*, int);
};

S* S::f(S* a, int)
{
    this->f(a, 0);
    return this;
}
