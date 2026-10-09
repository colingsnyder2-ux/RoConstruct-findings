// roc 2007-03 00402c30  unit: seg_00400000  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00402c30
//
// 00402c30  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00402c34  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00402c38  8b542404             mov edx, dword ptr [esp + 4]
// 00402c3c  50                   push eax
// 00402c3d  51                   push ecx
// 00402c3e  68883b7800           push 0x783b88
// 00402c43  52                   push edx
// 00402c44  e847f6ffff           call 0x402290
// 00402c49  c20c00               ret 0xc
// copied from an identical function in another client (function ?sub_404880@ns_ROCX000013@@YGHHHH@Z)

namespace ns_ROCX000013 {
extern "C" int __stdcall sub_4022a0(int, void*, int, int);

extern int G_784f68;

int __stdcall sub_404880(int a1, int a2, int a3)
{
    return sub_4022a0(a1, &G_784f68, a2, a3);
}
}
