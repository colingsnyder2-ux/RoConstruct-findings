// roc 2012-06 00407290  unit: ATL::VCComClassFactory::?$CComObjectNoLock  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00407290
//
// 00407290  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00407294  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00407298  8b542404             mov edx, dword ptr [esp + 4]
// 0040729c  50                   push eax
// 0040729d  51                   push ecx
// 0040729e  689c39b400           push 0xb4399c
// 004072a3  52                   push edx
// 004072a4  e8a7feffff           call 0x407150
// 004072a9  c20c00               ret 0xc
// copied from an identical function in another client (function ?sub_404880@ns_ROCX000079@@YGHHHH@Z)

namespace ns_ROCX000079 {
extern "C" int __stdcall sub_4022a0(int, void*, int, int);

extern int G_784f68;

int __stdcall sub_404880(int a1, int a2, int a3)
{
    return sub_4022a0(a1, &G_784f68, a2, a3);
}
}
