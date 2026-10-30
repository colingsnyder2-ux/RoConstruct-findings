// roc 2011-06 00922440  unit: RBX::AdornRbxGfx  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00922440
//
// 00922440  8b01                 mov eax, dword ptr [ecx]
// 00922442  80781d00             cmp byte ptr [eax + 0x1d], 0
// 00922446  7542                 jne 0x92248a
// 00922448  8b5008               mov edx, dword ptr [eax + 8]
// 0092244b  807a1d00             cmp byte ptr [edx + 0x1d], 0
// 0092244f  751c                 jne 0x92246d
// 00922451  8b02                 mov eax, dword ptr [edx]
// 00922453  80781d00             cmp byte ptr [eax + 0x1d], 0
// 00922457  7511                 jne 0x92246a
// 00922459  8da42400000000       lea esp, [esp]
// 00922460  8bd0                 mov edx, eax
// 00922462  8b02                 mov eax, dword ptr [edx]
// 00922464  80781d00             cmp byte ptr [eax + 0x1d], 0
// 00922468  74f6                 je 0x922460
// 0092246a  8911                 mov dword ptr [ecx], edx
// 0092246c  c3                   ret 
// 0092246d  8b4004               mov eax, dword ptr [eax + 4]
// 00922470  80781d00             cmp byte ptr [eax + 0x1d], 0
// 00922474  7512                 jne 0x922488
// 00922476  8b11                 mov edx, dword ptr [ecx]
// 00922478  3b5008               cmp edx, dword ptr [eax + 8]
// 0092247b  750b                 jne 0x922488
// 0092247d  8901                 mov dword ptr [ecx], eax
// 0092247f  8b4004               mov eax, dword ptr [eax + 4]
// 00922482  80781d00             cmp byte ptr [eax + 0x1d], 0
// 00922486  74ee                 je 0x922476
// 00922488  8901                 mov dword ptr [ecx], eax
// 0092248a  c3                   ret 
// copied from an identical function in another client (function ?_Inc@const_iterator@?$_Tree@V?$_Tmap_traits@HUValue@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue@@@std@@@3@$0A@@std@@@std@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#define _SECURE_SCL 0
#include <map>

// pair<const int, Value> is isnil(0x1d) - 0xd bytes.
struct Value { int words[3]; };
template class std::_Tree<std::_Tmap_traits<int, Value, std::less<int>,
    std::allocator<std::pair<const int, Value> >, false> >;