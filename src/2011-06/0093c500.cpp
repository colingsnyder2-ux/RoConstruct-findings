// roc 2011-06 0093c500  unit: Ogre::TextureCompositor  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0093c500
//
// 0093c500  51                   push ecx
// 0093c501  56                   push esi
// 0093c502  8bf1                 mov esi, ecx
// 0093c504  8b4604               mov eax, dword ptr [esi + 4]
// 0093c507  8b08                 mov ecx, dword ptr [eax]
// 0093c509  50                   push eax
// 0093c50a  51                   push ecx
// 0093c50b  8d44240c             lea eax, [esp + 0xc]
// 0093c50f  50                   push eax
// 0093c510  8bce                 mov ecx, esi
// 0093c512  e889faffff           call 0x93bfa0
// 0093c517  8b4e04               mov ecx, dword ptr [esi + 4]
// 0093c51a  51                   push ecx
// 0093c51b  e838dbecff           call 0x80a058
// 0093c520  83c404               add esp, 4
// 0093c523  33c0                 xor eax, eax
// 0093c525  894604               mov dword ptr [esi + 4], eax
// 0093c528  894608               mov dword ptr [esi + 8], eax
// 0093c52b  5e                   pop esi
// 0093c52c  59                   pop ecx
// 0093c52d  c3                   ret 
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