// from server: 95% by atomic.potato
struct TypeInfo
{
    bool operator==(const TypeInfo& other) const;
};

extern const TypeInfo delete_data_type;

struct S
{
    void* f(const TypeInfo* type);
};

void* S::f(const TypeInfo* type)
{
    if (*type == delete_data_type)
        return (char*)this + 0x10;
    return 0;
}
