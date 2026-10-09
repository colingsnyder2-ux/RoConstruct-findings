// roc 2009-06 00444bb0  unit: VCRenderSettingsItem::?$EnumPropDescriptor  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00444bb0
//
// 00444bb0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00444bb4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00444bb8  8b542404             mov edx, dword ptr [esp + 4]
// 00444bbc  50                   push eax
// 00444bbd  51                   push ecx
// 00444bbe  52                   push edx
// 00444bbf  ff1530e98900         call dword ptr [0x89e930]
// 00444bc5  50                   push eax
// 00444bc6  e855e1fbff           call 0x402d20
// 00444bcb  83c410               add esp, 0x10
// 00444bce  c3                   ret 
// copied from an identical function in another client (function ?sub_00447C00@ns_ROCX000001@@YAHHHH@Z)

namespace ns_ROCX000001 {
extern "C" int (__cdecl *strcat_s_ptr)(char*, unsigned int, const char*);
extern "C" int __cdecl sub_4016E0(int);

int sub_00447C00(int a, int b, int c)
{
    return sub_4016E0(strcat_s_ptr((char*)a, (unsigned int)b, (const char*)c));
}
}
