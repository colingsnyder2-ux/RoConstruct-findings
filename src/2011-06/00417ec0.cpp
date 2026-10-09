// roc 2011-06 00417ec0  unit: VCRbxObject::?$CComObjectNoLock  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00417ec0
//
// 00417ec0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00417ec4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00417ec8  8b542404             mov edx, dword ptr [esp + 4]
// 00417ecc  50                   push eax
// 00417ecd  51                   push ecx
// 00417ece  684ce9a500           push 0xa5e94c
// 00417ed3  52                   push edx
// 00417ed4  e8e7e8feff           call 0x4067c0
// 00417ed9  c20c00               ret 0xc
// copied from an identical function in another client (function ?sub_404880@ns_ROCX000016@@YGHHHH@Z)

namespace ns_ROCX000016 {
extern "C" int __stdcall sub_4022a0(int, void*, int, int);

extern int G_784f68;

int __stdcall sub_404880(int a1, int a2, int a3)
{
    return sub_4022a0(a1, &G_784f68, a2, a3);
}
}
