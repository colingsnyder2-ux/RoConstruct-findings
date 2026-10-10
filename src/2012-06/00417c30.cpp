// from server: 62% by atomic.potato
struct S
{
    S* __cdecl clone(int);
};

S* S::clone(int value)
{
    S* result = this;
    clone(value);
    return result;
}
