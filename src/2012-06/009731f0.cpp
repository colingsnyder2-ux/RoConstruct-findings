// from server: 95% by atomic.potato
struct TypeInfo
{
    bool operator==(const TypeInfo&) const;
};

extern const TypeInfo delete_data_type;

struct S
{
    TypeInfo* f(const TypeInfo&);
};

TypeInfo* S::f(const TypeInfo& type)
{
    if (type == delete_data_type)
        return (TypeInfo*)(this + 16);
    return 0;
}
