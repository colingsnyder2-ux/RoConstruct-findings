// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// from server: 95% by atomic.potato
extern "C" const void *type_info_object;
extern "C" int __stdcall type_compare(const void*, const void*);

struct TypeInfo
{
    bool operator==(const TypeInfo& other) const;
};

struct S
{
    void* f(void* p);
};

void* S::f(void* p)
{
    if (type_compare(*(const void**)p, type_info_object))
        return (char*)this + 16;
    return 0;
}