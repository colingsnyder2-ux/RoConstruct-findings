// roc 2007-03 004060e0  unit: seg_00400000  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004060e0
//
// 004060e0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004060e4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004060e8  8b542404             mov edx, dword ptr [esp + 4]
// 004060ec  50                   push eax
// 004060ed  51                   push ecx
// 004060ee  68583e7800           push 0x783e58
// 004060f3  52                   push edx
// 004060f4  e897c1ffff           call 0x402290
// 004060f9  c20c00               ret 0xc
// copied from an identical function in another client (function ?sub_404880@ns_ROCX000013@@YGHHHH@Z)

namespace ns_ROCX000013 {
extern "C" int __stdcall sub_4022a0(int, void*, int, int);

extern int G_784f68;

int __stdcall sub_404880(int a1, int a2, int a3)
{
    return sub_4022a0(a1, &G_784f68, a2, a3);
}
}
