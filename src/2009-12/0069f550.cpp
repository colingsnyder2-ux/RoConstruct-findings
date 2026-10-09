// roc 2009-12 0069f550  unit: std::strstream  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0069f550
//
// 0069f550  a15c2bb600           mov eax, dword ptr [0xb62b5c]
// 0069f555  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0069f559  8b542404             mov edx, dword ptr [esp + 4]
// 0069f55d  50                   push eax
// 0069f55e  51                   push ecx
// 0069f55f  52                   push edx
// 0069f560  e8fbb00e00           call 0x78a660
// 0069f565  83c40c               add esp, 0xc
// 0069f568  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX000001@ns_ROCX000001@@YAHHH@Z)

namespace ns_ROCX000001 {
extern int g_8abe80;
extern int __cdecl sub_5bf240(int, int, int);

int __cdecl fn_ROCX000001(int a, int b)
{
    return sub_5bf240(a, b, g_8abe80);
}
}
