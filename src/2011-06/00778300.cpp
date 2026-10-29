// roc 2011-06 00778300  unit: RBX::LibraryService::VLibraryStateObject::?$sp_counted_impl_p  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00778300
//
// 00778300  83ec08               sub esp, 8
// 00778303  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00778307  53                   push ebx
// 00778308  56                   push esi
// 00778309  57                   push edi
// 0077830a  8bf1                 mov esi, ecx
// 0077830c  50                   push eax
// 0077830d  8d4c2410             lea ecx, [esp + 0x10]
// 00778311  51                   push ecx
// 00778312  8bce                 mov ecx, esi
// 00778314  e837b9ffff           call 0x773c50
// 00778319  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0077831d  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00778321  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00778329  8b542418             mov edx, dword ptr [esp + 0x18]
// 0077832d  52                   push edx
// 0077832e  8d44241c             lea eax, [esp + 0x1c]
// 00778332  50                   push eax
// 00778333  57                   push edi
// 00778334  53                   push ebx
// 00778335  e8e6bcffff           call 0x774020
// 0077833a  83c410               add esp, 0x10
// 0077833d  57                   push edi
// 0077833e  53                   push ebx
// 0077833f  8d4c2414             lea ecx, [esp + 0x14]
// 00778343  51                   push ecx
// 00778344  8bce                 mov ecx, esi
// 00778346  e865d7eaff           call 0x625ab0
// 0077834b  8b442418             mov eax, dword ptr [esp + 0x18]
// 0077834f  5f                   pop edi
// 00778350  5e                   pop esi
// 00778351  5b                   pop ebx
// 00778352  83c408               add esp, 8
// 00778355  c20400               ret 4
// copied from an identical function in another client (function ?erase@?$_Tree@V?$_Tmap_traits@HUValue16@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue16@@@std@@@3@$0A@@std@@@std@@QAEIABH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#define _SECURE_SCL 0
#include <map>

// value_type is 0x14 bytes: node color at +0x20, isnil at +0x21, max_size 0xcccccccc.
struct Value16 { int words[13]; };
template class std::_Tree<std::_Tmap_traits<int, Value16, std::less<int>,
    std::allocator<std::pair<const int, Value16> >, false> >;