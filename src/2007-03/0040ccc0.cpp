// roc 2007-03 0040ccc0  unit: seg_00400000  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0040ccc0
//
// 0040ccc0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0040ccc4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0040ccc8  8b542404             mov edx, dword ptr [esp + 4]
// 0040cccc  50                   push eax
// 0040cccd  51                   push ecx
// 0040ccce  68444e7800           push 0x784e44
// 0040ccd3  52                   push edx
// 0040ccd4  e8b755ffff           call 0x402290
// 0040ccd9  c20c00               ret 0xc
// copied from an identical function in another client (function ?sub_404880@ns_ROCX000013@@YGHHHH@Z)

namespace ns_ROCX000013 {
extern "C" int __stdcall sub_4022a0(int, void*, int, int);

extern int G_784f68;

int __stdcall sub_404880(int a1, int a2, int a3)
{
    return sub_4022a0(a1, &G_784f68, a2, a3);
}
}
