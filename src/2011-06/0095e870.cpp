// from server: 35% by atomic.potato
struct S
{
    S * __cdecl f(unsigned char);
};

S *S::f(unsigned char value)
{
    unsigned char zero = 0;
    f(zero);
    return this;
}
