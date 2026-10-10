// from server: 57% by atomic.potato
struct S
{
    S * __cdecl clone_impl(int, int);
};

S *S::clone_impl(int a, int b)
{
    b = 0;
    this->clone_impl(a, b);
    return this;
}
