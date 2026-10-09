// roc 2007-03 00409f60  unit: seg_00400000  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00409f60
//
// 00409f60  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00409f64  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00409f68  8b542404             mov edx, dword ptr [esp + 4]
// 00409f6c  50                   push eax
// 00409f6d  51                   push ecx
// 00409f6e  6810427800           push 0x784210
// 00409f73  52                   push edx
// 00409f74  e81783ffff           call 0x402290
// 00409f79  c20c00               ret 0xc
// copied from an identical function in another client (function ?sub_404880@ns_ROCX000013@@YGHHHH@Z)

namespace ns_ROCX000013 {
extern "C" int __stdcall sub_4022a0(int, void*, int, int);

extern int G_784f68;

int __stdcall sub_404880(int a1, int a2, int a3)
{
    return sub_4022a0(a1, &G_784f68, a2, a3);
}
}
