// roc 2011-06 004b6a80  unit: std::D::DU?$char_traits::$$A6AXV?$basic_string::?$signal::Vslot::?$callable  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004b6a80
//
// 004b6a80  51                   push ecx
// 004b6a81  56                   push esi
// 004b6a82  8bf1                 mov esi, ecx
// 004b6a84  8b4604               mov eax, dword ptr [esi + 4]
// 004b6a87  8b08                 mov ecx, dword ptr [eax]
// 004b6a89  50                   push eax
// 004b6a8a  51                   push ecx
// 004b6a8b  8d44240c             lea eax, [esp + 0xc]
// 004b6a8f  50                   push eax
// 004b6a90  8bce                 mov ecx, esi
// 004b6a92  e84959ffff           call 0x4ac3e0
// 004b6a97  8b4e04               mov ecx, dword ptr [esi + 4]
// 004b6a9a  51                   push ecx
// 004b6a9b  e8b8353500           call 0x80a058
// 004b6aa0  83c404               add esp, 4
// 004b6aa3  33c0                 xor eax, eax
// 004b6aa5  894604               mov dword ptr [esi + 4], eax
// 004b6aa8  894608               mov dword ptr [esi + 8], eax
// 004b6aab  5e                   pop esi
// 004b6aac  59                   pop ecx
// 004b6aad  c3                   ret 
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