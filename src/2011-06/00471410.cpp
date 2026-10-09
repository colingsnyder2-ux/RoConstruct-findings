// roc 2011-06 00471410  unit: VCWorkspace::?$CComObject  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00471410
//
// 00471410  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00471414  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00471418  8b542404             mov edx, dword ptr [esp + 4]
// 0047141c  50                   push eax
// 0047141d  51                   push ecx
// 0047141e  683000a700           push 0xa70030
// 00471423  52                   push edx
// 00471424  e89753f9ff           call 0x4067c0
// 00471429  c20c00               ret 0xc
// copied from an identical function in another client (function ?sub_404880@ns_ROCX000016@@YGHHHH@Z)

namespace ns_ROCX000016 {
extern "C" int __stdcall sub_4022a0(int, void*, int, int);

extern int G_784f68;

int __stdcall sub_404880(int a1, int a2, int a3)
{
    return sub_4022a0(a1, &G_784f68, a2, a3);
}
}
