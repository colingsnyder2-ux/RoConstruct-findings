// roc 2011-06 004fa5f0  unit: RBX::Network::Replicator  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004fa5f0
//
// 004fa5f0  83ec08               sub esp, 8
// 004fa5f3  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004fa5f7  53                   push ebx
// 004fa5f8  56                   push esi
// 004fa5f9  57                   push edi
// 004fa5fa  8bf1                 mov esi, ecx
// 004fa5fc  50                   push eax
// 004fa5fd  8d4c2410             lea ecx, [esp + 0x10]
// 004fa601  51                   push ecx
// 004fa602  8bce                 mov ecx, esi
// 004fa604  e8c7acffff           call 0x4f52d0
// 004fa609  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004fa60d  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 004fa611  c744241800000000     mov dword ptr [esp + 0x18], 0
// 004fa619  8b542418             mov edx, dword ptr [esp + 0x18]
// 004fa61d  52                   push edx
// 004fa61e  8d44241c             lea eax, [esp + 0x1c]
// 004fa622  50                   push eax
// 004fa623  57                   push edi
// 004fa624  53                   push ebx
// 004fa625  e8e6cfffff           call 0x4f7610
// 004fa62a  83c410               add esp, 0x10
// 004fa62d  57                   push edi
// 004fa62e  53                   push ebx
// 004fa62f  8d4c2414             lea ecx, [esp + 0x14]
// 004fa633  51                   push ecx
// 004fa634  8bce                 mov ecx, esi
// 004fa636  e8051dffff           call 0x4ec340
// 004fa63b  8b442418             mov eax, dword ptr [esp + 0x18]
// 004fa63f  5f                   pop edi
// 004fa640  5e                   pop esi
// 004fa641  5b                   pop ebx
// 004fa642  83c408               add esp, 8
// 004fa645  c20400               ret 4
// copied from an identical function in another client (function ?erase@?$_Tree@V?$_Tmap_traits@HUValue16@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue16@@@std@@@3@$0A@@std@@@std@@QAEIABH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#define _SECURE_SCL 0
#include <map>

// value_type is 0x14 bytes: node color at +0x20, isnil at +0x21, max_size 0xcccccccc.
struct Value16 { int words[13]; };
template class std::_Tree<std::_Tmap_traits<int, Value16, std::less<int>,
    std::allocator<std::pair<const int, Value16> >, false> >;