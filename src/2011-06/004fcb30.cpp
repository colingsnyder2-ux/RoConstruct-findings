// roc 2011-06 004fcb30  unit: RBX::Network::Replicator  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004fcb30
//
// 004fcb30  51                   push ecx
// 004fcb31  56                   push esi
// 004fcb32  8bf1                 mov esi, ecx
// 004fcb34  8b4604               mov eax, dword ptr [esi + 4]
// 004fcb37  8b08                 mov ecx, dword ptr [eax]
// 004fcb39  50                   push eax
// 004fcb3a  51                   push ecx
// 004fcb3b  8d44240c             lea eax, [esp + 0xc]
// 004fcb3f  50                   push eax
// 004fcb40  8bce                 mov ecx, esi
// 004fcb42  e849152900           call 0x78e090
// 004fcb47  8b4e04               mov ecx, dword ptr [esi + 4]
// 004fcb4a  51                   push ecx
// 004fcb4b  e808d53000           call 0x80a058
// 004fcb50  83c404               add esp, 4
// 004fcb53  33c0                 xor eax, eax
// 004fcb55  894604               mov dword ptr [esi + 4], eax
// 004fcb58  894608               mov dword ptr [esi + 8], eax
// 004fcb5b  5e                   pop esi
// 004fcb5c  59                   pop ecx
// 004fcb5d  c3                   ret 
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