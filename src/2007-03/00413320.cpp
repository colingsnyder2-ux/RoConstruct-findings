// roc 2007-03 00413320  unit: seg_00410000  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00413320
//
// 00413320  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00413324  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00413328  8b542404             mov edx, dword ptr [esp + 4]
// 0041332c  50                   push eax
// 0041332d  51                   push ecx
// 0041332e  686c5f7800           push 0x785f6c
// 00413333  52                   push edx
// 00413334  e857effeff           call 0x402290
// 00413339  c20c00               ret 0xc
// copied from an identical function in another client (function ?sub_404880@ns_ROCX000013@@YGHHHH@Z)

namespace ns_ROCX000013 {
extern "C" int __stdcall sub_4022a0(int, void*, int, int);

extern int G_784f68;

int __stdcall sub_404880(int a1, int a2, int a3)
{
    return sub_4022a0(a1, &G_784f68, a2, a3);
}
}
