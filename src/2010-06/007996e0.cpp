// from server: 71% by atomic.potato
struct TypeInfo
{
    int operator==(const TypeInfo& other) const;
};

extern "C" int __cdecl type_info_equal(const TypeInfo*, const TypeInfo*);

struct S
{
    void* f(void* value);
};

void* S::f(void* value)
{
    TypeInfo* a = (TypeInfo*)value;
    TypeInfo* b = (TypeInfo*)0x00be58a0;
    if (type_info_equal(a, b))
        return (char*)this + 0x10;
    return 0;
}
