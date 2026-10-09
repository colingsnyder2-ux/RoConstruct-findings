// roc 2011-06 004cc5e0  unit: RBX::VInstance::?$NonFactoryProduct  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004cc5e0
//
// 004cc5e0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004cc5e4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004cc5e8  8b542404             mov edx, dword ptr [esp + 4]
// 004cc5ec  50                   push eax
// 004cc5ed  8b02                 mov eax, dword ptr [edx]
// 004cc5ef  51                   push ecx
// 004cc5f0  ffd0                 call eax
// 004cc5f2  83c408               add esp, 8
// 004cc5f5  c3                   ret 
// copied from an identical function in another client (function ?f@ns_ROCX000007@ns_ROCX00001e@@YAXHHH@Z)

namespace ns_ROCX000007 {
extern void G1_func_0059f470();
void fn_ROCX000007()
{
    G1_func_0059f470();
}
}
