// from server: 81% by atomic.potato
struct TypeInfo
{
    bool operator==(const TypeInfo& other) const;
};

extern "C" bool __cdecl type_info_equal(const TypeInfo*, const TypeInfo*);

struct S
{
    void* f(void*);
};

void* S::f(void* p)
{
    static const TypeInfo* info = 0;
    if (type_info_equal(info, (const TypeInfo*)0x00b7d608))
        return (char*)this + 0x10;
    return 0;
}
