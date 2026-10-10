// from server: 80% by atomic.potato
struct S
{
    void *f(void *);
};

struct TypeInfo
{
    bool operator==(const TypeInfo &) const;
};

extern "C" bool __stdcall type_info_equal(const TypeInfo *, const TypeInfo *);
extern TypeInfo global_type_info;

void *S::f(void *value)
{
    if (type_info_equal((const TypeInfo *)value, &global_type_info))
        return (char *)this + 16;
    return 0;
}
