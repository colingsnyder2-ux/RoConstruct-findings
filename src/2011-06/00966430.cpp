// roc 2011-06 00966430  unit: Ogre::RbxCluster  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00966430
//
// 00966430  8b01                 mov eax, dword ptr [ecx]
// 00966432  80785d00             cmp byte ptr [eax + 0x5d], 0
// 00966436  7542                 jne 0x96647a
// 00966438  8b5008               mov edx, dword ptr [eax + 8]
// 0096643b  807a5d00             cmp byte ptr [edx + 0x5d], 0
// 0096643f  751c                 jne 0x96645d
// 00966441  8b02                 mov eax, dword ptr [edx]
// 00966443  80785d00             cmp byte ptr [eax + 0x5d], 0
// 00966447  7511                 jne 0x96645a
// 00966449  8da42400000000       lea esp, [esp]
// 00966450  8bd0                 mov edx, eax
// 00966452  8b02                 mov eax, dword ptr [edx]
// 00966454  80785d00             cmp byte ptr [eax + 0x5d], 0
// 00966458  74f6                 je 0x966450
// 0096645a  8911                 mov dword ptr [ecx], edx
// 0096645c  c3                   ret 
// 0096645d  8b4004               mov eax, dword ptr [eax + 4]
// 00966460  80785d00             cmp byte ptr [eax + 0x5d], 0
// 00966464  7512                 jne 0x966478
// 00966466  8b11                 mov edx, dword ptr [ecx]
// 00966468  3b5008               cmp edx, dword ptr [eax + 8]
// 0096646b  750b                 jne 0x966478
// 0096646d  8901                 mov dword ptr [ecx], eax
// 0096646f  8b4004               mov eax, dword ptr [eax + 4]
// 00966472  80785d00             cmp byte ptr [eax + 0x5d], 0
// 00966476  74ee                 je 0x966466
// 00966478  8901                 mov dword ptr [ecx], eax
// 0096647a  c3                   ret 
// copied from an identical function in another client (function ?_Inc@const_iterator@?$_Tree@V?$_Tmap_traits@HUValue16@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue16@@@std@@@3@$0A@@std@@@std@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#define _SECURE_SCL 0
#include <map>

// value_type is 0x14 bytes: node color at +0x20, isnil at +0x21, max_size 0xcccccccc.
struct Value16 { int words[19]; };
template class std::_Tree<std::_Tmap_traits<int, Value16, std::less<int>,
    std::allocator<std::pair<const int, Value16> >, false> >;