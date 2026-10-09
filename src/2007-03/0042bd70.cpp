// roc 2007-03 0042bd70  unit: seg_00420000  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0042bd70
//
// 0042bd70  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0042bd74  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0042bd78  8b542404             mov edx, dword ptr [esp + 4]
// 0042bd7c  50                   push eax
// 0042bd7d  51                   push ecx
// 0042bd7e  68c0637800           push 0x7863c0
// 0042bd83  52                   push edx
// 0042bd84  e80765fdff           call 0x402290
// 0042bd89  c20c00               ret 0xc
// copied from an identical function in another client (function ?sub_404880@ns_ROCX000013@@YGHHHH@Z)

namespace ns_ROCX000013 {
extern "C" int __stdcall sub_4022a0(int, void*, int, int);

extern int G_784f68;

int __stdcall sub_404880(int a1, int a2, int a3)
{
    return sub_4022a0(a1, &G_784f68, a2, a3);
}
}
