// from server: 70% by atomic.potato
struct TypeInfo
{
    int equal(TypeInfo const &) const;
};

struct S
{
    TypeInfo *value;

    int f();
};

extern TypeInfo const *g_type_info;
extern "C" int __cdecl call_type_info(TypeInfo const *, TypeInfo const *);

int S::f()
{
    TypeInfo *p = value;
    TypeInfo const *q = *(TypeInfo const **)((char *)p + 8);
    return call_type_info(q, g_type_info);
}
