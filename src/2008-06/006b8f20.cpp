// roc 2008-06 006b8f20  unit: CXTPCommandBar  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006b8f20
//
// 006b8f20  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006b8f24  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006b8f28  8b542404             mov edx, dword ptr [esp + 4]
// 006b8f2c  50                   push eax
// 006b8f2d  51                   push ecx
// 006b8f2e  50                   push eax
// 006b8f2f  52                   push edx
// 006b8f30  ff15ac288000         call dword ptr [0x8028ac]
// 006b8f36  83c410               add esp, 0x10
// 006b8f39  c3                   ret 
// copied from an identical function in another client (function ?sub_00647a90@ns_ROCX000015@ns_ROCX00004a@@YAXHHH@Z)

namespace ns_ROCX000015 {
extern char G;

char* fn_ROCX000015()
{
    return &G;
}
}
