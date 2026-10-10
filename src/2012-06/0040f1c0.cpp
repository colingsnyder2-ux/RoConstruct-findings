// from server: 62% by atomic.potato
struct S
{
    S& __cdecl f(void*);
};

S& S::f(void* value)
{
    f(value);
    return *this;
}
