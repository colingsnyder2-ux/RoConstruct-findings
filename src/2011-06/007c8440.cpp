// roc 2011-06 007c8440  unit: RBX::AdornBillboarder  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007c8440
//
// 007c8440  8b01                 mov eax, dword ptr [ecx]
// 007c8442  80783d00             cmp byte ptr [eax + 0x3d], 0
// 007c8446  7542                 jne 0x7c848a
// 007c8448  8b5008               mov edx, dword ptr [eax + 8]
// 007c844b  807a3d00             cmp byte ptr [edx + 0x3d], 0
// 007c844f  751c                 jne 0x7c846d
// 007c8451  8b02                 mov eax, dword ptr [edx]
// 007c8453  80783d00             cmp byte ptr [eax + 0x3d], 0
// 007c8457  7511                 jne 0x7c846a
// 007c8459  8da42400000000       lea esp, [esp]
// 007c8460  8bd0                 mov edx, eax
// 007c8462  8b02                 mov eax, dword ptr [edx]
// 007c8464  80783d00             cmp byte ptr [eax + 0x3d], 0
// 007c8468  74f6                 je 0x7c8460
// 007c846a  8911                 mov dword ptr [ecx], edx
// 007c846c  c3                   ret 
// 007c846d  8b4004               mov eax, dword ptr [eax + 4]
// 007c8470  80783d00             cmp byte ptr [eax + 0x3d], 0
// 007c8474  7512                 jne 0x7c8488
// 007c8476  8b11                 mov edx, dword ptr [ecx]
// 007c8478  3b5008               cmp edx, dword ptr [eax + 8]
// 007c847b  750b                 jne 0x7c8488
// 007c847d  8901                 mov dword ptr [ecx], eax
// 007c847f  8b4004               mov eax, dword ptr [eax + 4]
// 007c8482  80783d00             cmp byte ptr [eax + 0x3d], 0
// 007c8486  74ee                 je 0x7c8476
// 007c8488  8901                 mov dword ptr [ecx], eax
// 007c848a  c3                   ret 
// copied from an identical function in another client (function ?_Inc@const_iterator@?$_Tree@V?$_Tmap_traits@HUValue@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue@@@std@@@3@$0A@@std@@@std@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#define _SECURE_SCL 0
#include <map>

// pair<const int, Value> is isnil(0x3d) - 0xd bytes.
struct Value { int words[11]; };
template class std::_Tree<std::_Tmap_traits<int, Value, std::less<int>,
    std::allocator<std::pair<const int, Value> >, false> >;