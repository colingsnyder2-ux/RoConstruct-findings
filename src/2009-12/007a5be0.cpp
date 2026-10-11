// from server: 60% by atomic.potato
extern "C" void* sub_7a5b40(void*);

extern "C" void sub_7a5a00(void*, void*, void*, void*);

struct S
{
    void* f(void*, void*, void*);
};

void* S::f(void* a, void* b, void* c)
{
    void* p = sub_7a5b40(0);
    sub_7a5a00(p, a, b, c);
    return a;
}
