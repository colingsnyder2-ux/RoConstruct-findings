// roc 2008-06 004199b0  unit: VCLuaFunction::?$CComObject  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004199b0
//
// 004199b0  8b442404             mov eax, dword ptr [esp + 4]
// 004199b4  8b0d68c29600         mov ecx, dword ptr [0x96c268]
// 004199ba  6a00                 push 0
// 004199bc  50                   push eax
// 004199bd  6a74                 push 0x74
// 004199bf  51                   push ecx
// 004199c0  e82bbefeff           call 0x4057f0
// 004199c5  c20400               ret 4
// copied from an identical function in another client (function ?sub_412860@ns_ROCX000010@@YGHH@Z)

namespace ns_ROCX000010 {
extern "C" int __stdcall sub_406f90(int, int, int, int);

int g_8bae44;

int __stdcall sub_412860(int a1)
{
    return sub_406f90(g_8bae44, 0x74, a1, 0);
}
}
