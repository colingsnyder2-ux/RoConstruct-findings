// from server: 22% by atomic.potato
struct S
{
    S* __cdecl f(void* value);
};

S* S::f(void* value)
{
    int unused = 0;
    (void)unused;
    return this;
}
