// roc 2011-06 0073cc00  unit: RBX::VGuiService::?$BoundFuncDesc  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0073cc00
//
// 0073cc00  51                   push ecx
// 0073cc01  56                   push esi
// 0073cc02  8bf1                 mov esi, ecx
// 0073cc04  8b4604               mov eax, dword ptr [esi + 4]
// 0073cc07  8b08                 mov ecx, dword ptr [eax]
// 0073cc09  50                   push eax
// 0073cc0a  51                   push ecx
// 0073cc0b  8d44240c             lea eax, [esp + 0xc]
// 0073cc0f  50                   push eax
// 0073cc10  8bce                 mov ecx, esi
// 0073cc12  e849efffff           call 0x73bb60
// 0073cc17  8b4e04               mov ecx, dword ptr [esi + 4]
// 0073cc1a  51                   push ecx
// 0073cc1b  e838d40c00           call 0x80a058
// 0073cc20  83c404               add esp, 4
// 0073cc23  33c0                 xor eax, eax
// 0073cc25  894604               mov dword ptr [esi + 4], eax
// 0073cc28  894608               mov dword ptr [esi + 8], eax
// 0073cc2b  5e                   pop esi
// 0073cc2c  59                   pop ecx
// 0073cc2d  c3                   ret 
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