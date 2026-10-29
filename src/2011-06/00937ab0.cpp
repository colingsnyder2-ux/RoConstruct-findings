// roc 2011-06 00937ab0  unit: Ogre::VertexStreamer  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00937ab0
//
// 00937ab0  8b01                 mov eax, dword ptr [ecx]
// 00937ab2  80786900             cmp byte ptr [eax + 0x69], 0
// 00937ab6  7542                 jne 0x937afa
// 00937ab8  8b5008               mov edx, dword ptr [eax + 8]
// 00937abb  807a6900             cmp byte ptr [edx + 0x69], 0
// 00937abf  751c                 jne 0x937add
// 00937ac1  8b02                 mov eax, dword ptr [edx]
// 00937ac3  80786900             cmp byte ptr [eax + 0x69], 0
// 00937ac7  7511                 jne 0x937ada
// 00937ac9  8da42400000000       lea esp, [esp]
// 00937ad0  8bd0                 mov edx, eax
// 00937ad2  8b02                 mov eax, dword ptr [edx]
// 00937ad4  80786900             cmp byte ptr [eax + 0x69], 0
// 00937ad8  74f6                 je 0x937ad0
// 00937ada  8911                 mov dword ptr [ecx], edx
// 00937adc  c3                   ret 
// 00937add  8b4004               mov eax, dword ptr [eax + 4]
// 00937ae0  80786900             cmp byte ptr [eax + 0x69], 0
// 00937ae4  7512                 jne 0x937af8
// 00937ae6  8b11                 mov edx, dword ptr [ecx]
// 00937ae8  3b5008               cmp edx, dword ptr [eax + 8]
// 00937aeb  750b                 jne 0x937af8
// 00937aed  8901                 mov dword ptr [ecx], eax
// 00937aef  8b4004               mov eax, dword ptr [eax + 4]
// 00937af2  80786900             cmp byte ptr [eax + 0x69], 0
// 00937af6  74ee                 je 0x937ae6
// 00937af8  8901                 mov dword ptr [ecx], eax
// 00937afa  c3                   ret 
// copied from an identical function in another client (function ?_Inc@const_iterator@?$_Tree@V?$_Tmap_traits@HUValue16@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue16@@@std@@@3@$0A@@std@@@std@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#define _SECURE_SCL 0
#include <map>

// value_type is 0x14 bytes: node color at +0x20, isnil at +0x21, max_size 0xcccccccc.
struct Value16 { int words[22]; };
template class std::_Tree<std::_Tmap_traits<int, Value16, std::less<int>,
    std::allocator<std::pair<const int, Value16> >, false> >;