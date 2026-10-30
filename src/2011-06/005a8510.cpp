// roc 2011-06 005a8510  unit: RBX::VFriendService::?$FactoryProduct  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005a8510
//
// 005a8510  83ec08               sub esp, 8
// 005a8513  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005a8517  53                   push ebx
// 005a8518  56                   push esi
// 005a8519  57                   push edi
// 005a851a  8bf1                 mov esi, ecx
// 005a851c  50                   push eax
// 005a851d  8d4c2410             lea ecx, [esp + 0x10]
// 005a8521  51                   push ecx
// 005a8522  8bce                 mov ecx, esi
// 005a8524  e8d7f5ffff           call 0x5a7b00
// 005a8529  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005a852d  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 005a8531  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005a8539  8b542418             mov edx, dword ptr [esp + 0x18]
// 005a853d  52                   push edx
// 005a853e  8d44241c             lea eax, [esp + 0x1c]
// 005a8542  50                   push eax
// 005a8543  57                   push edi
// 005a8544  53                   push ebx
// 005a8545  e8a6f8e7ff           call 0x427df0
// 005a854a  83c410               add esp, 0x10
// 005a854d  57                   push edi
// 005a854e  53                   push ebx
// 005a854f  8d4c2414             lea ecx, [esp + 0x14]
// 005a8553  51                   push ecx
// 005a8554  8bce                 mov ecx, esi
// 005a8556  e88595e5ff           call 0x401ae0
// 005a855b  8b442418             mov eax, dword ptr [esp + 0x18]
// 005a855f  5f                   pop edi
// 005a8560  5e                   pop esi
// 005a8561  5b                   pop ebx
// 005a8562  83c408               add esp, 8
// 005a8565  c20400               ret 4
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