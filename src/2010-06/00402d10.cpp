// from server: 58% by atomic.potato
extern "C" void __cdecl imported(void*, void*, void*, void*);

struct S
{
    S* __cdecl f(void*);
};

S* S::f(void* arg)
{
    imported(0, this, (void*)0x00c019a8, arg);
    return this;
}
