// from server: 81% by atomic.potato
struct TypeInfo
{
    bool operator==(const TypeInfo& other) const;
};

extern "C" bool __stdcall type_info_equal(const TypeInfo*, const TypeInfo*);
extern TypeInfo* const g_type_info;

struct S
{
    char* f(void*);
};

char* S::f(void* value)
{
    if (type_info_equal((const TypeInfo*)value, g_type_info))
        return (char*)this + 16;
    return 0;
}
