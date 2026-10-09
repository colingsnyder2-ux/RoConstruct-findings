// roc 2012-06 0048da40  unit: VCRobloxPlayer::?$CComObjectNoLock  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0048da40
//
// 0048da40  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0048da44  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0048da48  8b542404             mov edx, dword ptr [esp + 4]
// 0048da4c  50                   push eax
// 0048da4d  51                   push ecx
// 0048da4e  6884d3b500           push 0xb5d384
// 0048da53  52                   push edx
// 0048da54  e8f796f7ff           call 0x407150
// 0048da59  c20c00               ret 0xc
// copied from an identical function in another client (function ?sub_404880@ns_ROCX000079@@YGHHHH@Z)

namespace ns_ROCX000079 {
extern "C" int __stdcall sub_4022a0(int, void*, int, int);

extern int G_784f68;

int __stdcall sub_404880(int a1, int a2, int a3)
{
    return sub_4022a0(a1, &G_784f68, a2, a3);
}
}
