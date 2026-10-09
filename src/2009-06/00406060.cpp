// roc 2009-06 00406060  unit: ATL::VCComClassFactory::?$CComObjectNoLock  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00406060
//
// 00406060  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00406064  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00406068  8b542404             mov edx, dword ptr [esp + 4]
// 0040606c  50                   push eax
// 0040606d  51                   push ecx
// 0040606e  680ccf8a00           push 0x8acf0c
// 00406073  52                   push edx
// 00406074  e8a7feffff           call 0x405f20
// 00406079  c20c00               ret 0xc
// copied from an identical function in another client (function ?sub_404880@ns_ROCX000078@@YGHHHH@Z)

namespace ns_ROCX000078 {
extern "C" int __stdcall sub_4022a0(int, void*, int, int);

extern int G_784f68;

int __stdcall sub_404880(int a1, int a2, int a3)
{
    return sub_4022a0(a1, &G_784f68, a2, a3);
}
}
