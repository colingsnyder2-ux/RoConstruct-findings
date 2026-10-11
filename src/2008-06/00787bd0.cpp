// from server: 42% by colin
struct CXTColorPageStandard {
    char pad[0x118];
    int field_118;
    CXTColorPageStandard(int);
    void sub_787600();
    void* sub_7bc3e2();
};

extern "C" void* __stdcall sub_7bc4d2(int, int, int);

CXTColorPageStandard::CXTColorPageStandard(int arg)
{
    sub_7bc4d2(0x30, 0, 0x2462);
    *(void**)this = (void*)0x869b64;
    sub_787600();
    void* p = sub_7bc3e2();
    *(int*)((char*)p + 4) &= 0xffffffdf;
    field_118 = arg;
}
