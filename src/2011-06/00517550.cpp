// roc 2011-06 00517550  unit: RBX::Network::NetworkOwnerJob  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00517550
//
// 00517550  83ec08               sub esp, 8
// 00517553  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00517557  53                   push ebx
// 00517558  56                   push esi
// 00517559  57                   push edi
// 0051755a  8bf1                 mov esi, ecx
// 0051755c  50                   push eax
// 0051755d  8d4c2410             lea ecx, [esp + 0x10]
// 00517561  51                   push ecx
// 00517562  8bce                 mov ecx, esi
// 00517564  e847f4ffff           call 0x5169b0
// 00517569  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0051756d  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00517571  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00517579  8b542418             mov edx, dword ptr [esp + 0x18]
// 0051757d  52                   push edx
// 0051757e  8d44241c             lea eax, [esp + 0x1c]
// 00517582  50                   push eax
// 00517583  57                   push edi
// 00517584  53                   push ebx
// 00517585  e8164d4500           call 0x96c2a0
// 0051758a  83c410               add esp, 0x10
// 0051758d  57                   push edi
// 0051758e  53                   push ebx
// 0051758f  8d4c2414             lea ecx, [esp + 0x14]
// 00517593  51                   push ecx
// 00517594  8bce                 mov ecx, esi
// 00517596  e8f56a2700           call 0x78e090
// 0051759b  8b442418             mov eax, dword ptr [esp + 0x18]
// 0051759f  5f                   pop edi
// 005175a0  5e                   pop esi
// 005175a1  5b                   pop ebx
// 005175a2  83c408               add esp, 8
// 005175a5  c20400               ret 4
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