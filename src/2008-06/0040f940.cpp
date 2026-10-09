// roc 2008-06 0040f940  unit: UIEnumConnectionPoints::V?$CComEnum::?$CComObject  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040f940
//
// 0040f940  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0040f944  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0040f948  8b542404             mov edx, dword ptr [esp + 4]
// 0040f94c  50                   push eax
// 0040f94d  51                   push ecx
// 0040f94e  68b0d78000           push 0x80d7b0
// 0040f953  52                   push edx
// 0040f954  e82729ffff           call 0x402280
// 0040f959  c20c00               ret 0xc
// copied from an identical function in another client (function ?sub_404880@ns_ROCX000023@@YGHHHH@Z)

namespace ns_ROCX000023 {
extern "C" int __stdcall sub_4022a0(int, void*, int, int);

extern int G_784f68;

int __stdcall sub_404880(int a1, int a2, int a3)
{
    return sub_4022a0(a1, &G_784f68, a2, a3);
}
}
