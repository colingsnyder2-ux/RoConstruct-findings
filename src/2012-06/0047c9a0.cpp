// roc 2012-06 0047c9a0  unit: VCWorkspace::?$CComObject  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0047c9a0
//
// 0047c9a0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0047c9a4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0047c9a8  8b542404             mov edx, dword ptr [esp + 4]
// 0047c9ac  50                   push eax
// 0047c9ad  51                   push ecx
// 0047c9ae  6830bab500           push 0xb5ba30
// 0047c9b3  52                   push edx
// 0047c9b4  e897a7f8ff           call 0x407150
// 0047c9b9  c20c00               ret 0xc
// copied from an identical function in another client (function ?sub_404880@ns_ROCX000079@@YGHHHH@Z)

namespace ns_ROCX000079 {
extern "C" int __stdcall sub_4022a0(int, void*, int, int);

extern int G_784f68;

int __stdcall sub_404880(int a1, int a2, int a3)
{
    return sub_4022a0(a1, &G_784f68, a2, a3);
}
}
