// from server: 23% by colin
struct VCBrowserViewExternal {
    void* vtable;
    unsigned int field_4;
    char pad_8[8];
    int field_10;
    void Init();
};

extern "C" void __stdcall sub_40E990(int* p);

void VCBrowserViewExternal::Init()
{
    vtable = (void*)0x80d7dc;
    field_4 = 0xc0000001;
    int* p = *(int**)0x96c268;
    void (__stdcall *fn)(void) = *(void (__stdcall **)(void))((char*)*(void**)p + 8);
    fn();
    sub_40E990(&field_10);
}
