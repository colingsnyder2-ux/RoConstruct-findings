// from server: 76% by atomic.potato
typedef int BOOL;

struct type_info
{
    BOOL operator==(const type_info&) const;
};

extern "C" BOOL __cdecl type_info_equal(const type_info*, const type_info*);

struct S
{
    void* f(type_info);
};

void* S::f(type_info value)
{
    if (type_info_equal(&value, (const type_info*)0x00c0ad28))
        return (char*)this + 16;
    return 0;
}
