// roc 2011-06 0049c590  unit: VCContent::?$CComObject  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0049c590
//
// 0049c590  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0049c594  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0049c598  8b542404             mov edx, dword ptr [esp + 4]
// 0049c59c  50                   push eax
// 0049c59d  51                   push ecx
// 0049c59e  685062a700           push 0xa76250
// 0049c5a3  52                   push edx
// 0049c5a4  e817a2f6ff           call 0x4067c0
// 0049c5a9  c20c00               ret 0xc
// copied from an identical function in another client (function ?sub_404880@ns_ROCX000016@@YGHHHH@Z)

namespace ns_ROCX000016 {
extern "C" int __stdcall sub_4022a0(int, void*, int, int);

extern int G_784f68;

int __stdcall sub_404880(int a1, int a2, int a3)
{
    return sub_4022a0(a1, &G_784f68, a2, a3);
}
}
