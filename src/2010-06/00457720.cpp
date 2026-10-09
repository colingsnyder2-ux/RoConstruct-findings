// roc 2010-06 00457720  unit: VCWorkspace::?$CComObject  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00457720
//
// 00457720  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00457724  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00457728  8b542404             mov edx, dword ptr [esp + 4]
// 0045772c  50                   push eax
// 0045772d  51                   push ecx
// 0045772e  6818d0a000           push 0xa0d018
// 00457733  52                   push edx
// 00457734  e837d8faff           call 0x404f70
// 00457739  c20c00               ret 0xc
// copied from an identical function in another client (function ?sub_404880@ns_ROCX000005@@YGHHHH@Z)

namespace ns_ROCX000005 {
extern "C" int __stdcall sub_4022a0(int, void*, int, int);

extern int G_784f68;

int __stdcall sub_404880(int a1, int a2, int a3)
{
    return sub_4022a0(a1, &G_784f68, a2, a3);
}
}
