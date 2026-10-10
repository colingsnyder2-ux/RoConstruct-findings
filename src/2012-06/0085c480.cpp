// from server: 62% by atomic.potato
struct S
{
    S* __cdecl f(void* p);
};

extern "C" void __stdcall call_0085b800(S*, void*);

S* S::f(void* p)
{
    S* s = this;
    call_0085b800(s, p);
    return s;
}
