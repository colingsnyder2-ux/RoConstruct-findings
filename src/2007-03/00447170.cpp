// roc 2007-03 00447170  unit: seg_00440000  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00447170
//
// 00447170  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00447174  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00447178  8b542404             mov edx, dword ptr [esp + 4]
// 0044717c  50                   push eax
// 0044717d  51                   push ecx
// 0044717e  52                   push edx
// 0044717f  ff15d8e97700         call dword ptr [0x77e9d8]
// 00447185  50                   push eax
// 00447186  e865a5fbff           call 0x4016f0
// 0044718b  83c410               add esp, 0x10
// 0044718e  c3                   ret 
// copied from an identical function in another client (function ?sub_00447C00@ns_ROCX000005@@YAHHHH@Z)

namespace ns_ROCX000005 {
extern "C" int (__cdecl *strcat_s_ptr)(char*, unsigned int, const char*);
extern "C" int __cdecl sub_4016E0(int);

int sub_00447C00(int a, int b, int c)
{
    return sub_4016E0(strcat_s_ptr((char*)a, (unsigned int)b, (const char*)c));
}
}
