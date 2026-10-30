// roc 2011-06 0073edf0  unit: RBX::TweenService  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0073edf0
//
// 0073edf0  51                   push ecx
// 0073edf1  56                   push esi
// 0073edf2  8bf1                 mov esi, ecx
// 0073edf4  8b4604               mov eax, dword ptr [esi + 4]
// 0073edf7  8b08                 mov ecx, dword ptr [eax]
// 0073edf9  50                   push eax
// 0073edfa  51                   push ecx
// 0073edfb  8d44240c             lea eax, [esp + 0xc]
// 0073edff  50                   push eax
// 0073ee00  8bce                 mov ecx, esi
// 0073ee02  e889feffff           call 0x73ec90
// 0073ee07  8b4e04               mov ecx, dword ptr [esi + 4]
// 0073ee0a  51                   push ecx
// 0073ee0b  e848b20c00           call 0x80a058
// 0073ee10  83c404               add esp, 4
// 0073ee13  33c0                 xor eax, eax
// 0073ee15  894604               mov dword ptr [esi + 4], eax
// 0073ee18  894608               mov dword ptr [esi + 8], eax
// 0073ee1b  5e                   pop esi
// 0073ee1c  59                   pop ecx
// 0073ee1d  c3                   ret 
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