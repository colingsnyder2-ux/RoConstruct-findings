// from server: 90% by atomic.potato
extern "C" void* (__cdecl *realloc)(void*, unsigned int);

struct S
{
    void* f(void*, unsigned int);
};

void* S::f(void* p, unsigned int n)
{
    return realloc(p, n);
}
