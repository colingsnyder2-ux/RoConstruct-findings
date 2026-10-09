// roc 2012-06 0046c4f0  unit: RBX::Stats::H::?$TypedStatsItem  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0046c4f0
//
// 0046c4f0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0046c4f4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0046c4f8  8b542404             mov edx, dword ptr [esp + 4]
// 0046c4fc  50                   push eax
// 0046c4fd  51                   push ecx
// 0046c4fe  52                   push edx
// 0046c4ff  ff15d82ab200         call dword ptr [0xb22ad8]
// 0046c505  50                   push eax
// 0046c506  e8157bf9ff           call 0x404020
// 0046c50b  83c410               add esp, 0x10
// 0046c50e  c3                   ret 
// copied from an identical function in another client (function ?sub_00447C00@ns_ROCX000002@@YAHHHH@Z)

namespace ns_ROCX000002 {
extern "C" int (__cdecl *strcat_s_ptr)(char*, unsigned int, const char*);
extern "C" int __cdecl sub_4016E0(int);

int sub_00447C00(int a, int b, int c)
{
    return sub_4016E0(strcat_s_ptr((char*)a, (unsigned int)b, (const char*)c));
}
}
