// from server: 78% by atomic.potato
struct S
{
    char pad[12];
    void *field_data;
    int field();
};

extern "C" void *__cdecl fn495f40(void *);
extern "C" void *__cdecl fn983b6a(void *);
extern "C" int __cdecl fnB229EC(void *, void *);

S *g_decadc = (S *)0x00decadc;

int S::field()
{
    void *p = fn495f40(((void **)field_data)[0xac4 / sizeof(void *)]);
    if (!p)
        return 0;
    p = fn983b6a(p);
    return fnB229EC(g_decadc, p);
}
