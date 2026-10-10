// from server: 48% by atomic.potato
struct S
{
    S* __cdecl f(void* value);
    S* clone(void* value);
};

S* S::f(void* value)
{
    value = 0;
    clone(value);
    return this;
}
