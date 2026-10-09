// roc 2007-03 00404780  unit: seg_00400000  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00404780
//
// 00404780  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00404784  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00404788  8b542404             mov edx, dword ptr [esp + 4]
// 0040478c  50                   push eax
// 0040478d  51                   push ecx
// 0040478e  68683f7800           push 0x783f68
// 00404793  52                   push edx
// 00404794  e8f7daffff           call 0x402290
// 00404799  c20c00               ret 0xc
// copied from an identical function in another client (function ?sub_404880@ns_ROCX000013@@YGHHHH@Z)

namespace ns_ROCX000013 {
extern "C" int __stdcall sub_4022a0(int, void*, int, int);

extern int G_784f68;

int __stdcall sub_404880(int a1, int a2, int a3)
{
    return sub_4022a0(a1, &G_784f68, a2, a3);
}
}
