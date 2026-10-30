// roc 2011-06 005a1a90  unit: RBX::W4SoundType::?$EnumDesc  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005a1a90
//
// 005a1a90  51                   push ecx
// 005a1a91  56                   push esi
// 005a1a92  8bf1                 mov esi, ecx
// 005a1a94  8b4604               mov eax, dword ptr [esi + 4]
// 005a1a97  8b08                 mov ecx, dword ptr [eax]
// 005a1a99  50                   push eax
// 005a1a9a  51                   push ecx
// 005a1a9b  8d44240c             lea eax, [esp + 0xc]
// 005a1a9f  50                   push eax
// 005a1aa0  8bce                 mov ecx, esi
// 005a1aa2  e8e9f1ffff           call 0x5a0c90
// 005a1aa7  8b4e04               mov ecx, dword ptr [esi + 4]
// 005a1aaa  51                   push ecx
// 005a1aab  e8a8852600           call 0x80a058
// 005a1ab0  83c404               add esp, 4
// 005a1ab3  33c0                 xor eax, eax
// 005a1ab5  894604               mov dword ptr [esi + 4], eax
// 005a1ab8  894608               mov dword ptr [esi + 8], eax
// 005a1abb  5e                   pop esi
// 005a1abc  59                   pop ecx
// 005a1abd  c3                   ret 
// copied from an identical function in another client (function ?_Tidy@?$_Tree@V?$_Tmap_traits@HUValue16@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue16@@@std@@@3@$0A@@std@@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#define _SECURE_SCL 0
#include <map>

// value_type is 0x14 bytes: node color at +0x20, isnil at +0x21, max_size 0xcccccccc.
struct Value16 { int words[13]; };
template class std::_Tree<std::_Tmap_traits<int, Value16, std::less<int>,
    std::allocator<std::pair<const int, Value16> >, false> >;