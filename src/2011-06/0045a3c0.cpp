// from server: 92% by atomic.potato
struct TypeInfo
{
    bool operator==(const TypeInfo& other) const;
};

extern const TypeInfo* g_type_info;

struct S
{
    void* f(void* p);
};

void* S::f(void* p)
{
    if (*g_type_info == *g_type_info)
        return (char*)this + 16;
    return 0;
}
