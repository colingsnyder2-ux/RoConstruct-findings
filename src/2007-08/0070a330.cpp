// from server: 43% by colin
struct CXTColorPageStandard {
    char pad[0x120];
    int field_120;
    CXTColorPageStandard(int);
};

extern "C" void __stdcall sub_738808(int, int, int);
extern "C" void __stdcall sub_709d00();
extern "C" void* __stdcall sub_738718();

CXTColorPageStandard::CXTColorPageStandard(int a)
{
    sub_738808(0x30, 0, 0x2462);
    *(void**)this = (void*)0x7dd70c;
    sub_709d00();
    void* p = sub_738718();
    *(unsigned int*)((char*)p + 4) &= 0xffffffdf;
    field_120 = a;
}
