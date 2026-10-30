// roc 2011-06 0092b1b0  unit: ResourceGroupHelper::UpdateMaterialRenderableVisitor  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0092b1b0
//
// 0092b1b0  51                   push ecx
// 0092b1b1  56                   push esi
// 0092b1b2  8bf1                 mov esi, ecx
// 0092b1b4  8b4604               mov eax, dword ptr [esi + 4]
// 0092b1b7  8b08                 mov ecx, dword ptr [eax]
// 0092b1b9  50                   push eax
// 0092b1ba  51                   push ecx
// 0092b1bb  8d44240c             lea eax, [esp + 0xc]
// 0092b1bf  50                   push eax
// 0092b1c0  8bce                 mov ecx, esi
// 0092b1c2  e899f8ffff           call 0x92aa60
// 0092b1c7  8b4e04               mov ecx, dword ptr [esi + 4]
// 0092b1ca  51                   push ecx
// 0092b1cb  e888eeedff           call 0x80a058
// 0092b1d0  83c404               add esp, 4
// 0092b1d3  33c0                 xor eax, eax
// 0092b1d5  894604               mov dword ptr [esi + 4], eax
// 0092b1d8  894608               mov dword ptr [esi + 8], eax
// 0092b1db  5e                   pop esi
// 0092b1dc  59                   pop ecx
// 0092b1dd  c3                   ret 
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