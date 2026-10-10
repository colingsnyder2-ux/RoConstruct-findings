// from server: 74% by atomic.potato
struct S
{
    void* value;

    S* f(const void* type);
};

extern "C" int __stdcall type_info_equal(const void*, const void*);

S* S::f(const void* type)
{
    if (type_info_equal(type, (const void*)0x00de2000))
        return (S*)((char*)this + 0x10);
    return 0;
}
