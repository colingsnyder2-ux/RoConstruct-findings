// roc 2011-06 006dc720  unit: RBX::VPhysicsService::?$EventDesc  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006dc720
//
// 006dc720  51                   push ecx
// 006dc721  56                   push esi
// 006dc722  8bf1                 mov esi, ecx
// 006dc724  8b4604               mov eax, dword ptr [esi + 4]
// 006dc727  8b08                 mov ecx, dword ptr [eax]
// 006dc729  50                   push eax
// 006dc72a  51                   push ecx
// 006dc72b  8d44240c             lea eax, [esp + 0xc]
// 006dc72f  50                   push eax
// 006dc730  8bce                 mov ecx, esi
// 006dc732  e859fbffff           call 0x6dc290
// 006dc737  8b4e04               mov ecx, dword ptr [esi + 4]
// 006dc73a  51                   push ecx
// 006dc73b  e818d91200           call 0x80a058
// 006dc740  83c404               add esp, 4
// 006dc743  33c0                 xor eax, eax
// 006dc745  894604               mov dword ptr [esi + 4], eax
// 006dc748  894608               mov dword ptr [esi + 8], eax
// 006dc74b  5e                   pop esi
// 006dc74c  59                   pop ecx
// 006dc74d  c3                   ret 
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