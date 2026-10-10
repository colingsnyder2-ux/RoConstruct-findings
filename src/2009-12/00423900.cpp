// from server: 74% by atomic.potato
extern "C" int __stdcall type_info_equal(void*, const void*);
extern "C" void* g_type_info;

struct S
{
    void* f(void*);
};

void* S::f(void* p)
{
    if (type_info_equal(p, (const void*)0x00b04608))
        return (char*)this + 0x10;
    return 0;
}
