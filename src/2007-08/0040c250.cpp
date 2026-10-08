// from server: 100% by colin
// roc 2007-08 0040c250  unit: VCBrowserViewExternal::?$CComObjectNoLock  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0040c250
//
// 0040c250  8b442404             mov eax, dword ptr [esp + 4]
// 0040c254  8b0d44ae8b00         mov ecx, dword ptr [0x8bae44]
// 0040c25a  6a00                 push 0
// 0040c25c  50                   push eax
// 0040c25d  6a77                 push 0x77
// 0040c25f  51                   push ecx
// 0040c260  e82badffff           call 0x406f90
// 0040c265  c20400               ret 4

extern "C" int __stdcall G1_func_00406f90(int, int, int, int);

int g_var_008bae44;

int __stdcall func_0040c250(int a)
{
    return G1_func_00406f90(g_var_008bae44, 0x77, a, 0);
}
