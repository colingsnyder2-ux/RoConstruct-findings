// from server: 62% by atomic.potato
struct S
{
    S& __cdecl f(char*);
};

S& S::f(char* p)
{
    f(p);
    return *this;
}
