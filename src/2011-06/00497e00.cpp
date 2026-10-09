// roc 2011-06 00497e00  unit: DxUserInputJob  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00497e00
//
// 00497e00  8b442408             mov eax, dword ptr [esp + 8]
// 00497e04  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00497e08  f30f1001             movss xmm0, dword ptr [ecx]
// 00497e0c  f30f5800             addss xmm0, dword ptr [eax]
// 00497e10  f30f1100             movss dword ptr [eax], xmm0
// 00497e14  f30f104104           movss xmm0, dword ptr [ecx + 4]
// 00497e19  f30f584004           addss xmm0, dword ptr [eax + 4]
// 00497e1e  f30f114004           movss dword ptr [eax + 4], xmm0
// 00497e23  c3                   ret 
// copied from an identical function in another client (function ?DxUserInput_Add@ns_ROCX000001@ns_ROCX00003d@@YAXPAUDxUserInput@12@0@Z)

namespace ns_ROCX000001 {
extern void G1_func_0044b740();
void fn_ROCX000001()
{
    G1_func_0044b740();
}
}
