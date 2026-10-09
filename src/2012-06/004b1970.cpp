// roc 2012-06 004b1970  unit: VCContent::?$CComObject  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004b1970
//
// 004b1970  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004b1974  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004b1978  8b542404             mov edx, dword ptr [esp + 4]
// 004b197c  50                   push eax
// 004b197d  51                   push ecx
// 004b197e  68403ab600           push 0xb63a40
// 004b1983  52                   push edx
// 004b1984  e8c757f5ff           call 0x407150
// 004b1989  c20c00               ret 0xc
// copied from an identical function in another client (function ?sub_404880@ns_ROCX000079@@YGHHHH@Z)

namespace ns_ROCX000079 {
extern "C" int __stdcall sub_4022a0(int, void*, int, int);

extern int G_784f68;

int __stdcall sub_404880(int a1, int a2, int a3)
{
    return sub_4022a0(a1, &G_784f68, a2, a3);
}
}
