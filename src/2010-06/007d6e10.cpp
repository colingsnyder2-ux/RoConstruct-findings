// roc 2010-06 007d6e10  unit: UCXTPReportDataAllocatorData::?$CXTPHeapAllocatorT  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007d6e10
//
// 007d6e10  83ec0c               sub esp, 0xc
// 007d6e13  8b442410             mov eax, dword ptr [esp + 0x10]
// 007d6e17  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007d6e1b  8b542418             mov edx, dword ptr [esp + 0x18]
// 007d6e1f  890424               mov dword ptr [esp], eax
// 007d6e22  894c2404             mov dword ptr [esp + 4], ecx
// 007d6e26  8b0df855c200         mov ecx, dword ptr [0xc255f8]
// 007d6e2c  8d0424               lea eax, [esp]
// 007d6e2f  50                   push eax
// 007d6e30  51                   push ecx
// 007d6e31  b9f055c200           mov ecx, 0xc255f0
// 007d6e36  89542410             mov dword ptr [esp + 0x10], edx
// 007d6e3a  e8b1bfffff           call 0x7d2df0
// 007d6e3f  83c40c               add esp, 0xc
// 007d6e42  c3                   ret 
// copied from an identical function in another client (function ?AddTimespec@ns_ROCX00000b@ns_ROCX000009@@YAXPBXII@Z)

namespace ns_ROCX00000b {
struct S_func_007495e0 {
    char pad0[696];
    int m_x;
    void f(int a1);
};
void S_func_007495e0::f(int a1)
{
    m_x = (int)a1;
}
}
