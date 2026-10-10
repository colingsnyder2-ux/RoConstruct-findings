// from server: 55% by atomic.potato
struct S
{
    S* __cdecl f(void*);
};

S* S::f(void* p)
{
    ((S* (__thiscall *)(S*, void*))0x40ecd0)(this, p);
    return this;
}
