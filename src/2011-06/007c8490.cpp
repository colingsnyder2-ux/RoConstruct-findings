// roc 2011-06 007c8490  unit: RBX::AdornBillboarder  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007c8490
//
// 007c8490  8b01                 mov eax, dword ptr [ecx]
// 007c8492  80783d00             cmp byte ptr [eax + 0x3d], 0
// 007c8496  7406                 je 0x7c849e
// 007c8498  8b4008               mov eax, dword ptr [eax + 8]
// 007c849b  8901                 mov dword ptr [ecx], eax
// 007c849d  c3                   ret 
// 007c849e  8b10                 mov edx, dword ptr [eax]
// 007c84a0  807a3d00             cmp byte ptr [edx + 0x3d], 0
// 007c84a4  7518                 jne 0x7c84be
// 007c84a6  8b4208               mov eax, dword ptr [edx + 8]
// 007c84a9  80783d00             cmp byte ptr [eax + 0x3d], 0
// 007c84ad  750c                 jne 0x7c84bb
// 007c84af  90                   nop 
// 007c84b0  8bd0                 mov edx, eax
// 007c84b2  8b4208               mov eax, dword ptr [edx + 8]
// 007c84b5  80783d00             cmp byte ptr [eax + 0x3d], 0
// 007c84b9  74f5                 je 0x7c84b0
// 007c84bb  8911                 mov dword ptr [ecx], edx
// 007c84bd  c3                   ret 
// 007c84be  8b4004               mov eax, dword ptr [eax + 4]
// 007c84c1  80783d00             cmp byte ptr [eax + 0x3d], 0
// 007c84c5  7511                 jne 0x7c84d8
// 007c84c7  8b11                 mov edx, dword ptr [ecx]
// 007c84c9  3b10                 cmp edx, dword ptr [eax]
// 007c84cb  750b                 jne 0x7c84d8
// 007c84cd  8901                 mov dword ptr [ecx], eax
// 007c84cf  8b4004               mov eax, dword ptr [eax + 4]
// 007c84d2  80783d00             cmp byte ptr [eax + 0x3d], 0
// 007c84d6  74ef                 je 0x7c84c7
// 007c84d8  8b11                 mov edx, dword ptr [ecx]
// 007c84da  807a3d00             cmp byte ptr [edx + 0x3d], 0
// 007c84de  7502                 jne 0x7c84e2
// 007c84e0  8901                 mov dword ptr [ecx], eax
// 007c84e2  c3                   ret 
// copied from an identical function in another client (function ?_Dec@const_iterator@?$_Tree@V?$_Tmap_traits@HUValue@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue@@@std@@@3@$0A@@std@@@std@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#define _SECURE_SCL 0
#include <map>

// pair<const int, Value> is isnil(0x3d) - 0xd bytes.
struct Value { int words[11]; };
template class std::_Tree<std::_Tmap_traits<int, Value, std::less<int>,
    std::allocator<std::pair<const int, Value> >, false> >;