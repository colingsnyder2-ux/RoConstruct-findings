// roc 2009-12 0040e720  unit: UIEnumConnections::V?$CComEnum::?$CComObject  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0040e720
//
// 0040e720  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0040e724  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0040e728  8b542404             mov edx, dword ptr [esp + 4]
// 0040e72c  50                   push eax
// 0040e72d  51                   push ecx
// 0040e72e  68c40c9a00           push 0x9a0cc4
// 0040e733  52                   push edx
// 0040e734  e8276effff           call 0x405560
// 0040e739  c20c00               ret 0xc
// copied from an identical function in another client (function ?sub_404880@ns_ROCX000009@@YGHHHH@Z)

namespace ns_ROCX000009 {
extern "C" int __stdcall sub_4022a0(int, void*, int, int);

extern int G_784f68;

int __stdcall sub_404880(int a1, int a2, int a3)
{
    return sub_4022a0(a1, &G_784f68, a2, a3);
}
}
