// roc 2011-06 004ceb60  unit: RBX::Network::Players::W4PlayerChatType::?$EnumDesc  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004ceb60
//
// 004ceb60  51                   push ecx
// 004ceb61  56                   push esi
// 004ceb62  8bf1                 mov esi, ecx
// 004ceb64  8b4604               mov eax, dword ptr [esi + 4]
// 004ceb67  8b08                 mov ecx, dword ptr [eax]
// 004ceb69  50                   push eax
// 004ceb6a  51                   push ecx
// 004ceb6b  8d44240c             lea eax, [esp + 0xc]
// 004ceb6f  50                   push eax
// 004ceb70  8bce                 mov ecx, esi
// 004ceb72  e869eaffff           call 0x4cd5e0
// 004ceb77  8b4e04               mov ecx, dword ptr [esi + 4]
// 004ceb7a  51                   push ecx
// 004ceb7b  e8d8b43300           call 0x80a058
// 004ceb80  83c404               add esp, 4
// 004ceb83  33c0                 xor eax, eax
// 004ceb85  894604               mov dword ptr [esi + 4], eax
// 004ceb88  894608               mov dword ptr [esi + 8], eax
// 004ceb8b  5e                   pop esi
// 004ceb8c  59                   pop ecx
// 004ceb8d  c3                   ret 
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