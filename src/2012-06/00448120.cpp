// from server: 77% by atomic.potato
struct TypeInfo
{
    bool operator==(const TypeInfo&) const;
};

extern "C" bool __stdcall type_info_equal(const TypeInfo*, const TypeInfo*);

struct S
{
    void* f(void*);
};

void* S::f(void* p)
{
    static const TypeInfo* const t = (const TypeInfo*)0x00d67d30;
    if (type_info_equal((const TypeInfo*)p, t))
        return (char*)this + 0x10;
    return 0;
}
