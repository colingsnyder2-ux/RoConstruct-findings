// from server: 90% by atomic.potato
struct TToolVerb
{
    char pad[12];
    void *field0c;

    void f();
};

extern "C" void *__cdecl sub_007f5286(void *);
extern "C" void sub_0098b768(void *, void *);
extern void *g_00b3fed8;

void TToolVerb::f()
{
    void *a = *(void **)((char *)field0c + 0xa90);
    void *b = *(void **)((char *)a + 0x1b4);
    if (b)
    {
        void *c = sub_007f5286(b);
        sub_0098b768(g_00b3fed8, c);
    }
}
