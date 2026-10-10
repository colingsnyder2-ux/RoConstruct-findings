// from server: 75% by atomic.potato
struct TToolVerb
{
    void *v0;
    void *v1;
    void *v2;
    void *v3;
    void *f();
};

typedef void *(__cdecl *Call7f5286Type)(void *);
typedef int (__cdecl *TypeInfoEqualType)(void *, const void *);

extern "C" void *__cdecl Call7f5286(void *);
extern "C" int __cdecl TypeInfoEqual(void *, const void *);

void *TToolVerb::f()
{
    void *a;
    void *b;
    void *c;

    a = *(void **)((char *)this + 0x0c);
    b = *(void **)((char *)a + 0xa90);
    c = *(void **)((char *)b + 0x1b4);
    if (c != 0)
    {
        c = Call7f5286(c);
        TypeInfoEqual((void *)0xb3f094, c);
    }
    return this;
}
