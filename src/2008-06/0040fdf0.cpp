// roc 2008-06 0040fdf0  unit: UIEnumConnections::V?$CComEnum::?$CComObject  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040fdf0
//
// 0040fdf0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0040fdf4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0040fdf8  8b542404             mov edx, dword ptr [esp + 4]
// 0040fdfc  50                   push eax
// 0040fdfd  51                   push ecx
// 0040fdfe  68c8d38000           push 0x80d3c8
// 0040fe03  52                   push edx
// 0040fe04  e87724ffff           call 0x402280
// 0040fe09  c20c00               ret 0xc
// copied from an identical function in another client (function ?sub_404880@ns_ROCX000023@@YGHHHH@Z)

namespace ns_ROCX000023 {
extern "C" int __stdcall sub_4022a0(int, void*, int, int);

extern int G_784f68;

int __stdcall sub_404880(int a1, int a2, int a3)
{
    return sub_4022a0(a1, &G_784f68, a2, a3);
}
}
