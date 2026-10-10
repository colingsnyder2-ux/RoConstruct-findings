// from server: 62% by atomic.potato
struct S
{
    S * __cdecl clone_impl(void *);
};

S *S::clone_impl(void *p)
{
    S *result = this;
    result->clone_impl(p);
    return result;
}
