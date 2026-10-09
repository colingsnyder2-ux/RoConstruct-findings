// roc 2009-12 00822db0  unit: UCXTPReportRowAllocatorData::?$CXTPHeapAllocatorT  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00822db0
//
// 00822db0  83ec0c               sub esp, 0xc
// 00822db3  8b442410             mov eax, dword ptr [esp + 0x10]
// 00822db7  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00822dbb  8b542418             mov edx, dword ptr [esp + 0x18]
// 00822dbf  890424               mov dword ptr [esp], eax
// 00822dc2  894c2404             mov dword ptr [esp + 4], ecx
// 00822dc6  8b0dc8aeb900         mov ecx, dword ptr [0xb9aec8]
// 00822dcc  8d0424               lea eax, [esp]
// 00822dcf  50                   push eax
// 00822dd0  51                   push ecx
// 00822dd1  b9c0aeb900           mov ecx, 0xb9aec0
// 00822dd6  89542410             mov dword ptr [esp + 0x10], edx
// 00822dda  e8b1bfffff           call 0x81ed90
// 00822ddf  83c40c               add esp, 0xc
// 00822de2  c3                   ret 
// copied from an identical function in another client (function ?AddTimespec@ns_ROCX00000b@ns_ROCX00003f@@YAXPBXII@Z)

namespace ns_ROCX00000b {
namespace ns_ROCX00002b {
struct CXTPImageManagerIcon {
    char pad[0x30];
    int sub_64b2c0(int);
    int set(int);
};

int CXTPImageManagerIcon::set(int value) {
    ((CXTPImageManagerIcon*)((char*)this + 0x30))->sub_64b2c0(value);
    return value;
}
}
}
