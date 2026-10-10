// from server: 59% by atomic.potato
struct S
{
    void f(void*);
};

extern "C" void __cdecl helper(void*, void*);

void S::f(void* value)
{
    helper((char*)this + 4, value);
}
