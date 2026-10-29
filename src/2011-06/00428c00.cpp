// roc 2011-06 00428c00  unit: CRobloxTreeCtrl  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00428c00
//
// 00428c00  51                   push ecx
// 00428c01  56                   push esi
// 00428c02  8bf1                 mov esi, ecx
// 00428c04  8b4604               mov eax, dword ptr [esi + 4]
// 00428c07  8b08                 mov ecx, dword ptr [eax]
// 00428c09  50                   push eax
// 00428c0a  51                   push ecx
// 00428c0b  8d44240c             lea eax, [esp + 0xc]
// 00428c0f  50                   push eax
// 00428c10  8bce                 mov ecx, esi
// 00428c12  e8c9fbffff           call 0x4287e0
// 00428c17  8b4e04               mov ecx, dword ptr [esi + 4]
// 00428c1a  51                   push ecx
// 00428c1b  e838143e00           call 0x80a058
// 00428c20  83c404               add esp, 4
// 00428c23  33c0                 xor eax, eax
// 00428c25  894604               mov dword ptr [esi + 4], eax
// 00428c28  894608               mov dword ptr [esi + 8], eax
// 00428c2b  5e                   pop esi
// 00428c2c  59                   pop ecx
// 00428c2d  c3                   ret 
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