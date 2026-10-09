// roc 2011-06 00836fa0  unit: UCXTPReportRowAllocatorData::?$CXTPHeapAllocatorT  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00836fa0
//
// 00836fa0  83ec0c               sub esp, 0xc
// 00836fa3  8b442410             mov eax, dword ptr [esp + 0x10]
// 00836fa7  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00836fab  8b542418             mov edx, dword ptr [esp + 0x18]
// 00836faf  890424               mov dword ptr [esp], eax
// 00836fb2  894c2404             mov dword ptr [esp + 4], ecx
// 00836fb6  8b0dd482d100         mov ecx, dword ptr [0xd182d4]
// 00836fbc  8d0424               lea eax, [esp]
// 00836fbf  50                   push eax
// 00836fc0  51                   push ecx
// 00836fc1  b9cc82d100           mov ecx, 0xd182cc
// 00836fc6  89542410             mov dword ptr [esp + 0x10], edx
// 00836fca  e841bfffff           call 0x832f10
// 00836fcf  83c40c               add esp, 0xc
// 00836fd2  c3                   ret 
// copied from an identical function in another client (function ?AddTimespec@ns_ROCX000008@ns_ROCX000030@@YAXPBXII@Z)

namespace ns_ROCX000008 {
extern char G;

char* fn_ROCX000008()
{
    return &G;
}
}
