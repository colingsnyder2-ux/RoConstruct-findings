// roc 2008-06 00407e60  unit: VCApp::?$CComObject  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00407e60
//
// 00407e60  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00407e64  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00407e68  8b542404             mov edx, dword ptr [esp + 4]
// 00407e6c  50                   push eax
// 00407e6d  51                   push ecx
// 00407e6e  6820b48000           push 0x80b420
// 00407e73  52                   push edx
// 00407e74  e807a4ffff           call 0x402280
// 00407e79  c20c00               ret 0xc
// copied from an identical function in another client (function ?sub_404880@ns_ROCX000023@@YGHHHH@Z)

namespace ns_ROCX000023 {
extern "C" int __stdcall sub_4022a0(int, void*, int, int);

extern int G_784f68;

int __stdcall sub_404880(int a1, int a2, int a3)
{
    return sub_4022a0(a1, &G_784f68, a2, a3);
}
}
