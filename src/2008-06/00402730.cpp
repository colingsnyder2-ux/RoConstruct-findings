// roc 2008-06 00402730  unit: VCWorkspace::?$CComObject  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00402730
//
// 00402730  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00402734  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00402738  8b542404             mov edx, dword ptr [esp + 4]
// 0040273c  50                   push eax
// 0040273d  51                   push ecx
// 0040273e  68a8ae8000           push 0x80aea8
// 00402743  52                   push edx
// 00402744  e837fbffff           call 0x402280
// 00402749  c20c00               ret 0xc
// copied from an identical function in another client (function ?sub_404880@ns_ROCX000023@@YGHHHH@Z)

namespace ns_ROCX000023 {
extern "C" int __stdcall sub_4022a0(int, void*, int, int);

extern int G_784f68;

int __stdcall sub_404880(int a1, int a2, int a3)
{
    return sub_4022a0(a1, &G_784f68, a2, a3);
}
}
