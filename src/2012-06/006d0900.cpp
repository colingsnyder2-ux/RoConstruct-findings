// from server: 77% by atomic.potato
typedef int BOOL;

struct TypeInfo
{
    BOOL operator==(const TypeInfo& other) const;
};

extern "C" BOOL __stdcall type_info_equal(const TypeInfo&, const TypeInfo&);
extern const TypeInfo g_delete_data_type;

struct S_func_006d0900
{
    void* m_data;
    void* m_reserved;
    void* f(void* p);
};

void* S_func_006d0900::f(void* p)
{
    if (type_info_equal(*(const TypeInfo*)p, g_delete_data_type))
        return (char*)this + 16;
    return 0;
}
