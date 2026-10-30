// roc 2011-06 00629980  unit: RBX::VScriptStats::?$sp_counted_impl_p  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00629980
//
// 00629980  51                   push ecx
// 00629981  56                   push esi
// 00629982  8bf1                 mov esi, ecx
// 00629984  8b4604               mov eax, dword ptr [esi + 4]
// 00629987  8b08                 mov ecx, dword ptr [eax]
// 00629989  50                   push eax
// 0062998a  51                   push ecx
// 0062998b  8d44240c             lea eax, [esp + 0xc]
// 0062998f  50                   push eax
// 00629990  8bce                 mov ecx, esi
// 00629992  e819c1ffff           call 0x625ab0
// 00629997  8b4e04               mov ecx, dword ptr [esi + 4]
// 0062999a  51                   push ecx
// 0062999b  e8b8061e00           call 0x80a058
// 006299a0  83c404               add esp, 4
// 006299a3  33c0                 xor eax, eax
// 006299a5  894604               mov dword ptr [esi + 4], eax
// 006299a8  894608               mov dword ptr [esi + 8], eax
// 006299ab  5e                   pop esi
// 006299ac  59                   pop ecx
// 006299ad  c3                   ret 
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