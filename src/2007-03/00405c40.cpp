// roc 2007-03 00405c40  unit: seg_00400000  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00405c40
//
// 00405c40  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00405c44  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00405c48  8b542404             mov edx, dword ptr [esp + 4]
// 00405c4c  50                   push eax
// 00405c4d  51                   push ecx
// 00405c4e  68c83f7800           push 0x783fc8
// 00405c53  52                   push edx
// 00405c54  e837c6ffff           call 0x402290
// 00405c59  c20c00               ret 0xc
// copied from an identical function in another client (function ?sub_404880@ns_ROCX000013@@YGHHHH@Z)

namespace ns_ROCX000013 {
extern "C" int __stdcall sub_4022a0(int, void*, int, int);

extern int G_784f68;

int __stdcall sub_404880(int a1, int a2, int a3)
{
    return sub_4022a0(a1, &G_784f68, a2, a3);
}
}
