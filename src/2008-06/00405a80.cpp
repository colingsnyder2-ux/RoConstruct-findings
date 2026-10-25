// from server: 100% by king_originala
// roc 2008-06 00405a80  unit: VCWorkspace::?$CComObject  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00405a80
//
// 00405a80  8b442404             mov eax, dword ptr [esp + 4]
// 00405a84  8b0d68c29600         mov ecx, dword ptr [0x96c268]
// 00405a8a  6a00                 push 0
// 00405a8c  50                   push eax
// 00405a8d  6a6a                 push 0x6a
// 00405a8f  51                   push ecx
// 00405a90  e85bfdffff           call 0x4057f0
// 00405a95  c20400               ret 4

extern int global_value;
extern "C" int __stdcall helper(int, int, int, int);

int __stdcall function(int argument)
{
    return helper(global_value, 106, argument, 0);
}
