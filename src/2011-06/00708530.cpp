// from server: 46% by atomic.potato
struct TypeInfo
{
    bool operator==(const TypeInfo&) const;
};

extern "C" TypeInfo* get_type_info(int);

struct ArcHandles
{
    int f();
};

int ArcHandles::f()
{
    TypeInfo* p = get_type_info(0);
    return *reinterpret_cast<TypeInfo*>(*reinterpret_cast<int**>(this) + 2) == *p;
}
