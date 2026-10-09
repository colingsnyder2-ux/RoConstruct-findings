// roc 2010-06 0087ab20  unit: CXTPPropertyGridInplaceButtons  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0087ab20
//
// 0087ab20  56                   push esi
// 0087ab21  8bf1                 mov esi, ecx
// 0087ab23  8d8e84000000         lea ecx, [esi + 0x84]
// 0087ab29  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 0087ab2f  8d8e80000000         lea ecx, [esi + 0x80]
// 0087ab35  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 0087ab3b  8d4e7c               lea ecx, [esi + 0x7c]
// 0087ab3e  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 0087ab44  8d4e78               lea ecx, [esi + 0x78]
// 0087ab47  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 0087ab4d  8d4e74               lea ecx, [esi + 0x74]
// 0087ab50  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 0087ab56  8d4e70               lea ecx, [esi + 0x70]
// 0087ab59  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 0087ab5f  8bce                 mov ecx, esi
// 0087ab61  5e                   pop esi
// 0087ab62  e959221000           jmp 0x97cdc0
// copied from an identical function in another client (function ?func@CXTPPropertyGridInplaceButtons@ns_ROCX000036@ns_ROCX00000e@@QAEXXZ)

namespace ns_ROCX000036 {
struct B_func_00802960 { virtual ~B_func_00802960(); };
struct S_func_00802960 : B_func_00802960 { ~S_func_00802960(); };
S_func_00802960::~S_func_00802960()
{
}
}
