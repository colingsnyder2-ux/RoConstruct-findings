// from server: 64% by atomic.potato
struct TypeInfo
{
    bool operator==(const TypeInfo &other) const;
};

extern "C" bool (__thiscall *g_type_info_equal)(const TypeInfo *, const TypeInfo *);

struct PasteVerb
{
    TypeInfo **type_info;
    bool f();
};

bool PasteVerb::f()
{
    TypeInfo *p = *type_info;
    return g_type_info_equal(p + 2, (const TypeInfo *)0x00b033d0);
}
