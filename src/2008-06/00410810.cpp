// roc 2008-06 00410810  unit: UIEnumConnections::V?$CComEnum::?$CComObject  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00410810
//
// 00410810  8b442404             mov eax, dword ptr [esp + 4]
// 00410814  8b0d68c29600         mov ecx, dword ptr [0x96c268]
// 0041081a  6a00                 push 0
// 0041081c  50                   push eax
// 0041081d  6a77                 push 0x77
// 0041081f  51                   push ecx
// 00410820  e8cb4fffff           call 0x4057f0
// 00410825  c20400               ret 4
// copied from an identical function in another client (function ?fn_ROCX000000@ns_ROCX000000@@YGHH@Z)

namespace ns_ROCX000000 {
extern "C" int __stdcall G1_func_00406f90(int, int, int, int);

int g_var_008bae44;

int __stdcall fn_ROCX000000(int a)
{
    return G1_func_00406f90(g_var_008bae44, 0x77, a, 0);
}
}
