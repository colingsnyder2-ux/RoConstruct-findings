// roc 2011-06 00924dd0  unit: RBX::AdornRbxGfx  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00924dd0
//
// 00924dd0  51                   push ecx
// 00924dd1  56                   push esi
// 00924dd2  8bf1                 mov esi, ecx
// 00924dd4  8b4604               mov eax, dword ptr [esi + 4]
// 00924dd7  8b08                 mov ecx, dword ptr [eax]
// 00924dd9  50                   push eax
// 00924dda  51                   push ecx
// 00924ddb  8d44240c             lea eax, [esp + 0xc]
// 00924ddf  50                   push eax
// 00924de0  8bce                 mov ecx, esi
// 00924de2  e8895ce8ff           call 0x7aaa70
// 00924de7  8b4e04               mov ecx, dword ptr [esi + 4]
// 00924dea  51                   push ecx
// 00924deb  e86852eeff           call 0x80a058
// 00924df0  83c404               add esp, 4
// 00924df3  33c0                 xor eax, eax
// 00924df5  894604               mov dword ptr [esi + 4], eax
// 00924df8  894608               mov dword ptr [esi + 8], eax
// 00924dfb  5e                   pop esi
// 00924dfc  59                   pop ecx
// 00924dfd  c3                   ret 
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