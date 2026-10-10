// from server: 85% by atomic.potato
extern "C" void __stdcall ReleaseObject(void *, void *);

struct S
{
    void f(void *);
};

void S::f(void *p)
{
    void **v = *(void ***)p;
    void *a = v[4];
    if (a)
        ReleaseObject(v[3], a);
    v[3] = 0;
    v[4] = 0;
}
