// from server: 76% by colin
struct VCContent
{
    int QueryInterface(int, void*);
};

extern "C" int __stdcall type_info_equal(const void*, const void*);
extern "C" void* __cdecl operator_new(unsigned int);
extern "C" void __cdecl operator_delete(void*);

int VCContent::QueryInterface(int riid, void* ppv)
{
    if (riid == 2)
    {
        void* p = ppv;
        int r = type_info_equal((const void*)0x883088, p);
        return r ? (int)p : 0;
    }
    if (riid == 0)
    {
        void* p = operator_new(4);
        if (p)
        {
            *(int*)p = *(int*)ppv;
            return (int)p;
        }
        return 0;
    }
    operator_delete(ppv);
    return 0;
}
