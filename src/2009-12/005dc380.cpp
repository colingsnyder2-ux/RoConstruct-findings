// from server: 62% by atomic.potato
struct S
{
    S();
    S& __cdecl f(const S&);
};

S::S()
{
}

S& S::f(const S& value)
{
    S* result = this;
    S temp;
    result->f(value);
    return *result;
}
