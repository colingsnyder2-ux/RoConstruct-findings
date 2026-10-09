// roc 2010-06 004064d0  unit: VCApp::?$CComObject  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004064d0
//
// 004064d0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004064d4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004064d8  8b542404             mov edx, dword ptr [esp + 4]
// 004064dc  50                   push eax
// 004064dd  51                   push ecx
// 004064de  688004a000           push 0xa00480
// 004064e3  52                   push edx
// 004064e4  e887eaffff           call 0x404f70
// 004064e9  c20c00               ret 0xc
// copied from an identical function in another client (function ?sub_404880@ns_ROCX000005@@YGHHHH@Z)

namespace ns_ROCX000005 {
extern "C" int __stdcall sub_4022a0(int, void*, int, int);

extern int G_784f68;

int __stdcall sub_404880(int a1, int a2, int a3)
{
    return sub_4022a0(a1, &G_784f68, a2, a3);
}
}
