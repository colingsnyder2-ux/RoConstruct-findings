// roc 2011-06 005a1a60  unit: RBX::W4SoundType::?$EnumDesc  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005a1a60
//
// 005a1a60  51                   push ecx
// 005a1a61  56                   push esi
// 005a1a62  8bf1                 mov esi, ecx
// 005a1a64  8b4604               mov eax, dword ptr [esi + 4]
// 005a1a67  8b08                 mov ecx, dword ptr [eax]
// 005a1a69  50                   push eax
// 005a1a6a  51                   push ecx
// 005a1a6b  8d44240c             lea eax, [esp + 0xc]
// 005a1a6f  50                   push eax
// 005a1a70  8bce                 mov ecx, esi
// 005a1a72  e849f1ffff           call 0x5a0bc0
// 005a1a77  8b4e04               mov ecx, dword ptr [esi + 4]
// 005a1a7a  51                   push ecx
// 005a1a7b  e8d8852600           call 0x80a058
// 005a1a80  83c404               add esp, 4
// 005a1a83  33c0                 xor eax, eax
// 005a1a85  894604               mov dword ptr [esi + 4], eax
// 005a1a88  894608               mov dword ptr [esi + 8], eax
// 005a1a8b  5e                   pop esi
// 005a1a8c  59                   pop ecx
// 005a1a8d  c3                   ret 
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