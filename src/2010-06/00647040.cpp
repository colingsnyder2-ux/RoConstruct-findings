// from server: 78% by atomic.potato
struct TToolVerb
{
    void *vtable;
    char pad0[8];
    void *value;

    void f();
};

typedef void *(__cdecl *ConvertFn)(void *);
typedef int (__thiscall *CompareFn)(void *, void *);

extern "C" void *__cdecl sub_7A93C6(void *);
extern "C" CompareFn global_9EA8D8;

void TToolVerb::f()
{
    void *a = *(void **)((char *)value + 0x0);
    void *b = *(void **)((char *)a + 0xAA0);
    void *c = *(void **)((char *)b + 0x1B4);
    if (c != 0)
    {
        void *d = sub_7A93C6(c);
        global_9EA8D8((void *)0xBB6BCC, d);
    }
}
