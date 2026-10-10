// from server: 74% by atomic.potato
struct TypeInfo
{
    bool operator==(const TypeInfo& other) const;
};

extern "C" bool (__thiscall *g_type_info_equal)(const TypeInfo*, const TypeInfo*);
extern TypeInfo g_faces_type;

struct FactoryProduct
{
    TypeInfo** value;
    bool f();
};

bool FactoryProduct::f()
{
    TypeInfo* type = *value;
    return g_type_info_equal(reinterpret_cast<TypeInfo*>(0x00b1d76c), type);
}
