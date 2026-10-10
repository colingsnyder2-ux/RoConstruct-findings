// from server: 27% by colin
struct VCContent_CComAggObject
{
    void Init();
};

extern "C" void __stdcall sub_77E678();
extern "C" void __stdcall sub_8BAE44();

void VCContent_CComAggObject::Init()
{
    *(int*)this = 0x786f40;
    *(int*)((char*)this + 4) = 0xc0000001;

    void* p = *(void**)0x8bae44;
    void** vtbl = *(void***)p;
    void (__stdcall *fn)(void*) = (void (__stdcall *)(void*))vtbl[2];
    fn(p);

    sub_77E678();
}
