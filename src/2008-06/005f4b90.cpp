// from server: 66% by atomic.potato
struct S
{
    S* __cdecl f(void*, void*);
};

S* S::f(void* a, void* b)
{
    int zero = 0;
    f(a, &zero);
    return this;
}
