// roc 2012-06 0041b330  unit: VCRbxObject::?$CComObjectNoLock  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0041b330
//
// 0041b330  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0041b334  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0041b338  8b542404             mov edx, dword ptr [esp + 4]
// 0041b33c  50                   push eax
// 0041b33d  51                   push ecx
// 0041b33e  683c70b400           push 0xb4703c
// 0041b343  52                   push edx
// 0041b344  e807befeff           call 0x407150
// 0041b349  c20c00               ret 0xc
// copied from an identical function in another client (function ?sub_404880@ns_ROCX000079@@YGHHHH@Z)

namespace ns_ROCX000079 {
extern "C" int __stdcall sub_4022a0(int, void*, int, int);

extern int G_784f68;

int __stdcall sub_404880(int a1, int a2, int a3)
{
    return sub_4022a0(a1, &G_784f68, a2, a3);
}
}
