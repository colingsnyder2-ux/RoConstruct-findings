// from server: 83% by atomic.potato
struct TypeInfo
{
    bool operator==(const TypeInfo& other) const;
};

extern TypeInfo* g_type_info_call(TypeInfo*, const TypeInfo&);
extern TypeInfo* g_udim2_typeinfo;

struct S
{
    TypeInfo* value;
    TypeInfo* f();
};

TypeInfo* S::f()
{
    TypeInfo* p = value;
    return g_type_info_call(p, *g_udim2_typeinfo);
}
