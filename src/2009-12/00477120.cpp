// roc 2009-12 00477120  unit: VCContent::?$CComObject  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00477120
//
// 00477120  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00477124  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00477128  8b542404             mov edx, dword ptr [esp + 4]
// 0047712c  50                   push eax
// 0047712d  51                   push ecx
// 0047712e  68801b9b00           push 0x9b1b80
// 00477133  52                   push edx
// 00477134  e827e4f8ff           call 0x405560
// 00477139  c20c00               ret 0xc
// copied from an identical function in another client (function ?sub_404880@ns_ROCX000009@@YGHHHH@Z)

namespace ns_ROCX000009 {
extern "C" int __stdcall sub_4022a0(int, void*, int, int);

extern int G_784f68;

int __stdcall sub_404880(int a1, int a2, int a3)
{
    return sub_4022a0(a1, &G_784f68, a2, a3);
}
}
