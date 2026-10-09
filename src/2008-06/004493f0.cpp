// roc 2008-06 004493f0  unit: RBX::Reflection::Metadata::VItem::?$BoundPropGetSet  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004493f0
//
// 004493f0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004493f4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004493f8  8b542404             mov edx, dword ptr [esp + 4]
// 004493fc  50                   push eax
// 004493fd  51                   push ecx
// 004493fe  52                   push edx
// 004493ff  ff1528288000         call dword ptr [0x802828]
// 00449405  50                   push eax
// 00449406  e87582fbff           call 0x401680
// 0044940b  83c410               add esp, 0x10
// 0044940e  c3                   ret 
// copied from an identical function in another client (function ?sub_00447C00@ns_ROCX00001a@@YAHHHH@Z)

namespace ns_ROCX00001a {
extern "C" int (__cdecl *strcat_s_ptr)(char*, unsigned int, const char*);
extern "C" int __cdecl sub_4016E0(int);

int sub_00447C00(int a, int b, int c)
{
    return sub_4016E0(strcat_s_ptr((char*)a, (unsigned int)b, (const char*)c));
}
}
