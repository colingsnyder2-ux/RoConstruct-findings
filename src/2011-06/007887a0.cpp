// from server: 85% by atomic.potato
struct TToolVerb
{
    int pad0[3];
    void *value;

    int f();
};

struct TypeInfo
{
    int (__thiscall *equals)(TypeInfo *, const TypeInfo *);
};

extern "C" void *__cdecl sub_80bbc2(void *);
extern "C" int __cdecl imported_type_info_equals(void *, void *);

int TToolVerb::f()
{
    void *a = *(void **)((char *)value + 0xacc);
    void *b = *(void **)((char *)a + 0x188);
    if (b)
    {
        void *c = sub_80bbc2(b);
        return imported_type_info_equals((void *)0xc90da8, c);
    }
    return 0;
}
