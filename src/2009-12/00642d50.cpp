// from server: 78% by atomic.potato
struct TypeInfo
{
    bool operator==(const TypeInfo& other) const;
};

extern "C" bool (__thiscall *g_type_info_compare)(TypeInfo*, const TypeInfo*);

struct Descriptor
{
    TypeInfo* get_type_info() const;
};

TypeInfo* Descriptor::get_type_info() const
{
    TypeInfo* type_info = *(TypeInfo**)this;
    TypeInfo* result = 0;
    g_type_info_compare((TypeInfo*)0x00b130d0, *(TypeInfo**)((char*)type_info + 8));
    return result;
}
