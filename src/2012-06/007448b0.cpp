// from server: 53% by atomic.potato
struct S
{
    S* __cdecl f(void* value);
};

S* S::f(void* value)
{
    S* self = this;
    ((void (__thiscall *)(S*, void*, int))0x7446b0)(self, value, 0);
    return self;
}
