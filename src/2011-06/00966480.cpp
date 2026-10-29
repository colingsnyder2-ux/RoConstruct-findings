// roc 2011-06 00966480  unit: Ogre::RbxCluster  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00966480
//
// 00966480  8b01                 mov eax, dword ptr [ecx]
// 00966482  80785d00             cmp byte ptr [eax + 0x5d], 0
// 00966486  7406                 je 0x96648e
// 00966488  8b4008               mov eax, dword ptr [eax + 8]
// 0096648b  8901                 mov dword ptr [ecx], eax
// 0096648d  c3                   ret 
// 0096648e  8b10                 mov edx, dword ptr [eax]
// 00966490  807a5d00             cmp byte ptr [edx + 0x5d], 0
// 00966494  7518                 jne 0x9664ae
// 00966496  8b4208               mov eax, dword ptr [edx + 8]
// 00966499  80785d00             cmp byte ptr [eax + 0x5d], 0
// 0096649d  750c                 jne 0x9664ab
// 0096649f  90                   nop 
// 009664a0  8bd0                 mov edx, eax
// 009664a2  8b4208               mov eax, dword ptr [edx + 8]
// 009664a5  80785d00             cmp byte ptr [eax + 0x5d], 0
// 009664a9  74f5                 je 0x9664a0
// 009664ab  8911                 mov dword ptr [ecx], edx
// 009664ad  c3                   ret 
// 009664ae  8b4004               mov eax, dword ptr [eax + 4]
// 009664b1  80785d00             cmp byte ptr [eax + 0x5d], 0
// 009664b5  7511                 jne 0x9664c8
// 009664b7  8b11                 mov edx, dword ptr [ecx]
// 009664b9  3b10                 cmp edx, dword ptr [eax]
// 009664bb  750b                 jne 0x9664c8
// 009664bd  8901                 mov dword ptr [ecx], eax
// 009664bf  8b4004               mov eax, dword ptr [eax + 4]
// 009664c2  80785d00             cmp byte ptr [eax + 0x5d], 0
// 009664c6  74ef                 je 0x9664b7
// 009664c8  8b11                 mov edx, dword ptr [ecx]
// 009664ca  807a5d00             cmp byte ptr [edx + 0x5d], 0
// 009664ce  7502                 jne 0x9664d2
// 009664d0  8901                 mov dword ptr [ecx], eax
// 009664d2  c3                   ret 
// copied from an identical function in another client (function ?_Dec@const_iterator@?$_Tree@V?$_Tmap_traits@HUValue16@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue16@@@std@@@3@$0A@@std@@@std@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#define _SECURE_SCL 0
#include <map>

// value_type is 0x14 bytes: node color at +0x20, isnil at +0x21, max_size 0xcccccccc.
struct Value16 { int words[19]; };
template class std::_Tree<std::_Tmap_traits<int, Value16, std::less<int>,
    std::allocator<std::pair<const int, Value16> >, false> >;