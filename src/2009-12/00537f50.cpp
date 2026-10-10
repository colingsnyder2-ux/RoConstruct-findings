// from server: 65% by atomic.potato
struct S
{
};

void __cdecl f(void *p)
{
    if (p)
    {
        void (**vtable)(void *, int) = (void (**)(void *, int))*(void ***)p;
        vtable[1](p, 1);
    }
}
