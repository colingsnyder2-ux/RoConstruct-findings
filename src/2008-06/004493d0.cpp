// roc 2008-06 004493d0  unit: RBX::Reflection::Metadata::VItem::?$BoundPropGetSet  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004493d0
//
// 004493d0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004493d4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004493d8  8b542404             mov edx, dword ptr [esp + 4]
// 004493dc  50                   push eax
// 004493dd  51                   push ecx
// 004493de  52                   push edx
// 004493df  ff1544288000         call dword ptr [0x802844]
// 004493e5  50                   push eax
// 004493e6  e89582fbff           call 0x401680
// 004493eb  83c410               add esp, 0x10
// 004493ee  c3                   ret 
// copied from an identical function in another client (function ?sub_00447C00@ns_ROCX00001a@@YAHHHH@Z)

namespace ns_ROCX00001a {
extern "C" int (__cdecl *strcat_s_ptr)(char*, unsigned int, const char*);
extern "C" int __cdecl sub_4016E0(int);

int sub_00447C00(int a, int b, int c)
{
    return sub_4016E0(strcat_s_ptr((char*)a, (unsigned int)b, (const char*)c));
}
}
