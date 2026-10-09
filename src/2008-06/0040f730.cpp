// roc 2008-06 0040f730  unit: VCBrowserViewExternal::?$CComObject  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040f730
//
// 0040f730  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0040f734  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0040f738  8b542404             mov edx, dword ptr [esp + 4]
// 0040f73c  50                   push eax
// 0040f73d  51                   push ecx
// 0040f73e  684cd68000           push 0x80d64c
// 0040f743  52                   push edx
// 0040f744  e8372bffff           call 0x402280
// 0040f749  c20c00               ret 0xc
// copied from an identical function in another client (function ?sub_404880@ns_ROCX000023@@YGHHHH@Z)

namespace ns_ROCX000023 {
extern "C" int __stdcall sub_4022a0(int, void*, int, int);

extern int G_784f68;

int __stdcall sub_404880(int a1, int a2, int a3)
{
    return sub_4022a0(a1, &G_784f68, a2, a3);
}
}
