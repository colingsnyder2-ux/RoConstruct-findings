// roc 2009-06 004081d0  unit: VCApp::?$CComAggObject  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004081d0
//
// 004081d0  8b442404             mov eax, dword ptr [esp + 4]
// 004081d4  8b0d1897a300         mov ecx, dword ptr [0xa39718]
// 004081da  6a00                 push 0
// 004081dc  50                   push eax
// 004081dd  6a6e                 push 0x6e
// 004081df  51                   push ecx
// 004081e0  e89bf5ffff           call 0x407780
// 004081e5  c20400               ret 4
// copied from an identical function in another client (function ?sub_40A530@ns_ROCX000000@@YGHH@Z)

namespace ns_ROCX000000 {
extern "C" int __stdcall sub_406F90(int, int, int, int);

int g_8bae44;

int __stdcall sub_40A530(int a1)
{
    return sub_406F90(g_8bae44, 0x6e, a1, 0);
}
}
