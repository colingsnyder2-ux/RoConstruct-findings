// roc 2009-12 0044ae70  unit: VCRenderSettingsItem::?$EnumPropDescriptor  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0044ae70
//
// 0044ae70  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0044ae74  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0044ae78  8b542404             mov edx, dword ptr [esp + 4]
// 0044ae7c  50                   push eax
// 0044ae7d  51                   push ecx
// 0044ae7e  52                   push edx
// 0044ae7f  ff15e8b79800         call dword ptr [0x98b7e8]
// 0044ae85  50                   push eax
// 0044ae86  e8657bfbff           call 0x4029f0
// 0044ae8b  83c410               add esp, 0x10
// 0044ae8e  c3                   ret 
// copied from an identical function in another client (function ?sub_00447C00@ns_ROCX00000f@@YAHHHH@Z)

namespace ns_ROCX00000f {
extern "C" int (__cdecl *strcat_s_ptr)(char*, unsigned int, const char*);
extern "C" int __cdecl sub_4016E0(int);

int sub_00447C00(int a, int b, int c)
{
    return sub_4016E0(strcat_s_ptr((char*)a, (unsigned int)b, (const char*)c));
}
}
