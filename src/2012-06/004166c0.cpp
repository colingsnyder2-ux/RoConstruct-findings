// roc 2012-06 004166c0  unit: VCBrowserViewExternal::?$CComObjectNoLock  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004166c0
//
// 004166c0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004166c4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004166c8  8b542404             mov edx, dword ptr [esp + 4]
// 004166cc  50                   push eax
// 004166cd  51                   push ecx
// 004166ce  680c5eb400           push 0xb45e0c
// 004166d3  52                   push edx
// 004166d4  e8770affff           call 0x407150
// 004166d9  c20c00               ret 0xc
// copied from an identical function in another client (function ?sub_404880@ns_ROCX000079@@YGHHHH@Z)

namespace ns_ROCX000079 {
extern "C" int __stdcall sub_4022a0(int, void*, int, int);

extern int G_784f68;

int __stdcall sub_404880(int a1, int a2, int a3)
{
    return sub_4022a0(a1, &G_784f68, a2, a3);
}
}
