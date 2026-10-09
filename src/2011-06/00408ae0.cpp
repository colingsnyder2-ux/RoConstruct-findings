// roc 2011-06 00408ae0  unit: VCApp::?$CComAggObject  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00408ae0
//
// 00408ae0  8b442404             mov eax, dword ptr [esp + 4]
// 00408ae4  8b0db415cb00         mov ecx, dword ptr [0xcb15b4]
// 00408aea  6a00                 push 0
// 00408aec  50                   push eax
// 00408aed  6a6e                 push 0x6e
// 00408aef  51                   push ecx
// 00408af0  e87bf5ffff           call 0x408070
// 00408af5  c20400               ret 4
// copied from an identical function in another client (function ?sub_40A530@ns_ROCX000000@@YGHH@Z)

namespace ns_ROCX000000 {
extern "C" int __stdcall sub_406F90(int, int, int, int);

int g_8bae44;

int __stdcall sub_40A530(int a1)
{
    return sub_406F90(g_8bae44, 0x6e, a1, 0);
}
}
