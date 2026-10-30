// roc 2011-06 004dc440  unit: RBX::Network::VPlayers::?$EventDesc  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004dc440
//
// 004dc440  51                   push ecx
// 004dc441  56                   push esi
// 004dc442  8bf1                 mov esi, ecx
// 004dc444  8b4604               mov eax, dword ptr [esi + 4]
// 004dc447  8b08                 mov ecx, dword ptr [eax]
// 004dc449  50                   push eax
// 004dc44a  51                   push ecx
// 004dc44b  8d44240c             lea eax, [esp + 0xc]
// 004dc44f  50                   push eax
// 004dc450  8bce                 mov ecx, esi
// 004dc452  e8b9ccffff           call 0x4d9110
// 004dc457  8b4e04               mov ecx, dword ptr [esi + 4]
// 004dc45a  51                   push ecx
// 004dc45b  e8f8db3200           call 0x80a058
// 004dc460  83c404               add esp, 4
// 004dc463  33c0                 xor eax, eax
// 004dc465  894604               mov dword ptr [esi + 4], eax
// 004dc468  894608               mov dword ptr [esi + 8], eax
// 004dc46b  5e                   pop esi
// 004dc46c  59                   pop ecx
// 004dc46d  c3                   ret 
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