// roc 2011-06 0064a3a0  unit: RBX::VGameSettings::?$GlobalAdvancedSettingsItem  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0064a3a0
//
// 0064a3a0  8b01                 mov eax, dword ptr [ecx]
// 0064a3a2  80782d00             cmp byte ptr [eax + 0x2d], 0
// 0064a3a6  7406                 je 0x64a3ae
// 0064a3a8  8b4008               mov eax, dword ptr [eax + 8]
// 0064a3ab  8901                 mov dword ptr [ecx], eax
// 0064a3ad  c3                   ret 
// 0064a3ae  8b10                 mov edx, dword ptr [eax]
// 0064a3b0  807a2d00             cmp byte ptr [edx + 0x2d], 0
// 0064a3b4  7518                 jne 0x64a3ce
// 0064a3b6  8b4208               mov eax, dword ptr [edx + 8]
// 0064a3b9  80782d00             cmp byte ptr [eax + 0x2d], 0
// 0064a3bd  750c                 jne 0x64a3cb
// 0064a3bf  90                   nop 
// 0064a3c0  8bd0                 mov edx, eax
// 0064a3c2  8b4208               mov eax, dword ptr [edx + 8]
// 0064a3c5  80782d00             cmp byte ptr [eax + 0x2d], 0
// 0064a3c9  74f5                 je 0x64a3c0
// 0064a3cb  8911                 mov dword ptr [ecx], edx
// 0064a3cd  c3                   ret 
// 0064a3ce  8b4004               mov eax, dword ptr [eax + 4]
// 0064a3d1  80782d00             cmp byte ptr [eax + 0x2d], 0
// 0064a3d5  7511                 jne 0x64a3e8
// 0064a3d7  8b11                 mov edx, dword ptr [ecx]
// 0064a3d9  3b10                 cmp edx, dword ptr [eax]
// 0064a3db  750b                 jne 0x64a3e8
// 0064a3dd  8901                 mov dword ptr [ecx], eax
// 0064a3df  8b4004               mov eax, dword ptr [eax + 4]
// 0064a3e2  80782d00             cmp byte ptr [eax + 0x2d], 0
// 0064a3e6  74ef                 je 0x64a3d7
// 0064a3e8  8b11                 mov edx, dword ptr [ecx]
// 0064a3ea  807a2d00             cmp byte ptr [edx + 0x2d], 0
// 0064a3ee  7502                 jne 0x64a3f2
// 0064a3f0  8901                 mov dword ptr [ecx], eax
// 0064a3f2  c3                   ret 
// copied from an identical function in another client (function ?_Dec@const_iterator@?$_Tree@V?$_Tmap_traits@HUValue@@ULess@@V?$allocator@U?$pair@$$CBHUValue@@@std@@@std@@$0A@@std@@@std@@QAEXXZ)

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