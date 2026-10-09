// roc 2009-12 00406850  unit: VCApp::?$CComObject  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00406850
//
// 00406850  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00406854  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00406858  8b542404             mov edx, dword ptr [esp + 4]
// 0040685c  50                   push eax
// 0040685d  51                   push ecx
// 0040685e  68e0f89900           push 0x99f8e0
// 00406863  52                   push edx
// 00406864  e8f7ecffff           call 0x405560
// 00406869  c20c00               ret 0xc
// copied from an identical function in another client (function ?sub_404880@ns_ROCX000009@@YGHHHH@Z)

namespace ns_ROCX000009 {
extern "C" int __stdcall sub_4022a0(int, void*, int, int);

extern int G_784f68;

int __stdcall sub_404880(int a1, int a2, int a3)
{
    return sub_4022a0(a1, &G_784f68, a2, a3);
}
}
