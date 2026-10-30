// roc 2011-06 00739510  unit: RBX::VInstance::?$NonFactoryProduct  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00739510
//
// 00739510  51                   push ecx
// 00739511  56                   push esi
// 00739512  8bf1                 mov esi, ecx
// 00739514  8b4604               mov eax, dword ptr [esi + 4]
// 00739517  8b08                 mov ecx, dword ptr [eax]
// 00739519  50                   push eax
// 0073951a  51                   push ecx
// 0073951b  8d44240c             lea eax, [esp + 0xc]
// 0073951f  50                   push eax
// 00739520  8bce                 mov ecx, esi
// 00739522  e879f1ffff           call 0x7386a0
// 00739527  8b4e04               mov ecx, dword ptr [esi + 4]
// 0073952a  51                   push ecx
// 0073952b  e8280b0d00           call 0x80a058
// 00739530  83c404               add esp, 4
// 00739533  33c0                 xor eax, eax
// 00739535  894604               mov dword ptr [esi + 4], eax
// 00739538  894608               mov dword ptr [esi + 8], eax
// 0073953b  5e                   pop esi
// 0073953c  59                   pop ecx
// 0073953d  c3                   ret 
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