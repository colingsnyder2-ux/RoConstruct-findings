// roc 2009-12 0069f570  unit: std::strstream  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0069f570
//
// 0069f570  a1602bb600           mov eax, dword ptr [0xb62b60]
// 0069f575  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0069f579  8b542404             mov edx, dword ptr [esp + 4]
// 0069f57d  50                   push eax
// 0069f57e  51                   push ecx
// 0069f57f  52                   push edx
// 0069f580  e8dbb00e00           call 0x78a660
// 0069f585  83c40c               add esp, 0xc
// 0069f588  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX000001@ns_ROCX000001@@YAHHH@Z)

namespace ns_ROCX000001 {
extern int g_8abe80;
extern int __cdecl sub_5bf240(int, int, int);

int __cdecl fn_ROCX000001(int a, int b)
{
    return sub_5bf240(a, b, g_8abe80);
}
}
