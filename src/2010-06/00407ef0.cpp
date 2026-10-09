// roc 2010-06 00407ef0  unit: VCApp::?$CComAggObject  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00407ef0
//
// 00407ef0  8b442404             mov eax, dword ptr [esp + 4]
// 00407ef4  8b0db0fabf00         mov ecx, dword ptr [0xbffab0]
// 00407efa  6a00                 push 0
// 00407efc  50                   push eax
// 00407efd  6a6e                 push 0x6e
// 00407eff  51                   push ecx
// 00407f00  e81bf9ffff           call 0x407820
// 00407f05  c20400               ret 4
// copied from an identical function in another client (function ?sub_40A530@ns_ROCX000000@@YGHH@Z)

namespace ns_ROCX000000 {
extern "C" int __stdcall sub_406F90(int, int, int, int);

int g_8bae44;

int __stdcall sub_40A530(int a1)
{
    return sub_406F90(g_8bae44, 0x6e, a1, 0);
}
}
