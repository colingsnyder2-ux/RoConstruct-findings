// from server: 80% by atomic.potato
struct TypeInfo
{
    bool operator==(const TypeInfo&) const;
};

extern bool __stdcall type_info_equal(const TypeInfo*, const TypeInfo&);
extern const TypeInfo type_info_00b7d800;

struct S
{
    void* f(void*);
};

void* S::f(void* p)
{
    if (type_info_equal((const TypeInfo*)p, type_info_00b7d800))
        return (char*)this + 16;
    return 0;
}
