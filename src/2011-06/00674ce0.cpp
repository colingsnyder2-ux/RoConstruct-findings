// roc 2011-06 00674ce0  unit: RBX::VVisit::?$BoundFuncDesc  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00674ce0
//
// 00674ce0  8b01                 mov eax, dword ptr [ecx]
// 00674ce2  80783100             cmp byte ptr [eax + 0x31], 0
// 00674ce6  7542                 jne 0x674d2a
// 00674ce8  8b5008               mov edx, dword ptr [eax + 8]
// 00674ceb  807a3100             cmp byte ptr [edx + 0x31], 0
// 00674cef  751c                 jne 0x674d0d
// 00674cf1  8b02                 mov eax, dword ptr [edx]
// 00674cf3  80783100             cmp byte ptr [eax + 0x31], 0
// 00674cf7  7511                 jne 0x674d0a
// 00674cf9  8da42400000000       lea esp, [esp]
// 00674d00  8bd0                 mov edx, eax
// 00674d02  8b02                 mov eax, dword ptr [edx]
// 00674d04  80783100             cmp byte ptr [eax + 0x31], 0
// 00674d08  74f6                 je 0x674d00
// 00674d0a  8911                 mov dword ptr [ecx], edx
// 00674d0c  c3                   ret 
// 00674d0d  8b4004               mov eax, dword ptr [eax + 4]
// 00674d10  80783100             cmp byte ptr [eax + 0x31], 0
// 00674d14  7512                 jne 0x674d28
// 00674d16  8b11                 mov edx, dword ptr [ecx]
// 00674d18  3b5008               cmp edx, dword ptr [eax + 8]
// 00674d1b  750b                 jne 0x674d28
// 00674d1d  8901                 mov dword ptr [ecx], eax
// 00674d1f  8b4004               mov eax, dword ptr [eax + 4]
// 00674d22  80783100             cmp byte ptr [eax + 0x31], 0
// 00674d26  74ee                 je 0x674d16
// 00674d28  8901                 mov dword ptr [ecx], eax
// 00674d2a  c3                   ret 
// copied from an identical function in another client (function ?_Inc@const_iterator@?$_Tree@V?$_Tmap_traits@HUValue@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue@@@std@@@3@$0A@@std@@@std@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#define _SECURE_SCL 0
#include <map>

// pair<const int, Value> sized from isnil offset 0x31 (isnil = 0xd + sizeof(pair)).
struct Value { int words[8]; };
template class std::_Tree<std::_Tmap_traits<int, Value, std::less<int>,
    std::allocator<std::pair<const int, Value> >, false> >;