// roc 2011-06 004587c0  unit: RBX::Stats::H::?$TypedStatsItem  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004587c0
//
// 004587c0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004587c4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004587c8  8b542404             mov edx, dword ptr [esp + 4]
// 004587cc  50                   push eax
// 004587cd  51                   push ecx
// 004587ce  52                   push edx
// 004587cf  ff15b009a400         call dword ptr [0xa409b0]
// 004587d5  50                   push eax
// 004587d6  e835acfaff           call 0x403410
// 004587db  83c410               add esp, 0x10
// 004587de  c3                   ret 
// copied from an identical function in another client (function ?sub_00447C00@ns_ROCX00000d@@YAHHHH@Z)

namespace ns_ROCX00000d {
extern "C" int (__cdecl *strcat_s_ptr)(char*, unsigned int, const char*);
extern "C" int __cdecl sub_4016E0(int);

int sub_00447C00(int a, int b, int c)
{
    return sub_4016E0(strcat_s_ptr((char*)a, (unsigned int)b, (const char*)c));
}
}
