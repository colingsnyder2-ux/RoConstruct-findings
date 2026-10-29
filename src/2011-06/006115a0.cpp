// roc 2011-06 006115a0  unit: RBX::ChangeHistoryService  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006115a0
//
// 006115a0  51                   push ecx
// 006115a1  56                   push esi
// 006115a2  8bf1                 mov esi, ecx
// 006115a4  8b4604               mov eax, dword ptr [esi + 4]
// 006115a7  8b08                 mov ecx, dword ptr [eax]
// 006115a9  50                   push eax
// 006115aa  51                   push ecx
// 006115ab  8d44240c             lea eax, [esp + 0xc]
// 006115af  50                   push eax
// 006115b0  8bce                 mov ecx, esi
// 006115b2  e8b9f8ffff           call 0x610e70
// 006115b7  8b4e04               mov ecx, dword ptr [esi + 4]
// 006115ba  51                   push ecx
// 006115bb  e8988a1f00           call 0x80a058
// 006115c0  83c404               add esp, 4
// 006115c3  33c0                 xor eax, eax
// 006115c5  894604               mov dword ptr [esi + 4], eax
// 006115c8  894608               mov dword ptr [esi + 8], eax
// 006115cb  5e                   pop esi
// 006115cc  59                   pop ecx
// 006115cd  c3                   ret 
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