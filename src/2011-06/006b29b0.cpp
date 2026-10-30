// roc 2011-06 006b29b0  unit: RBX::GuiButton  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006b29b0
//
// 006b29b0  8b01                 mov eax, dword ptr [ecx]
// 006b29b2  80787100             cmp byte ptr [eax + 0x71], 0
// 006b29b6  7406                 je 0x6b29be
// 006b29b8  8b4008               mov eax, dword ptr [eax + 8]
// 006b29bb  8901                 mov dword ptr [ecx], eax
// 006b29bd  c3                   ret 
// 006b29be  8b10                 mov edx, dword ptr [eax]
// 006b29c0  807a7100             cmp byte ptr [edx + 0x71], 0
// 006b29c4  7518                 jne 0x6b29de
// 006b29c6  8b4208               mov eax, dword ptr [edx + 8]
// 006b29c9  80787100             cmp byte ptr [eax + 0x71], 0
// 006b29cd  750c                 jne 0x6b29db
// 006b29cf  90                   nop 
// 006b29d0  8bd0                 mov edx, eax
// 006b29d2  8b4208               mov eax, dword ptr [edx + 8]
// 006b29d5  80787100             cmp byte ptr [eax + 0x71], 0
// 006b29d9  74f5                 je 0x6b29d0
// 006b29db  8911                 mov dword ptr [ecx], edx
// 006b29dd  c3                   ret 
// 006b29de  8b4004               mov eax, dword ptr [eax + 4]
// 006b29e1  80787100             cmp byte ptr [eax + 0x71], 0
// 006b29e5  7511                 jne 0x6b29f8
// 006b29e7  8b11                 mov edx, dword ptr [ecx]
// 006b29e9  3b10                 cmp edx, dword ptr [eax]
// 006b29eb  750b                 jne 0x6b29f8
// 006b29ed  8901                 mov dword ptr [ecx], eax
// 006b29ef  8b4004               mov eax, dword ptr [eax + 4]
// 006b29f2  80787100             cmp byte ptr [eax + 0x71], 0
// 006b29f6  74ef                 je 0x6b29e7
// 006b29f8  8b11                 mov edx, dword ptr [ecx]
// 006b29fa  807a7100             cmp byte ptr [edx + 0x71], 0
// 006b29fe  7502                 jne 0x6b2a02
// 006b2a00  8901                 mov dword ptr [ecx], eax
// 006b2a02  c3                   ret 
// copied from an identical function in another client (function ?_Dec@const_iterator@?$_Tree@V?$_Tmap_traits@HUValue@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue@@@std@@@3@$0A@@std@@@std@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#define _SECURE_SCL 0
#include <map>

// pair<const int, Value> sized from isnil offset 0x71 (isnil = 0xd + sizeof(pair)).
struct Value { int words[24]; };
template class std::_Tree<std::_Tmap_traits<int, Value, std::less<int>,
    std::allocator<std::pair<const int, Value> >, false> >;