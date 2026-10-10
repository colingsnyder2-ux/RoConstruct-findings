// from server: 56% by atomic.potato
extern "C" void __cdecl allocator_char_ctor(void *);
extern "C" void __cdecl allocator_char_deallocate(void *, char *, unsigned int);

struct S
{
    char *p;
    void *allocator;
    void f();
};

void S::f()
{
    char *p = p;
    if (p)
    {
        void *a = allocator;
        allocator_char_ctor(&a);
        allocator_char_deallocate(a, p, 4);
    }
}
