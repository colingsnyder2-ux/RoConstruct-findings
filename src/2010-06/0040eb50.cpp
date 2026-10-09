// roc 2010-06 0040eb50  unit: UIEnumConnections::V?$CComEnum::?$CComObject  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0040eb50
//
// 0040eb50  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0040eb54  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0040eb58  8b542404             mov edx, dword ptr [esp + 4]
// 0040eb5c  50                   push eax
// 0040eb5d  51                   push ecx
// 0040eb5e  683419a000           push 0xa01934
// 0040eb63  52                   push edx
// 0040eb64  e80764ffff           call 0x404f70
// 0040eb69  c20c00               ret 0xc
// copied from an identical function in another client (function ?sub_404880@ns_ROCX000005@@YGHHHH@Z)

namespace ns_ROCX000005 {
extern "C" int __stdcall sub_4022a0(int, void*, int, int);

extern int G_784f68;

int __stdcall sub_404880(int a1, int a2, int a3)
{
    return sub_4022a0(a1, &G_784f68, a2, a3);
}
}
