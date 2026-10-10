// from server: 79% by atomic.potato
struct TypeInfo
{
    bool operator==(const TypeInfo*) const;
};

struct S
{
    void* f(void*);
};

extern "C" TypeInfo* get_type_info(void);

void* S::f(void* p)
{
    if (get_type_info()->operator==(*(const TypeInfo**)0xB04800))
        return (char*)this + 16;
    return 0;
}
