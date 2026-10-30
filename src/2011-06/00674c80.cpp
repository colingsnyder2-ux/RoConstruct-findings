// roc 2011-06 00674c80  unit: RBX::VVisit::?$BoundFuncDesc  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00674c80
//
// 00674c80  8b01                 mov eax, dword ptr [ecx]
// 00674c82  80783100             cmp byte ptr [eax + 0x31], 0
// 00674c86  7406                 je 0x674c8e
// 00674c88  8b4008               mov eax, dword ptr [eax + 8]
// 00674c8b  8901                 mov dword ptr [ecx], eax
// 00674c8d  c3                   ret 
// 00674c8e  8b10                 mov edx, dword ptr [eax]
// 00674c90  807a3100             cmp byte ptr [edx + 0x31], 0
// 00674c94  7518                 jne 0x674cae
// 00674c96  8b4208               mov eax, dword ptr [edx + 8]
// 00674c99  80783100             cmp byte ptr [eax + 0x31], 0
// 00674c9d  750c                 jne 0x674cab
// 00674c9f  90                   nop 
// 00674ca0  8bd0                 mov edx, eax
// 00674ca2  8b4208               mov eax, dword ptr [edx + 8]
// 00674ca5  80783100             cmp byte ptr [eax + 0x31], 0
// 00674ca9  74f5                 je 0x674ca0
// 00674cab  8911                 mov dword ptr [ecx], edx
// 00674cad  c3                   ret 
// 00674cae  8b4004               mov eax, dword ptr [eax + 4]
// 00674cb1  80783100             cmp byte ptr [eax + 0x31], 0
// 00674cb5  7511                 jne 0x674cc8
// 00674cb7  8b11                 mov edx, dword ptr [ecx]
// 00674cb9  3b10                 cmp edx, dword ptr [eax]
// 00674cbb  750b                 jne 0x674cc8
// 00674cbd  8901                 mov dword ptr [ecx], eax
// 00674cbf  8b4004               mov eax, dword ptr [eax + 4]
// 00674cc2  80783100             cmp byte ptr [eax + 0x31], 0
// 00674cc6  74ef                 je 0x674cb7
// 00674cc8  8b11                 mov edx, dword ptr [ecx]
// 00674cca  807a3100             cmp byte ptr [edx + 0x31], 0
// 00674cce  7502                 jne 0x674cd2
// 00674cd0  8901                 mov dword ptr [ecx], eax
// 00674cd2  c3                   ret 
// copied from an identical function in another client (function ?_Dec@const_iterator@?$_Tree@V?$_Tmap_traits@HUValue@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue@@@std@@@3@$0A@@std@@@std@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#define _SECURE_SCL 0
#include <map>

// pair<const int, Value> sized from isnil offset 0x31 (isnil = 0xd + sizeof(pair)).
struct Value { int words[8]; };
template class std::_Tree<std::_Tmap_traits<int, Value, std::less<int>,
    std::allocator<std::pair<const int, Value> >, false> >;