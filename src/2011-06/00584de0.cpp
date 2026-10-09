// roc 2011-06 00584de0  unit: RBX::CRenderSettings  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00584de0
//
// 00584de0  55                   push ebp
// 00584de1  8bec                 mov ebp, esp
// 00584de3  e868843900           call 0x91d250
// 00584de8  5d                   pop ebp
// 00584de9  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX00000a@ns_ROCX00000a@@YAXXZ)

namespace ns_ROCX00000a {
extern void G1_func_0057a800();
void fn_ROCX00000a()
{
    G1_func_0057a800();
}
}
