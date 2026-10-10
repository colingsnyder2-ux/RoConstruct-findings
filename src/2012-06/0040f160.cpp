// from server: 62% by atomic.potato
struct S
{
    S* __cdecl f(void* value);
};

extern "C" S* sub_40E8B0(S* object, void* value);

S* S::f(void* value)
{
    sub_40E8B0(this, value);
    return this;
}
