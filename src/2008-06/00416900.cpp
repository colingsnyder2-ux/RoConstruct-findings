// roc 2008-06 00416900  unit: VCContent::?$CComObject  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00416900
//
// 00416900  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00416904  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00416908  8b542404             mov edx, dword ptr [esp + 4]
// 0041690c  50                   push eax
// 0041690d  51                   push ecx
// 0041690e  68d0ea8000           push 0x80ead0
// 00416913  52                   push edx
// 00416914  e867b9feff           call 0x402280
// 00416919  c20c00               ret 0xc
// copied from an identical function in another client (function ?sub_404880@ns_ROCX000023@@YGHHHH@Z)

namespace ns_ROCX000023 {
extern "C" int __stdcall sub_4022a0(int, void*, int, int);

extern int G_784f68;

int __stdcall sub_404880(int a1, int a2, int a3)
{
    return sub_4022a0(a1, &G_784f68, a2, a3);
}
}
