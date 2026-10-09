// roc 2009-06 00444b90  unit: VCRenderSettingsItem::?$EnumPropDescriptor  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00444b90
//
// 00444b90  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00444b94  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00444b98  8b542404             mov edx, dword ptr [esp + 4]
// 00444b9c  50                   push eax
// 00444b9d  51                   push ecx
// 00444b9e  52                   push edx
// 00444b9f  ff1550e98900         call dword ptr [0x89e950]
// 00444ba5  50                   push eax
// 00444ba6  e875e1fbff           call 0x402d20
// 00444bab  83c410               add esp, 0x10
// 00444bae  c3                   ret 
// copied from an identical function in another client (function ?sub_00447C00@ns_ROCX000001@@YAHHHH@Z)

namespace ns_ROCX000001 {
extern "C" int (__cdecl *strcat_s_ptr)(char*, unsigned int, const char*);
extern "C" int __cdecl sub_4016E0(int);

int sub_00447C00(int a, int b, int c)
{
    return sub_4016E0(strcat_s_ptr((char*)a, (unsigned int)b, (const char*)c));
}
}
