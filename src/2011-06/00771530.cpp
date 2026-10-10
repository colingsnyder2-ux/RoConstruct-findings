// from server: 95% by atomic.potato
struct TypeInfo
{
    bool operator==(const TypeInfo& other) const;
};

extern const TypeInfo g_type_info;

struct S
{
    int f(const TypeInfo* type);
};

int S::f(const TypeInfo* type)
{
    if (*type == g_type_info)
        return (int)((char*)this + 16);
    return 0;
}
