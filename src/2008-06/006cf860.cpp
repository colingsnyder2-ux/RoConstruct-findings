// roc 2008-06 006cf860  unit: UCXTPReportRowAllocatorData::?$CXTPHeapAllocatorT  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006cf860
//
// 006cf860  83ec0c               sub esp, 0xc
// 006cf863  8b442410             mov eax, dword ptr [esp + 0x10]
// 006cf867  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006cf86b  8b542418             mov edx, dword ptr [esp + 0x18]
// 006cf86f  890424               mov dword ptr [esp], eax
// 006cf872  894c2404             mov dword ptr [esp + 4], ecx
// 006cf876  8b0d74e19700         mov ecx, dword ptr [0x97e174]
// 006cf87c  8d0424               lea eax, [esp]
// 006cf87f  50                   push eax
// 006cf880  51                   push ecx
// 006cf881  b96ce19700           mov ecx, 0x97e16c
// 006cf886  89542410             mov dword ptr [esp + 0x10], edx
// 006cf88a  e851c0ffff           call 0x6cb8e0
// 006cf88f  83c40c               add esp, 0xc
// 006cf892  c3                   ret 
// copied from an identical function in another client (function ?AddTimespec@ns_ROCX000008@@YAXPBXII@Z)

namespace ns_ROCX000008 {
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
