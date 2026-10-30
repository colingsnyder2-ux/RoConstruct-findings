// roc 2011-06 00937b30  unit: Ogre::VertexStreamer  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00937b30
//
// 00937b30  8b01                 mov eax, dword ptr [ecx]
// 00937b32  80786900             cmp byte ptr [eax + 0x69], 0
// 00937b36  7406                 je 0x937b3e
// 00937b38  8b4008               mov eax, dword ptr [eax + 8]
// 00937b3b  8901                 mov dword ptr [ecx], eax
// 00937b3d  c3                   ret 
// 00937b3e  8b10                 mov edx, dword ptr [eax]
// 00937b40  807a6900             cmp byte ptr [edx + 0x69], 0
// 00937b44  7518                 jne 0x937b5e
// 00937b46  8b4208               mov eax, dword ptr [edx + 8]
// 00937b49  80786900             cmp byte ptr [eax + 0x69], 0
// 00937b4d  750c                 jne 0x937b5b
// 00937b4f  90                   nop 
// 00937b50  8bd0                 mov edx, eax
// 00937b52  8b4208               mov eax, dword ptr [edx + 8]
// 00937b55  80786900             cmp byte ptr [eax + 0x69], 0
// 00937b59  74f5                 je 0x937b50
// 00937b5b  8911                 mov dword ptr [ecx], edx
// 00937b5d  c3                   ret 
// 00937b5e  8b4004               mov eax, dword ptr [eax + 4]
// 00937b61  80786900             cmp byte ptr [eax + 0x69], 0
// 00937b65  7511                 jne 0x937b78
// 00937b67  8b11                 mov edx, dword ptr [ecx]
// 00937b69  3b10                 cmp edx, dword ptr [eax]
// 00937b6b  750b                 jne 0x937b78
// 00937b6d  8901                 mov dword ptr [ecx], eax
// 00937b6f  8b4004               mov eax, dword ptr [eax + 4]
// 00937b72  80786900             cmp byte ptr [eax + 0x69], 0
// 00937b76  74ef                 je 0x937b67
// 00937b78  8b11                 mov edx, dword ptr [ecx]
// 00937b7a  807a6900             cmp byte ptr [edx + 0x69], 0
// 00937b7e  7502                 jne 0x937b82
// 00937b80  8901                 mov dword ptr [ecx], eax
// 00937b82  c3                   ret 
// copied from an identical function in another client (function ?_Dec@const_iterator@?$_Tree@V?$_Tmap_traits@HUValue16@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue16@@@std@@@3@$0A@@std@@@std@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#define _SECURE_SCL 0
#include <map>

// value_type is 0x14 bytes: node color at +0x20, isnil at +0x21, max_size 0xcccccccc.
struct Value16 { int words[22]; };
template class std::_Tree<std::_Tmap_traits<int, Value16, std::less<int>,
    std::allocator<std::pair<const int, Value16> >, false> >;