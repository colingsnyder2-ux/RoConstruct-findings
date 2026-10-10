// from server: 68% by atomic.potato
struct TypeInfo
{
    bool operator==(const TypeInfo& other) const;
};

struct S
{
    TypeInfo* value;
    int f();
};

extern "C" bool type_info_equal(TypeInfo*, const TypeInfo*);

S* const g_type = (S*)0xb87bc8;

int S::f()
{
    TypeInfo* p = *(TypeInfo**)this;
    TypeInfo* q = *(TypeInfo**)((char*)p + 8);
    return type_info_equal((TypeInfo*)0xb87bc8, q);
}
