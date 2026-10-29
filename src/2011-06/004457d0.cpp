// roc 2011-06 004457d0  unit: IIHAAH::?$CMap  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004457d0
//
// 004457d0  51                   push ecx
// 004457d1  56                   push esi
// 004457d2  8bf1                 mov esi, ecx
// 004457d4  8b4604               mov eax, dword ptr [esi + 4]
// 004457d7  8b08                 mov ecx, dword ptr [eax]
// 004457d9  50                   push eax
// 004457da  51                   push ecx
// 004457db  8d44240c             lea eax, [esp + 0xc]
// 004457df  50                   push eax
// 004457e0  8bce                 mov ecx, esi
// 004457e2  e8f9c2fbff           call 0x401ae0
// 004457e7  8b4e04               mov ecx, dword ptr [esi + 4]
// 004457ea  51                   push ecx
// 004457eb  e868483c00           call 0x80a058
// 004457f0  83c404               add esp, 4
// 004457f3  33c0                 xor eax, eax
// 004457f5  894604               mov dword ptr [esi + 4], eax
// 004457f8  894608               mov dword ptr [esi + 8], eax
// 004457fb  5e                   pop esi
// 004457fc  59                   pop ecx
// 004457fd  c3                   ret 
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