// from server: 95% by atomic.potato
struct TypeInfo
{
    bool operator==(const TypeInfo&) const;
};

extern "C" bool __stdcall type_info_equal(const TypeInfo*, const TypeInfo*);
extern const TypeInfo global_type_info;

struct S_func_005e7420
{
    void* f(const TypeInfo*);
};

void* S_func_005e7420::f(const TypeInfo* value)
{
    if (*value == global_type_info)
        return (char*)this + 16;
    return 0;
}
