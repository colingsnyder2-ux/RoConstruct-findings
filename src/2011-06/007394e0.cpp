// roc 2011-06 007394e0  unit: RBX::VInstance::?$NonFactoryProduct  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007394e0
//
// 007394e0  51                   push ecx
// 007394e1  56                   push esi
// 007394e2  8bf1                 mov esi, ecx
// 007394e4  8b4604               mov eax, dword ptr [esi + 4]
// 007394e7  8b08                 mov ecx, dword ptr [eax]
// 007394e9  50                   push eax
// 007394ea  51                   push ecx
// 007394eb  8d44240c             lea eax, [esp + 0xc]
// 007394ef  50                   push eax
// 007394f0  8bce                 mov ecx, esi
// 007394f2  e8f9f6ffff           call 0x738bf0
// 007394f7  8b4e04               mov ecx, dword ptr [esi + 4]
// 007394fa  51                   push ecx
// 007394fb  e8580b0d00           call 0x80a058
// 00739500  83c404               add esp, 4
// 00739503  33c0                 xor eax, eax
// 00739505  894604               mov dword ptr [esi + 4], eax
// 00739508  894608               mov dword ptr [esi + 8], eax
// 0073950b  5e                   pop esi
// 0073950c  59                   pop ecx
// 0073950d  c3                   ret 
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