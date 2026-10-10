// from server: 60% by atomic.potato
struct S
{
    S* __cdecl f(void*);
};

S* S::f(void* p)
{
    S* result = this;
    *(void**)((char*)p + 0) = 0;
    result->f(p);
    return result;
}
