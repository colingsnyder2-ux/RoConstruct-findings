// from server: 70% by colin
// roc 2007-08 00698210  unit: CXTPPropertyGridItemConstraint  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00698210
//
// 00698210  8b442408             mov eax, dword ptr [esp + 8]
// 00698214  8b08                 mov ecx, dword ptr [eax]
// 00698216  83c120               add ecx, 0x20
// 00698219  ff1598dd7700         call dword ptr [0x77dd98]
// 0069821f  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00698223  8b09                 mov ecx, dword ptr [ecx]
// 00698225  50                   push eax
// 00698226  83c120               add ecx, 0x20
// 00698229  ff15b8dc7700         call dword ptr [0x77dcb8]
// 0069822f  c3                   ret 

extern "C" void* __stdcall sub_77DD98(void*);
extern "C" void* __stdcall sub_77DCB8(void*);

struct CXTPPropertyGridItemConstraint
{
    void* field0;
    void func(void* arg1, void* arg2);
};

void CXTPPropertyGridItemConstraint::func(void* arg1, void* arg2)
{
    void* p1 = sub_77DD98((char*)*(void**)arg2 + 0x20);
    void* p2 = sub_77DCB8((char*)*(void**)arg1 + 0x20);
    (void)p1;
    (void)p2;
}
