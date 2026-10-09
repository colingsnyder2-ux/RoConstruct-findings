// roc 2009-12 00407ec0  unit: VCApp::?$CComAggObject  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00407ec0
//
// 00407ec0  8b442404             mov eax, dword ptr [esp + 4]
// 00407ec4  8b0d0095b700         mov ecx, dword ptr [0xb79500]
// 00407eca  6a00                 push 0
// 00407ecc  50                   push eax
// 00407ecd  6a6e                 push 0x6e
// 00407ecf  51                   push ecx
// 00407ed0  e85bf7ffff           call 0x407630
// 00407ed5  c20400               ret 4
// copied from an identical function in another client (function ?sub_40A530@ns_ROCX000000@@YGHH@Z)

namespace ns_ROCX000000 {
extern "C" int __stdcall sub_406F90(int, int, int, int);

int g_8bae44;

int __stdcall sub_40A530(int a1)
{
    return sub_406F90(g_8bae44, 0x6e, a1, 0);
}
}
