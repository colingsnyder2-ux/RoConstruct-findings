// roc 2007-03 0040db10  unit: seg_00400000  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0040db10
//
// 0040db10  8b442404             mov eax, dword ptr [esp + 4]
// 0040db14  8b0d5c538b00         mov ecx, dword ptr [0x8b535c]
// 0040db1a  6a00                 push 0
// 0040db1c  50                   push eax
// 0040db1d  6a77                 push 0x77
// 0040db1f  51                   push ecx
// 0040db20  e8cb92ffff           call 0x406df0
// 0040db25  c20400               ret 4
// copied from an identical function in another client (function ?fn_ROCX00001e@ns_ROCX00001e@@YGHH@Z)

namespace ns_ROCX00001e {
extern "C" int __stdcall G1_func_00406f90(int, int, int, int);

int g_var_008bae44;

int __stdcall fn_ROCX00001e(int a)
{
    return G1_func_00406f90(g_var_008bae44, 0x77, a, 0);
}
}
