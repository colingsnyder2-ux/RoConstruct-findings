// roc 2012-06 00408f80  unit: VCApp::?$CComAggObject  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00408f80
//
// 00408f80  8b442404             mov eax, dword ptr [esp + 4]
// 00408f84  8b0dc463e100         mov ecx, dword ptr [0xe163c4]
// 00408f8a  6a00                 push 0
// 00408f8c  50                   push eax
// 00408f8d  6a6e                 push 0x6e
// 00408f8f  51                   push ecx
// 00408f90  e88bfcffff           call 0x408c20
// 00408f95  c20400               ret 4
// copied from an identical function in another client (function ?sub_40A530@ns_ROCX000000@@YGHH@Z)

namespace ns_ROCX000000 {
extern "C" int __stdcall sub_406F90(int, int, int, int);

int g_8bae44;

int __stdcall sub_40A530(int a1)
{
    return sub_406F90(g_8bae44, 0x6e, a1, 0);
}
}
