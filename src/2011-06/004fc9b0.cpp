// roc 2011-06 004fc9b0  unit: RBX::Network::Replicator  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004fc9b0
//
// 004fc9b0  51                   push ecx
// 004fc9b1  56                   push esi
// 004fc9b2  8bf1                 mov esi, ecx
// 004fc9b4  8b4604               mov eax, dword ptr [esi + 4]
// 004fc9b7  8b08                 mov ecx, dword ptr [eax]
// 004fc9b9  50                   push eax
// 004fc9ba  51                   push ecx
// 004fc9bb  8d44240c             lea eax, [esp + 0xc]
// 004fc9bf  50                   push eax
// 004fc9c0  8bce                 mov ecx, esi
// 004fc9c2  e879f9feff           call 0x4ec340
// 004fc9c7  8b4e04               mov ecx, dword ptr [esi + 4]
// 004fc9ca  51                   push ecx
// 004fc9cb  e888d63000           call 0x80a058
// 004fc9d0  83c404               add esp, 4
// 004fc9d3  33c0                 xor eax, eax
// 004fc9d5  894604               mov dword ptr [esi + 4], eax
// 004fc9d8  894608               mov dword ptr [esi + 8], eax
// 004fc9db  5e                   pop esi
// 004fc9dc  59                   pop ecx
// 004fc9dd  c3                   ret 
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