// roc 2007-03 004138d0  unit: seg_00410000  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004138d0
//
// 004138d0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004138d4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004138d8  8b542404             mov edx, dword ptr [esp + 4]
// 004138dc  50                   push eax
// 004138dd  51                   push ecx
// 004138de  52                   push edx
// 004138df  ff1594e97700         call dword ptr [0x77e994]
// 004138e5  50                   push eax
// 004138e6  e805defeff           call 0x4016f0
// 004138eb  83c410               add esp, 0x10
// 004138ee  c3                   ret 
// copied from an identical function in another client (function ?sub_00447C00@ns_ROCX000005@@YAHHHH@Z)

namespace ns_ROCX000005 {
extern "C" int (__cdecl *strcat_s_ptr)(char*, unsigned int, const char*);
extern "C" int __cdecl sub_4016E0(int);

int sub_00447C00(int a, int b, int c)
{
    return sub_4016E0(strcat_s_ptr((char*)a, (unsigned int)b, (const char*)c));
}
}
