// from server: 57% by atomic.potato
struct S
{
    S* __cdecl f(const char*, int);
};

S* S::f(const char* a, int b)
{
    S* p = this;
    p->f(a, b);
    return p;
}
