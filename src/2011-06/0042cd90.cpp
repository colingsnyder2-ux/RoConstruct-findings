// from server: 84% by atomic.potato
struct TypeInfo
{
    bool operator==(const TypeInfo& other) const;
};

extern "C" bool __stdcall type_info_equal(const TypeInfo*, const TypeInfo*);
extern const TypeInfo* delete_data_type_info;

struct S
{
    void* f(const TypeInfo&);
};

void* S::f(const TypeInfo& other)
{
    if (delete_data_type_info[0] == other)
        return (char*)this + 16;
    return 0;
}
