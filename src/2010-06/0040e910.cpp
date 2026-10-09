// roc 2010-06 0040e910  unit: UIEnumConnectionPoints::V?$CComEnum::?$CComObject  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0040e910
//
// 0040e910  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0040e914  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0040e918  8b542404             mov edx, dword ptr [esp + 4]
// 0040e91c  50                   push eax
// 0040e91d  51                   push ecx
// 0040e91e  680023a000           push 0xa02300
// 0040e923  52                   push edx
// 0040e924  e84766ffff           call 0x404f70
// 0040e929  c20c00               ret 0xc
// copied from an identical function in another client (function ?sub_404880@ns_ROCX000005@@YGHHHH@Z)

namespace ns_ROCX000005 {
extern "C" int __stdcall sub_4022a0(int, void*, int, int);

extern int G_784f68;

int __stdcall sub_404880(int a1, int a2, int a3)
{
    return sub_4022a0(a1, &G_784f68, a2, a3);
}
}
