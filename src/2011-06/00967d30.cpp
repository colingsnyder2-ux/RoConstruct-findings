// roc 2011-06 00967d30  unit: Ogre::RbxCluster  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00967d30
//
// 00967d30  51                   push ecx
// 00967d31  56                   push esi
// 00967d32  8bf1                 mov esi, ecx
// 00967d34  8b4604               mov eax, dword ptr [esi + 4]
// 00967d37  8b08                 mov ecx, dword ptr [eax]
// 00967d39  50                   push eax
// 00967d3a  51                   push ecx
// 00967d3b  8d44240c             lea eax, [esp + 0xc]
// 00967d3f  50                   push eax
// 00967d40  8bce                 mov ecx, esi
// 00967d42  e8f9faffff           call 0x967840
// 00967d47  8b4e04               mov ecx, dword ptr [esi + 4]
// 00967d4a  51                   push ecx
// 00967d4b  e80823eaff           call 0x80a058
// 00967d50  83c404               add esp, 4
// 00967d53  33c0                 xor eax, eax
// 00967d55  894604               mov dword ptr [esi + 4], eax
// 00967d58  894608               mov dword ptr [esi + 8], eax
// 00967d5b  5e                   pop esi
// 00967d5c  59                   pop ecx
// 00967d5d  c3                   ret 
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