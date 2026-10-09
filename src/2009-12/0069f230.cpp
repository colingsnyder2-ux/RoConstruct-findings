// roc 2009-12 0069f230  unit: std::strstream  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0069f230
//
// 0069f230  a1442bb600           mov eax, dword ptr [0xb62b44]
// 0069f235  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0069f239  8b542404             mov edx, dword ptr [esp + 4]
// 0069f23d  50                   push eax
// 0069f23e  51                   push ecx
// 0069f23f  52                   push edx
// 0069f240  e81bb40e00           call 0x78a660
// 0069f245  83c40c               add esp, 0xc
// 0069f248  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX000001@ns_ROCX000001@@YAHHH@Z)

namespace ns_ROCX000001 {
extern int g_8abe80;
extern int __cdecl sub_5bf240(int, int, int);

int __cdecl fn_ROCX000001(int a, int b)
{
    return sub_5bf240(a, b, g_8abe80);
}
}
