// from server: 95% by atomic.potato
typedef int BOOL;

struct TypeInfo
{
    BOOL operator==(const TypeInfo& other) const;
};

extern "C" BOOL __cdecl type_info_equal(const TypeInfo*, const TypeInfo*);

struct VCounter
{
    void* check(TypeInfo*);
};

void* VCounter::check(TypeInfo* type)
{
    if (*type == *(TypeInfo*)0xe02520)
        return (char*)this + 16;
    return 0;
}
