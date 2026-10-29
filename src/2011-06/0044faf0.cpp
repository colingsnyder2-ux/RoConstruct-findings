// roc 2011-06 0044faf0  unit: HVCXTPPropertyGridItemEnum::?$XItem  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0044faf0
//
// 0044faf0  51                   push ecx
// 0044faf1  56                   push esi
// 0044faf2  8bf1                 mov esi, ecx
// 0044faf4  8b4604               mov eax, dword ptr [esi + 4]
// 0044faf7  8b08                 mov ecx, dword ptr [eax]
// 0044faf9  50                   push eax
// 0044fafa  51                   push ecx
// 0044fafb  8d44240c             lea eax, [esp + 0xc]
// 0044faff  50                   push eax
// 0044fb00  8bce                 mov ecx, esi
// 0044fb02  e8c9f1ffff           call 0x44ecd0
// 0044fb07  8b4e04               mov ecx, dword ptr [esi + 4]
// 0044fb0a  51                   push ecx
// 0044fb0b  e848a53b00           call 0x80a058
// 0044fb10  83c404               add esp, 4
// 0044fb13  33c0                 xor eax, eax
// 0044fb15  894604               mov dword ptr [esi + 4], eax
// 0044fb18  894608               mov dword ptr [esi + 8], eax
// 0044fb1b  5e                   pop esi
// 0044fb1c  59                   pop ecx
// 0044fb1d  c3                   ret 
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