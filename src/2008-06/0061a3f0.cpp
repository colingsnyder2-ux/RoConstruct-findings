// roc 2008-06 0061a3f0  unit: RBX::InletTool  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0061a3f0
//
// 0061a3f0  837c240803           cmp dword ptr [esp + 8], 3
// 0061a3f5  7505                 jne 0x61a3fc
// 0061a3f7  e814fdffff           call 0x61a110
// 0061a3fc  c20c00               ret 0xc
// copied from an identical function in another client (function ?target_726c70@ns_ROCX000002@@YGXHHH@Z)

namespace ns_ROCX000002 {
extern "C" void __cdecl helper_726ed0();

void __stdcall target_726c70(int a, int b, int c)
{
    if (b == 3)
        helper_726ed0();
}
}
