// roc 2011-06 006b2960  unit: RBX::GuiButton  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006b2960
//
// 006b2960  8b01                 mov eax, dword ptr [ecx]
// 006b2962  80787100             cmp byte ptr [eax + 0x71], 0
// 006b2966  7542                 jne 0x6b29aa
// 006b2968  8b5008               mov edx, dword ptr [eax + 8]
// 006b296b  807a7100             cmp byte ptr [edx + 0x71], 0
// 006b296f  751c                 jne 0x6b298d
// 006b2971  8b02                 mov eax, dword ptr [edx]
// 006b2973  80787100             cmp byte ptr [eax + 0x71], 0
// 006b2977  7511                 jne 0x6b298a
// 006b2979  8da42400000000       lea esp, [esp]
// 006b2980  8bd0                 mov edx, eax
// 006b2982  8b02                 mov eax, dword ptr [edx]
// 006b2984  80787100             cmp byte ptr [eax + 0x71], 0
// 006b2988  74f6                 je 0x6b2980
// 006b298a  8911                 mov dword ptr [ecx], edx
// 006b298c  c3                   ret 
// 006b298d  8b4004               mov eax, dword ptr [eax + 4]
// 006b2990  80787100             cmp byte ptr [eax + 0x71], 0
// 006b2994  7512                 jne 0x6b29a8
// 006b2996  8b11                 mov edx, dword ptr [ecx]
// 006b2998  3b5008               cmp edx, dword ptr [eax + 8]
// 006b299b  750b                 jne 0x6b29a8
// 006b299d  8901                 mov dword ptr [ecx], eax
// 006b299f  8b4004               mov eax, dword ptr [eax + 4]
// 006b29a2  80787100             cmp byte ptr [eax + 0x71], 0
// 006b29a6  74ee                 je 0x6b2996
// 006b29a8  8901                 mov dword ptr [ecx], eax
// 006b29aa  c3                   ret 
// copied from an identical function in another client (function ?_Inc@const_iterator@?$_Tree@V?$_Tmap_traits@HUValue@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue@@@std@@@3@$0A@@std@@@std@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#define _SECURE_SCL 0
#include <map>

// pair<const int, Value> sized from isnil offset 0x71 (isnil = 0xd + sizeof(pair)).
struct Value { int words[24]; };
template class std::_Tree<std::_Tmap_traits<int, Value, std::less<int>,
    std::allocator<std::pair<const int, Value> >, false> >;