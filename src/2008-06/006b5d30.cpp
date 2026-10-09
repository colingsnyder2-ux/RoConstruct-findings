// roc 2008-06 006b5d30  unit: CXTPCommandBar  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006b5d30
//
// 006b5d30  56                   push esi
// 006b5d31  8bf1                 mov esi, ecx
// 006b5d33  e898f1ffff           call 0x6b4ed0
// 006b5d38  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006b5d3c  8b10                 mov edx, dword ptr [eax]
// 006b5d3e  8b5274               mov edx, dword ptr [edx + 0x74]
// 006b5d41  56                   push esi
// 006b5d42  51                   push ecx
// 006b5d43  8bc8                 mov ecx, eax
// 006b5d45  ffd2                 call edx
// 006b5d47  5e                   pop esi
// 006b5d48  c20400               ret 4
// copied from an identical function in another client (function ?Method@CXTPCommandBar@ns_ROCX00000b@ns_ROCX000045@@QAEXH@Z)

namespace ns_ROCX00000b {
extern void G1_func_007f8eb0();
void fn_ROCX00000b()
{
    G1_func_007f8eb0();
}
}
