// roc 2011-06 006b8fe0  unit: std::D::DU?$char_traits::$$A6AXV?$basic_string::?$signal::Vslot::?$callable  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006b8fe0
//
// 006b8fe0  51                   push ecx
// 006b8fe1  56                   push esi
// 006b8fe2  8bf1                 mov esi, ecx
// 006b8fe4  8b4604               mov eax, dword ptr [esi + 4]
// 006b8fe7  8b08                 mov ecx, dword ptr [eax]
// 006b8fe9  50                   push eax
// 006b8fea  51                   push ecx
// 006b8feb  8d44240c             lea eax, [esp + 0xc]
// 006b8fef  50                   push eax
// 006b8ff0  8bce                 mov ecx, esi
// 006b8ff2  e8b9d5ffff           call 0x6b65b0
// 006b8ff7  8b4e04               mov ecx, dword ptr [esi + 4]
// 006b8ffa  51                   push ecx
// 006b8ffb  e858101500           call 0x80a058
// 006b9000  83c404               add esp, 4
// 006b9003  33c0                 xor eax, eax
// 006b9005  894604               mov dword ptr [esi + 4], eax
// 006b9008  894608               mov dword ptr [esi + 8], eax
// 006b900b  5e                   pop esi
// 006b900c  59                   pop ecx
// 006b900d  c3                   ret 
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