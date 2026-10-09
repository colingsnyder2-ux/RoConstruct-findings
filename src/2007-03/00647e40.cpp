// roc 2007-03 00647e40  unit: seg_00640000  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00647e40
//
// 00647e40  83ec0c               sub esp, 0xc
// 00647e43  8b442410             mov eax, dword ptr [esp + 0x10]
// 00647e47  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00647e4b  8b542418             mov edx, dword ptr [esp + 0x18]
// 00647e4f  890424               mov dword ptr [esp], eax
// 00647e52  894c2404             mov dword ptr [esp + 4], ecx
// 00647e56  8b0de8178c00         mov ecx, dword ptr [0x8c17e8]
// 00647e5c  8d0424               lea eax, [esp]
// 00647e5f  50                   push eax
// 00647e60  51                   push ecx
// 00647e61  b9e0178c00           mov ecx, 0x8c17e0
// 00647e66  89542410             mov dword ptr [esp + 0x10], edx
// 00647e6a  e8b1c8ffff           call 0x644720
// 00647e6f  83c40c               add esp, 0xc
// 00647e72  c3                   ret 
// copied from an identical function in another client (function ?AddTimespec@ns_ROCX000007@@YAXPBXII@Z)

namespace ns_ROCX000007 {
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
