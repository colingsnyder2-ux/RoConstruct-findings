// roc 2009-12 0040e4b0  unit: UIEnumConnectionPoints::V?$CComEnum::?$CComObject  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0040e4b0
//
// 0040e4b0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0040e4b4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0040e4b8  8b542404             mov edx, dword ptr [esp + 4]
// 0040e4bc  50                   push eax
// 0040e4bd  51                   push ecx
// 0040e4be  6890169a00           push 0x9a1690
// 0040e4c3  52                   push edx
// 0040e4c4  e89770ffff           call 0x405560
// 0040e4c9  c20c00               ret 0xc
// copied from an identical function in another client (function ?sub_404880@ns_ROCX000009@@YGHHHH@Z)

namespace ns_ROCX000009 {
extern "C" int __stdcall sub_4022a0(int, void*, int, int);

extern int G_784f68;

int __stdcall sub_404880(int a1, int a2, int a3)
{
    return sub_4022a0(a1, &G_784f68, a2, a3);
}
}
