// roc 2012-06 00407740  unit: VCApp::?$CComObject  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00407740
//
// 00407740  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00407744  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00407748  8b542404             mov edx, dword ptr [esp + 4]
// 0040774c  50                   push eax
// 0040774d  51                   push ecx
// 0040774e  68d037b400           push 0xb437d0
// 00407753  52                   push edx
// 00407754  e8f7f9ffff           call 0x407150
// 00407759  c20c00               ret 0xc
// copied from an identical function in another client (function ?sub_404880@ns_ROCX000079@@YGHHHH@Z)

namespace ns_ROCX000079 {
extern "C" int __stdcall sub_4022a0(int, void*, int, int);

extern int G_784f68;

int __stdcall sub_404880(int a1, int a2, int a3)
{
    return sub_4022a0(a1, &G_784f68, a2, a3);
}
}
