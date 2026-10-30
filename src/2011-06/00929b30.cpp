// roc 2011-06 00929b30  unit: Ogre::UFileInfo::V?$vector::?$SharedPtr  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00929b30
//
// 00929b30  8b01                 mov eax, dword ptr [ecx]
// 00929b32  80783900             cmp byte ptr [eax + 0x39], 0
// 00929b36  7542                 jne 0x929b7a
// 00929b38  8b5008               mov edx, dword ptr [eax + 8]
// 00929b3b  807a3900             cmp byte ptr [edx + 0x39], 0
// 00929b3f  751c                 jne 0x929b5d
// 00929b41  8b02                 mov eax, dword ptr [edx]
// 00929b43  80783900             cmp byte ptr [eax + 0x39], 0
// 00929b47  7511                 jne 0x929b5a
// 00929b49  8da42400000000       lea esp, [esp]
// 00929b50  8bd0                 mov edx, eax
// 00929b52  8b02                 mov eax, dword ptr [edx]
// 00929b54  80783900             cmp byte ptr [eax + 0x39], 0
// 00929b58  74f6                 je 0x929b50
// 00929b5a  8911                 mov dword ptr [ecx], edx
// 00929b5c  c3                   ret 
// 00929b5d  8b4004               mov eax, dword ptr [eax + 4]
// 00929b60  80783900             cmp byte ptr [eax + 0x39], 0
// 00929b64  7512                 jne 0x929b78
// 00929b66  8b11                 mov edx, dword ptr [ecx]
// 00929b68  3b5008               cmp edx, dword ptr [eax + 8]
// 00929b6b  750b                 jne 0x929b78
// 00929b6d  8901                 mov dword ptr [ecx], eax
// 00929b6f  8b4004               mov eax, dword ptr [eax + 4]
// 00929b72  80783900             cmp byte ptr [eax + 0x39], 0
// 00929b76  74ee                 je 0x929b66
// 00929b78  8901                 mov dword ptr [ecx], eax
// 00929b7a  c3                   ret 
// copied from an identical function in another client (function ?_Inc@const_iterator@?$_Tree@V?$_Tmap_traits@HUValue@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue@@@std@@@3@$0A@@std@@@std@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /D_SECURE_SCL=0
#include <map>

struct Value { int data[10]; };

template class std::_Tree<std::_Tmap_traits<int, Value, std::less<int>, std::allocator<std::pair<const int, Value> >, false> >;