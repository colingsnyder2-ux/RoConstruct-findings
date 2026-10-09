// roc 2010-06 004c4640  unit: RBX::VInstance::?$NonFactoryProduct  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004c4640
//
// 004c4640  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004c4644  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004c4648  8b542404             mov edx, dword ptr [esp + 4]
// 004c464c  50                   push eax
// 004c464d  8b02                 mov eax, dword ptr [edx]
// 004c464f  51                   push ecx
// 004c4650  ffd0                 call eax
// 004c4652  83c408               add esp, 8
// 004c4655  c3                   ret 
// copied from an identical function in another client (function ?f@ns_ROCX000001@ns_ROCX00007f@@YAXHHH@Z)

namespace ns_ROCX000001 {
extern void G1_func_005ea1b0();
void fn_ROCX000001()
{
    G1_func_005ea1b0();
}
}
