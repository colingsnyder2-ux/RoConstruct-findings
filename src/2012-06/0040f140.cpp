// from server: 62% by atomic.potato
struct S
{
    S* __cdecl clone_impl(void*);
};

S* S::clone_impl(void* value)
{
    clone_impl(value);
    return this;
}
