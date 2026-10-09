// roc 2010-06 004050b0  unit: ATL::VCComClassFactory::?$CComObjectNoLock  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004050b0
//
// 004050b0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004050b4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004050b8  8b542404             mov edx, dword ptr [esp + 4]
// 004050bc  50                   push eax
// 004050bd  51                   push ecx
// 004050be  68f005a000           push 0xa005f0
// 004050c3  52                   push edx
// 004050c4  e8a7feffff           call 0x404f70
// 004050c9  c20c00               ret 0xc
// copied from an identical function in another client (function ?sub_404880@ns_ROCX000005@@YGHHHH@Z)

namespace ns_ROCX000005 {
extern "C" int __stdcall sub_4022a0(int, void*, int, int);

extern int G_784f68;

int __stdcall sub_404880(int a1, int a2, int a3)
{
    return sub_4022a0(a1, &G_784f68, a2, a3);
}
}
