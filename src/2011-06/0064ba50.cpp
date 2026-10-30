// roc 2011-06 0064ba50  unit: RBX::GameBasicSettings  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0064ba50
//
// 0064ba50  8b01                 mov eax, dword ptr [ecx]
// 0064ba52  80782100             cmp byte ptr [eax + 0x21], 0
// 0064ba56  7406                 je 0x64ba5e
// 0064ba58  8b4008               mov eax, dword ptr [eax + 8]
// 0064ba5b  8901                 mov dword ptr [ecx], eax
// 0064ba5d  c3                   ret 
// 0064ba5e  8b10                 mov edx, dword ptr [eax]
// 0064ba60  807a2100             cmp byte ptr [edx + 0x21], 0
// 0064ba64  7518                 jne 0x64ba7e
// 0064ba66  8b4208               mov eax, dword ptr [edx + 8]
// 0064ba69  80782100             cmp byte ptr [eax + 0x21], 0
// 0064ba6d  750c                 jne 0x64ba7b
// 0064ba6f  90                   nop 
// 0064ba70  8bd0                 mov edx, eax
// 0064ba72  8b4208               mov eax, dword ptr [edx + 8]
// 0064ba75  80782100             cmp byte ptr [eax + 0x21], 0
// 0064ba79  74f5                 je 0x64ba70
// 0064ba7b  8911                 mov dword ptr [ecx], edx
// 0064ba7d  c3                   ret 
// 0064ba7e  8b4004               mov eax, dword ptr [eax + 4]
// 0064ba81  80782100             cmp byte ptr [eax + 0x21], 0
// 0064ba85  7511                 jne 0x64ba98
// 0064ba87  8b11                 mov edx, dword ptr [ecx]
// 0064ba89  3b10                 cmp edx, dword ptr [eax]
// 0064ba8b  750b                 jne 0x64ba98
// 0064ba8d  8901                 mov dword ptr [ecx], eax
// 0064ba8f  8b4004               mov eax, dword ptr [eax + 4]
// 0064ba92  80782100             cmp byte ptr [eax + 0x21], 0
// 0064ba96  74ef                 je 0x64ba87
// 0064ba98  8b11                 mov edx, dword ptr [ecx]
// 0064ba9a  807a2100             cmp byte ptr [edx + 0x21], 0
// 0064ba9e  7502                 jne 0x64baa2
// 0064baa0  8901                 mov dword ptr [ecx], eax
// 0064baa2  c3                   ret 
// copied from an identical function in another client (function ?_Dec@const_iterator@?$_Tree@V?$_Tmap_traits@HUValue16@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue16@@@std@@@3@$0A@@std@@@std@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#define _SECURE_SCL 0
#include <map>

// value_type is 0x14 bytes: node color at +0x20, isnil at +0x21, max_size 0xcccccccc.
struct Value16 { int words[4]; };
template class std::_Tree<std::_Tmap_traits<int, Value16, std::less<int>,
    std::allocator<std::pair<const int, Value16> >, false> >;