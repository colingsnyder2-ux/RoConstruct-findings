// roc 2011-06 009332a0  unit: Ogre::VRbxSky::?$SharedPtr  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 009332a0
//
// 009332a0  8b01                 mov eax, dword ptr [ecx]
// 009332a2  80782d00             cmp byte ptr [eax + 0x2d], 0
// 009332a6  7542                 jne 0x9332ea
// 009332a8  8b5008               mov edx, dword ptr [eax + 8]
// 009332ab  807a2d00             cmp byte ptr [edx + 0x2d], 0
// 009332af  751c                 jne 0x9332cd
// 009332b1  8b02                 mov eax, dword ptr [edx]
// 009332b3  80782d00             cmp byte ptr [eax + 0x2d], 0
// 009332b7  7511                 jne 0x9332ca
// 009332b9  8da42400000000       lea esp, [esp]
// 009332c0  8bd0                 mov edx, eax
// 009332c2  8b02                 mov eax, dword ptr [edx]
// 009332c4  80782d00             cmp byte ptr [eax + 0x2d], 0
// 009332c8  74f6                 je 0x9332c0
// 009332ca  8911                 mov dword ptr [ecx], edx
// 009332cc  c3                   ret 
// 009332cd  8b4004               mov eax, dword ptr [eax + 4]
// 009332d0  80782d00             cmp byte ptr [eax + 0x2d], 0
// 009332d4  7512                 jne 0x9332e8
// 009332d6  8b11                 mov edx, dword ptr [ecx]
// 009332d8  3b5008               cmp edx, dword ptr [eax + 8]
// 009332db  750b                 jne 0x9332e8
// 009332dd  8901                 mov dword ptr [ecx], eax
// 009332df  8b4004               mov eax, dword ptr [eax + 4]
// 009332e2  80782d00             cmp byte ptr [eax + 0x2d], 0
// 009332e6  74ee                 je 0x9332d6
// 009332e8  8901                 mov dword ptr [ecx], eax
// 009332ea  c3                   ret 
// copied from an identical function in another client (function ?_Inc@const_iterator@?$_Tree@V?$_Tmap_traits@HUValue@@ULess@@V?$allocator@U?$pair@$$CBHUValue@@@std@@@std@@$0A@@std@@@std@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#define _SECURE_SCL 0
#include <map>

// pair<const int, Value> is isnil(0x2d) - 0xd bytes.
struct Value { int words[7]; };
// _Myhead at +0x10: comparator carries 4 bytes of state.
struct Less { int state; bool operator()(int, int) const; };
template class std::_Tree<std::_Tmap_traits<int, Value, Less,
    std::allocator<std::pair<const int, Value> >, false> >;