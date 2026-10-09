// roc 2009-06 0046de00  unit: VCContent::?$CComObject  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0046de00
//
// 0046de00  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0046de04  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0046de08  8b542404             mov edx, dword ptr [esp + 4]
// 0046de0c  50                   push eax
// 0046de0d  51                   push ecx
// 0046de0e  6800d58b00           push 0x8bd500
// 0046de13  52                   push edx
// 0046de14  e80781f9ff           call 0x405f20
// 0046de19  c20c00               ret 0xc
// copied from an identical function in another client (function ?sub_404880@ns_ROCX000078@@YGHHHH@Z)

namespace ns_ROCX000078 {
extern "C" int __stdcall sub_4022a0(int, void*, int, int);

extern int G_784f68;

int __stdcall sub_404880(int a1, int a2, int a3)
{
    return sub_4022a0(a1, &G_784f68, a2, a3);
}
}
