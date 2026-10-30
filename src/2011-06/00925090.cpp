// roc 2011-06 00925090  unit: Ogre::RbxSceneNode  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00925090
//
// 00925090  51                   push ecx
// 00925091  56                   push esi
// 00925092  8bf1                 mov esi, ecx
// 00925094  8b4604               mov eax, dword ptr [esi + 4]
// 00925097  8b08                 mov ecx, dword ptr [eax]
// 00925099  50                   push eax
// 0092509a  51                   push ecx
// 0092509b  8d44240c             lea eax, [esp + 0xc]
// 0092509f  50                   push eax
// 009250a0  8bce                 mov ecx, esi
// 009250a2  e859fcffff           call 0x924d00
// 009250a7  8b4e04               mov ecx, dword ptr [esi + 4]
// 009250aa  51                   push ecx
// 009250ab  e8a84feeff           call 0x80a058
// 009250b0  83c404               add esp, 4
// 009250b3  33c0                 xor eax, eax
// 009250b5  894604               mov dword ptr [esi + 4], eax
// 009250b8  894608               mov dword ptr [esi + 8], eax
// 009250bb  5e                   pop esi
// 009250bc  59                   pop ecx
// 009250bd  c3                   ret 
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