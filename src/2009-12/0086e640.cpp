// roc 2009-12 0086e640  unit: CXTPResourceManager  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086e640
//
// 0086e640  56                   push esi
// 0086e641  8bf1                 mov esi, ecx
// 0086e643  e838faffff           call 0x86e080
// 0086e648  c7460400000000       mov dword ptr [esi + 4], 0
// 0086e64f  5e                   pop esi
// 0086e650  c3                   ret 
// copied from an identical function in another client (function ?Init@CXTPResourceManager@ns_ROCX000000@ns_ROCX0000b3@@QAEXXZ)

namespace ns_ROCX000000 {
extern void G1_func_00661f40();
void fn_ROCX000000()
{
    G1_func_00661f40();
}
}
