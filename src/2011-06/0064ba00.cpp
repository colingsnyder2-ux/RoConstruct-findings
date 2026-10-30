// roc 2011-06 0064ba00  unit: RBX::GameBasicSettings  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0064ba00
//
// 0064ba00  8b01                 mov eax, dword ptr [ecx]
// 0064ba02  80782100             cmp byte ptr [eax + 0x21], 0
// 0064ba06  7542                 jne 0x64ba4a
// 0064ba08  8b5008               mov edx, dword ptr [eax + 8]
// 0064ba0b  807a2100             cmp byte ptr [edx + 0x21], 0
// 0064ba0f  751c                 jne 0x64ba2d
// 0064ba11  8b02                 mov eax, dword ptr [edx]
// 0064ba13  80782100             cmp byte ptr [eax + 0x21], 0
// 0064ba17  7511                 jne 0x64ba2a
// 0064ba19  8da42400000000       lea esp, [esp]
// 0064ba20  8bd0                 mov edx, eax
// 0064ba22  8b02                 mov eax, dword ptr [edx]
// 0064ba24  80782100             cmp byte ptr [eax + 0x21], 0
// 0064ba28  74f6                 je 0x64ba20
// 0064ba2a  8911                 mov dword ptr [ecx], edx
// 0064ba2c  c3                   ret 
// 0064ba2d  8b4004               mov eax, dword ptr [eax + 4]
// 0064ba30  80782100             cmp byte ptr [eax + 0x21], 0
// 0064ba34  7512                 jne 0x64ba48
// 0064ba36  8b11                 mov edx, dword ptr [ecx]
// 0064ba38  3b5008               cmp edx, dword ptr [eax + 8]
// 0064ba3b  750b                 jne 0x64ba48
// 0064ba3d  8901                 mov dword ptr [ecx], eax
// 0064ba3f  8b4004               mov eax, dword ptr [eax + 4]
// 0064ba42  80782100             cmp byte ptr [eax + 0x21], 0
// 0064ba46  74ee                 je 0x64ba36
// 0064ba48  8901                 mov dword ptr [ecx], eax
// 0064ba4a  c3                   ret 
// copied from an identical function in another client (function ?_Inc@const_iterator@?$_Tree@V?$_Tmap_traits@HUValue16@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue16@@@std@@@3@$0A@@std@@@std@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#define _SECURE_SCL 0
#include <map>

// value_type is 0x14 bytes: node color at +0x20, isnil at +0x21, max_size 0xcccccccc.
struct Value16 { int words[4]; };
template class std::_Tree<std::_Tmap_traits<int, Value16, std::less<int>,
    std::allocator<std::pair<const int, Value16> >, false> >;