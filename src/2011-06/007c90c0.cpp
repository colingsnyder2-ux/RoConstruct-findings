// roc 2011-06 007c90c0  unit: RBX::ChatLine  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007c90c0
//
// 007c90c0  53                   push ebx
// 007c90c1  56                   push esi
// 007c90c2  57                   push edi
// 007c90c3  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 007c90c7  807f5900             cmp byte ptr [edi + 0x59], 0
// 007c90cb  8bd9                 mov ebx, ecx
// 007c90cd  8bf7                 mov esi, edi
// 007c90cf  751e                 jne 0x7c90ef
// 007c90d1  8b4608               mov eax, dword ptr [esi + 8]
// 007c90d4  50                   push eax
// 007c90d5  8bcb                 mov ecx, ebx
// 007c90d7  e8e4ffffff           call 0x7c90c0
// 007c90dc  8b36                 mov esi, dword ptr [esi]
// 007c90de  57                   push edi
// 007c90df  e8740f0400           call 0x80a058
// 007c90e4  83c404               add esp, 4
// 007c90e7  807e5900             cmp byte ptr [esi + 0x59], 0
// 007c90eb  8bfe                 mov edi, esi
// 007c90ed  74e2                 je 0x7c90d1
// 007c90ef  5f                   pop edi
// 007c90f0  5e                   pop esi
// 007c90f1  5b                   pop ebx
// 007c90f2  c20400               ret 4
// copied from an identical function in another client (function ?_Erase@?$_Tree@V?$_Tmap_traits@HUValue@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue@@@std@@@3@$0A@@std@@@std@@IAEXPAU_Node@?$_Tree_nod@V?$_Tmap_traits@HUValue@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue@@@std@@@3@$0A@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#define _SECURE_SCL 0
#include <map>

// pair<const int, Value> is isnil(0x59) - 0xd bytes.
struct Value { int words[18]; };
template class std::_Tree<std::_Tmap_traits<int, Value, std::less<int>,
    std::allocator<std::pair<const int, Value> >, false> >;