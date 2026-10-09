// roc 2009-06 00747fa0  unit: UCXTPReportAllocatorDefaultData::?$CXTPHeapAllocatorT  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00747fa0
//
// 00747fa0  83ec0c               sub esp, 0xc
// 00747fa3  8b442410             mov eax, dword ptr [esp + 0x10]
// 00747fa7  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00747fab  8b542418             mov edx, dword ptr [esp + 0x18]
// 00747faf  890424               mov dword ptr [esp], eax
// 00747fb2  894c2404             mov dword ptr [esp + 4], ecx
// 00747fb6  8b0d6c1aa500         mov ecx, dword ptr [0xa51a6c]
// 00747fbc  8d0424               lea eax, [esp]
// 00747fbf  50                   push eax
// 00747fc0  51                   push ecx
// 00747fc1  b9641aa500           mov ecx, 0xa51a64
// 00747fc6  89542410             mov dword ptr [esp + 0x10], edx
// 00747fca  e801bfffff           call 0x743ed0
// 00747fcf  83c40c               add esp, 0xc
// 00747fd2  c3                   ret 
// copied from an identical function in another client (function ?AddTimespec@ns_ROCX00000b@@YAXPBXII@Z)

namespace ns_ROCX00000b {
struct CXTPReportControlLocale
{
};

struct Sub656db0
{
    void Call(unsigned int a, const void* p);
};

extern unsigned int G_8c87d8;
extern unsigned int G_8c87d0;

void __cdecl AddTimespec(const void* p, unsigned int a, unsigned int b)
{
    unsigned int local[3];
    local[0] = (unsigned int)p;
    local[1] = a;
    local[2] = b;
    ((Sub656db0*)&G_8c87d0)->Call(G_8c87d8, local);
}
}
