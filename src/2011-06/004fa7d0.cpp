// roc 2011-06 004fa7d0  unit: RBX::Network::Replicator  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004fa7d0
//
// 004fa7d0  83ec08               sub esp, 8
// 004fa7d3  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004fa7d7  53                   push ebx
// 004fa7d8  56                   push esi
// 004fa7d9  57                   push edi
// 004fa7da  8bf1                 mov esi, ecx
// 004fa7dc  50                   push eax
// 004fa7dd  8d4c2410             lea ecx, [esp + 0x10]
// 004fa7e1  51                   push ecx
// 004fa7e2  8bce                 mov ecx, esi
// 004fa7e4  e897abffff           call 0x4f5380
// 004fa7e9  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004fa7ed  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 004fa7f1  c744241800000000     mov dword ptr [esp + 0x18], 0
// 004fa7f9  8b542418             mov edx, dword ptr [esp + 0x18]
// 004fa7fd  52                   push edx
// 004fa7fe  8d44241c             lea eax, [esp + 0x1c]
// 004fa802  50                   push eax
// 004fa803  57                   push edi
// 004fa804  53                   push ebx
// 004fa805  e806ceffff           call 0x4f7610
// 004fa80a  83c410               add esp, 0x10
// 004fa80d  57                   push edi
// 004fa80e  53                   push ebx
// 004fa80f  8d4c2414             lea ecx, [esp + 0x14]
// 004fa813  51                   push ecx
// 004fa814  8bce                 mov ecx, esi
// 004fa816  e8251bffff           call 0x4ec340
// 004fa81b  8b442418             mov eax, dword ptr [esp + 0x18]
// 004fa81f  5f                   pop edi
// 004fa820  5e                   pop esi
// 004fa821  5b                   pop ebx
// 004fa822  83c408               add esp, 8
// 004fa825  c20400               ret 4
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