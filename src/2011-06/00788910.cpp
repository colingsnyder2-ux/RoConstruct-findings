// from server: 87% by atomic.potato
typedef int (__cdecl *Predicate)(void *);
typedef int (__thiscall *TypeInfoEqual)(void *, const void *);

extern "C" void *__cdecl sub_0080BBC2(void *);
extern "C" TypeInfoEqual g_type_info_equal;

struct TToolVerb
{
    int f();
    void *field_0c;
};

int TToolVerb::f()
{
    void *p = *(void **)((char *)field_0c + 0xACC);
    void *q = *(void **)((char *)p + 0x188);
    if (q)
    {
        q = sub_0080BBC2(q);
        return g_type_info_equal((void *)0xC90E60, q);
    }
    return 0;
}
