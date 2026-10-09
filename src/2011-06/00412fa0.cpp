// roc 2011-06 00412fa0  unit: VCBrowserViewExternal::?$CComObjectNoLock  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00412fa0
//
// 00412fa0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00412fa4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00412fa8  8b542404             mov edx, dword ptr [esp + 4]
// 00412fac  50                   push eax
// 00412fad  51                   push ecx
// 00412fae  6840d9a500           push 0xa5d940
// 00412fb3  52                   push edx
// 00412fb4  e80738ffff           call 0x4067c0
// 00412fb9  c20c00               ret 0xc
// copied from an identical function in another client (function ?sub_404880@ns_ROCX000016@@YGHHHH@Z)

namespace ns_ROCX000016 {
extern "C" int __stdcall sub_4022a0(int, void*, int, int);

extern int G_784f68;

int __stdcall sub_404880(int a1, int a2, int a3)
{
    return sub_4022a0(a1, &G_784f68, a2, a3);
}
}
