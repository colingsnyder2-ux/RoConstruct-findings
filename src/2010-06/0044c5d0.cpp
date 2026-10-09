// roc 2010-06 0044c5d0  unit: VCRenderSettingsItem::?$EnumPropDescriptor  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0044c5d0
//
// 0044c5d0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0044c5d4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0044c5d8  8b542404             mov edx, dword ptr [esp + 4]
// 0044c5dc  50                   push eax
// 0044c5dd  51                   push ecx
// 0044c5de  52                   push edx
// 0044c5df  ff1578a89e00         call dword ptr [0x9ea878]
// 0044c5e5  50                   push eax
// 0044c5e6  e85564fbff           call 0x402a40
// 0044c5eb  83c410               add esp, 0x10
// 0044c5ee  c3                   ret 
// copied from an identical function in another client (function ?sub_00447C00@ns_ROCX00000b@@YAHHHH@Z)

namespace ns_ROCX00000b {
extern "C" int (__cdecl *strcat_s_ptr)(char*, unsigned int, const char*);
extern "C" int __cdecl sub_4016E0(int);

int sub_00447C00(int a, int b, int c)
{
    return sub_4016E0(strcat_s_ptr((char*)a, (unsigned int)b, (const char*)c));
}
}
