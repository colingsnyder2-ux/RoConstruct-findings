// roc 2009-06 0044e850  unit: VCWorkspace::?$CComObject  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0044e850
//
// 0044e850  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0044e854  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0044e858  8b542404             mov edx, dword ptr [esp + 4]
// 0044e85c  50                   push eax
// 0044e85d  51                   push ecx
// 0044e85e  68447d8b00           push 0x8b7d44
// 0044e863  52                   push edx
// 0044e864  e8b776fbff           call 0x405f20
// 0044e869  c20c00               ret 0xc
// copied from an identical function in another client (function ?sub_404880@ns_ROCX000078@@YGHHHH@Z)

namespace ns_ROCX000078 {
extern "C" int __stdcall sub_4022a0(int, void*, int, int);

extern int G_784f68;

int __stdcall sub_404880(int a1, int a2, int a3)
{
    return sub_4022a0(a1, &G_784f68, a2, a3);
}
}
