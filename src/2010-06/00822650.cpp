// roc 2010-06 00822650  unit: CXTPResourceManager  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00822650
//
// 00822650  56                   push esi
// 00822651  8bf1                 mov esi, ecx
// 00822653  e838faffff           call 0x822090
// 00822658  c7460400000000       mov dword ptr [esi + 4], 0
// 0082265f  5e                   pop esi
// 00822660  c3                   ret 
// copied from an identical function in another client (function ?Init@CXTPResourceManager@ns_ROCX000000@ns_ROCX00001b@@QAEXXZ)

namespace ns_ROCX000000 {
extern void G1_func_00696480();
void fn_ROCX000000()
{
    G1_func_00696480();
}
}
