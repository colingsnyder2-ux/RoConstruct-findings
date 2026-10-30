// roc 2011-06 00623ca0  unit: RBX::LuaStatsItem  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00623ca0
//
// 00623ca0  51                   push ecx
// 00623ca1  56                   push esi
// 00623ca2  8bf1                 mov esi, ecx
// 00623ca4  8b4604               mov eax, dword ptr [esi + 4]
// 00623ca7  8b08                 mov ecx, dword ptr [eax]
// 00623ca9  50                   push eax
// 00623caa  51                   push ecx
// 00623cab  8d44240c             lea eax, [esp + 0xc]
// 00623caf  50                   push eax
// 00623cb0  8bce                 mov ecx, esi
// 00623cb2  e859c8ffff           call 0x620510
// 00623cb7  8b4e04               mov ecx, dword ptr [esi + 4]
// 00623cba  51                   push ecx
// 00623cbb  e898631e00           call 0x80a058
// 00623cc0  83c404               add esp, 4
// 00623cc3  33c0                 xor eax, eax
// 00623cc5  894604               mov dword ptr [esi + 4], eax
// 00623cc8  894608               mov dword ptr [esi + 8], eax
// 00623ccb  5e                   pop esi
// 00623ccc  59                   pop ecx
// 00623ccd  c3                   ret 
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