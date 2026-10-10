// from server: 77% by atomic.potato
struct TypeInfo
{
    bool operator==(const TypeInfo& other) const;
};

struct S
{
    void* vtable;
    void* data;
    void* owner;
    void* reserved;
    TypeInfo* type;
    void* f(void* value);
};

extern "C" bool __stdcall type_info_equal(TypeInfo*, const TypeInfo*);

void* S::f(void* value)
{
    if (type_info_equal((TypeInfo*)value, (const TypeInfo*)0x00b64eb8))
        return (char*)this + 0x10;
    return 0;
}
