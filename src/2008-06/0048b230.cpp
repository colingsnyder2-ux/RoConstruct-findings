// from server: 69% by atomic.potato
struct TypeInfo
{
    bool operator==(const TypeInfo& other) const;
};

extern "C" TypeInfo* g_brick_color_type;
extern "C" TypeInfo* (__thiscall *type_info_equal)(TypeInfo*, const TypeInfo*);

struct Holder
{
    TypeInfo* get_type() const;
};

TypeInfo* Holder::get_type() const
{
    return type_info_equal(*(TypeInfo**)this, g_brick_color_type) ? g_brick_color_type : 0;
}
