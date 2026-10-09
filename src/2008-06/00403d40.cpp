// roc 2008-06 00403d40  unit: ATL::VCComClassFactory::?$CComObjectNoLock  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00403d40
//
// 00403d40  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00403d44  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00403d48  8b542404             mov edx, dword ptr [esp + 4]
// 00403d4c  50                   push eax
// 00403d4d  51                   push ecx
// 00403d4e  6848b28000           push 0x80b248
// 00403d53  52                   push edx
// 00403d54  e827e5ffff           call 0x402280
// 00403d59  c20c00               ret 0xc
// copied from an identical function in another client (function ?sub_404880@ns_ROCX000023@@YGHHHH@Z)

namespace ns_ROCX000023 {
extern "C" int __stdcall sub_4022a0(int, void*, int, int);

extern int G_784f68;

int __stdcall sub_404880(int a1, int a2, int a3)
{
    return sub_4022a0(a1, &G_784f68, a2, a3);
}
}
