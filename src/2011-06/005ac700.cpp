// roc 2011-06 005ac700  unit: RBX::VFriendService::?$BoundFuncDesc  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005ac700
//
// 005ac700  51                   push ecx
// 005ac701  56                   push esi
// 005ac702  8bf1                 mov esi, ecx
// 005ac704  8b4604               mov eax, dword ptr [esi + 4]
// 005ac707  8b08                 mov ecx, dword ptr [eax]
// 005ac709  50                   push eax
// 005ac70a  51                   push ecx
// 005ac70b  8d44240c             lea eax, [esp + 0xc]
// 005ac70f  50                   push eax
// 005ac710  8bce                 mov ecx, esi
// 005ac712  e829f0ffff           call 0x5ab740
// 005ac717  8b4e04               mov ecx, dword ptr [esi + 4]
// 005ac71a  51                   push ecx
// 005ac71b  e838d92500           call 0x80a058
// 005ac720  83c404               add esp, 4
// 005ac723  33c0                 xor eax, eax
// 005ac725  894604               mov dword ptr [esi + 4], eax
// 005ac728  894608               mov dword ptr [esi + 8], eax
// 005ac72b  5e                   pop esi
// 005ac72c  59                   pop ecx
// 005ac72d  c3                   ret 
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