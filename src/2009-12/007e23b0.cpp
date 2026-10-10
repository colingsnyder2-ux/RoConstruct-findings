// from server: 95% by atomic.potato
struct TypeInfo
{
    bool operator==(const TypeInfo& other) const;
};

struct S
{
    void* f(void* p);
};

extern const TypeInfo type_info_object;

void* S::f(void* p)
{
    if (*(TypeInfo*)p == type_info_object)
        return (char*)this + 16;
    return 0;
}
