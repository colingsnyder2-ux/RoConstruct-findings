// roc 2009-12 0069f5f0  unit: std::strstream  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0069f5f0
//
// 0069f5f0  a1642bb600           mov eax, dword ptr [0xb62b64]
// 0069f5f5  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0069f5f9  8b542404             mov edx, dword ptr [esp + 4]
// 0069f5fd  50                   push eax
// 0069f5fe  51                   push ecx
// 0069f5ff  52                   push edx
// 0069f600  e85bb00e00           call 0x78a660
// 0069f605  83c40c               add esp, 0xc
// 0069f608  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX000001@ns_ROCX000001@@YAHHH@Z)

namespace ns_ROCX000001 {
extern int g_8abe80;
extern int __cdecl sub_5bf240(int, int, int);

int __cdecl fn_ROCX000001(int a, int b)
{
    return sub_5bf240(a, b, g_8abe80);
}
}
