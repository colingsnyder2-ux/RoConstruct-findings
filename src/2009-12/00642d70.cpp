// from server: 82% by atomic.potato
struct Descriptor
{
    int f();
};

struct TypeInfo
{
    bool operator==(const TypeInfo&) const;
};

extern "C" bool (__thiscall *type_info_equal)(TypeInfo*, const TypeInfo&);

int Descriptor::f()
{
    TypeInfo* p = *(TypeInfo**)this;
    TypeInfo* q = *(TypeInfo**)((char*)p + 8);
    return type_info_equal((TypeInfo*)0x00b13138, *q);
}
