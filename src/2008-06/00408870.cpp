// roc 2008-06 00408870  unit: VCApp::?$CComAggObject  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00408870
//
// 00408870  8b442404             mov eax, dword ptr [esp + 4]
// 00408874  8b0d68c29600         mov ecx, dword ptr [0x96c268]
// 0040887a  6a00                 push 0
// 0040887c  50                   push eax
// 0040887d  6a6e                 push 0x6e
// 0040887f  51                   push ecx
// 00408880  e86bcfffff           call 0x4057f0
// 00408885  c20400               ret 4
// copied from an identical function in another client (function ?sub_40A530@ns_ROCX000000@@YGHH@Z)

namespace ns_ROCX000000 {
extern "C" int __stdcall sub_406F90(int, int, int, int);

int g_8bae44;

int __stdcall sub_40A530(int a1)
{
    return sub_406F90(g_8bae44, 0x6e, a1, 0);
}
}
