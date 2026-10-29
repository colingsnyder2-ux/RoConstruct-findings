// roc 2011-06 007ccd20  unit: RBX::PlayerChatLine  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007ccd20
//
// 007ccd20  51                   push ecx
// 007ccd21  56                   push esi
// 007ccd22  8bf1                 mov esi, ecx
// 007ccd24  8b4604               mov eax, dword ptr [esi + 4]
// 007ccd27  8b08                 mov ecx, dword ptr [eax]
// 007ccd29  50                   push eax
// 007ccd2a  51                   push ecx
// 007ccd2b  8d44240c             lea eax, [esp + 0xc]
// 007ccd2f  50                   push eax
// 007ccd30  8bce                 mov ecx, esi
// 007ccd32  e849f7ffff           call 0x7cc480
// 007ccd37  8b4e04               mov ecx, dword ptr [esi + 4]
// 007ccd3a  51                   push ecx
// 007ccd3b  e818d30300           call 0x80a058
// 007ccd40  83c404               add esp, 4
// 007ccd43  33c0                 xor eax, eax
// 007ccd45  894604               mov dword ptr [esi + 4], eax
// 007ccd48  894608               mov dword ptr [esi + 8], eax
// 007ccd4b  5e                   pop esi
// 007ccd4c  59                   pop ecx
// 007ccd4d  c3                   ret 
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