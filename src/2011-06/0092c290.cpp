// roc 2011-06 0092c290  unit: Ogre::GfxClustererPart  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0092c290
//
// 0092c290  8b01                 mov eax, dword ptr [ecx]
// 0092c292  80784500             cmp byte ptr [eax + 0x45], 0
// 0092c296  7542                 jne 0x92c2da
// 0092c298  8b5008               mov edx, dword ptr [eax + 8]
// 0092c29b  807a4500             cmp byte ptr [edx + 0x45], 0
// 0092c29f  751c                 jne 0x92c2bd
// 0092c2a1  8b02                 mov eax, dword ptr [edx]
// 0092c2a3  80784500             cmp byte ptr [eax + 0x45], 0
// 0092c2a7  7511                 jne 0x92c2ba
// 0092c2a9  8da42400000000       lea esp, [esp]
// 0092c2b0  8bd0                 mov edx, eax
// 0092c2b2  8b02                 mov eax, dword ptr [edx]
// 0092c2b4  80784500             cmp byte ptr [eax + 0x45], 0
// 0092c2b8  74f6                 je 0x92c2b0
// 0092c2ba  8911                 mov dword ptr [ecx], edx
// 0092c2bc  c3                   ret 
// 0092c2bd  8b4004               mov eax, dword ptr [eax + 4]
// 0092c2c0  80784500             cmp byte ptr [eax + 0x45], 0
// 0092c2c4  7512                 jne 0x92c2d8
// 0092c2c6  8b11                 mov edx, dword ptr [ecx]
// 0092c2c8  3b5008               cmp edx, dword ptr [eax + 8]
// 0092c2cb  750b                 jne 0x92c2d8
// 0092c2cd  8901                 mov dword ptr [ecx], eax
// 0092c2cf  8b4004               mov eax, dword ptr [eax + 4]
// 0092c2d2  80784500             cmp byte ptr [eax + 0x45], 0
// 0092c2d6  74ee                 je 0x92c2c6
// 0092c2d8  8901                 mov dword ptr [ecx], eax
// 0092c2da  c3                   ret 
// copied from an identical function in another client (function ?_Inc@const_iterator@?$_Tree@V?$_Tmap_traits@HUValue16@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue16@@@std@@@3@$0A@@std@@@std@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#define _SECURE_SCL 0
#include <map>

// value_type is 0x14 bytes: node color at +0x20, isnil at +0x21, max_size 0xcccccccc.
struct Value16 { int words[13]; };
template class std::_Tree<std::_Tmap_traits<int, Value16, std::less<int>,
    std::allocator<std::pair<const int, Value16> >, false> >;