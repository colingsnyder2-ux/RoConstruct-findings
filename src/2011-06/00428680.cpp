// roc 2011-06 00428680  unit: CSelectionTreeCtrl  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00428680
//
// 00428680  83ec08               sub esp, 8
// 00428683  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00428687  53                   push ebx
// 00428688  56                   push esi
// 00428689  57                   push edi
// 0042868a  8bf1                 mov esi, ecx
// 0042868c  50                   push eax
// 0042868d  8d4c2410             lea ecx, [esp + 0x10]
// 00428691  51                   push ecx
// 00428692  8bce                 mov ecx, esi
// 00428694  e8275a0600           call 0x48e0c0
// 00428699  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0042869d  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 004286a1  c744241800000000     mov dword ptr [esp + 0x18], 0
// 004286a9  8b542418             mov edx, dword ptr [esp + 0x18]
// 004286ad  52                   push edx
// 004286ae  8d44241c             lea eax, [esp + 0x1c]
// 004286b2  50                   push eax
// 004286b3  57                   push edi
// 004286b4  53                   push ebx
// 004286b5  e836f7ffff           call 0x427df0
// 004286ba  83c410               add esp, 0x10
// 004286bd  57                   push edi
// 004286be  53                   push ebx
// 004286bf  8d4c2414             lea ecx, [esp + 0x14]
// 004286c3  51                   push ecx
// 004286c4  8bce                 mov ecx, esi
// 004286c6  e81594fdff           call 0x401ae0
// 004286cb  8b442418             mov eax, dword ptr [esp + 0x18]
// 004286cf  5f                   pop edi
// 004286d0  5e                   pop esi
// 004286d1  5b                   pop ebx
// 004286d2  83c408               add esp, 8
// 004286d5  c20400               ret 4
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