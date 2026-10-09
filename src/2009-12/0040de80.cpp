// roc 2009-12 0040de80  unit: VCBrowserViewExternal::?$CComObjectNoLock  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0040de80
//
// 0040de80  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0040de84  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0040de88  8b542404             mov edx, dword ptr [esp + 4]
// 0040de8c  50                   push eax
// 0040de8d  51                   push ecx
// 0040de8e  687c119a00           push 0x9a117c
// 0040de93  52                   push edx
// 0040de94  e8c776ffff           call 0x405560
// 0040de99  c20c00               ret 0xc
// copied from an identical function in another client (function ?sub_404880@ns_ROCX000009@@YGHHHH@Z)

namespace ns_ROCX000009 {
extern "C" int __stdcall sub_4022a0(int, void*, int, int);

extern int G_784f68;

int __stdcall sub_404880(int a1, int a2, int a3)
{
    return sub_4022a0(a1, &G_784f68, a2, a3);
}
}
