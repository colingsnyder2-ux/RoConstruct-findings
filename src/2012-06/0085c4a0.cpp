// from server: 27% by atomic.potato
struct S
{
    S& __cdecl f(void* value);
};

S& S::f(void* value)
{
    S* p = (S*)value;
    return *p;
}
