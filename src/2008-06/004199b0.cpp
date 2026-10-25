// from server: 100% by tester
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

extern int global_value;
extern "C" int __stdcall helper(int, int, int, int);

int __stdcall function(int argument)
{
    return helper(global_value, 116, argument, 0);
}
