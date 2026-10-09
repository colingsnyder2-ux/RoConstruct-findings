// roc 2009-12 006a3b60  unit: RBX::Lua::VLiveThreadRef::?$sp_counted_impl_p  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006a3b60
//
// 006a3b60  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006a3b64  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006a3b68  8b542404             mov edx, dword ptr [esp + 4]
// 006a3b6c  50                   push eax
// 006a3b6d  8b02                 mov eax, dword ptr [edx]
// 006a3b6f  51                   push ecx
// 006a3b70  ffd0                 call eax
// 006a3b72  83c408               add esp, 8
// 006a3b75  c3                   ret 
// copied from an identical function in another client (function ?f@ns_ROCX000001@ns_ROCX000038@@YAXHHH@Z)

namespace ns_ROCX000001 {
extern void G1_func_0060b490();
void fn_ROCX000001()
{
    G1_func_0060b490();
}
}
