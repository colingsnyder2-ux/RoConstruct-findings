// roc 2012-06 0046c510  unit: RBX::Stats::H::?$TypedStatsItem  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0046c510
//
// 0046c510  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0046c514  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0046c518  8b542404             mov edx, dword ptr [esp + 4]
// 0046c51c  50                   push eax
// 0046c51d  51                   push ecx
// 0046c51e  52                   push edx
// 0046c51f  ff15542ab200         call dword ptr [0xb22a54]
// 0046c525  50                   push eax
// 0046c526  e8f57af9ff           call 0x404020
// 0046c52b  83c410               add esp, 0x10
// 0046c52e  c3                   ret 
// copied from an identical function in another client (function ?sub_00447C00@ns_ROCX000002@@YAHHHH@Z)

namespace ns_ROCX000002 {
extern "C" int (__cdecl *strcat_s_ptr)(char*, unsigned int, const char*);
extern "C" int __cdecl sub_4016E0(int);

int sub_00447C00(int a, int b, int c)
{
    return sub_4016E0(strcat_s_ptr((char*)a, (unsigned int)b, (const char*)c));
}
}
