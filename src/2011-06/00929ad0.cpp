// roc 2011-06 00929ad0  unit: Ogre::UFileInfo::V?$vector::?$SharedPtr  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00929ad0
//
// 00929ad0  8b01                 mov eax, dword ptr [ecx]
// 00929ad2  80783900             cmp byte ptr [eax + 0x39], 0
// 00929ad6  7406                 je 0x929ade
// 00929ad8  8b4008               mov eax, dword ptr [eax + 8]
// 00929adb  8901                 mov dword ptr [ecx], eax
// 00929add  c3                   ret 
// 00929ade  8b10                 mov edx, dword ptr [eax]
// 00929ae0  807a3900             cmp byte ptr [edx + 0x39], 0
// 00929ae4  7518                 jne 0x929afe
// 00929ae6  8b4208               mov eax, dword ptr [edx + 8]
// 00929ae9  80783900             cmp byte ptr [eax + 0x39], 0
// 00929aed  750c                 jne 0x929afb
// 00929aef  90                   nop 
// 00929af0  8bd0                 mov edx, eax
// 00929af2  8b4208               mov eax, dword ptr [edx + 8]
// 00929af5  80783900             cmp byte ptr [eax + 0x39], 0
// 00929af9  74f5                 je 0x929af0
// 00929afb  8911                 mov dword ptr [ecx], edx
// 00929afd  c3                   ret 
// 00929afe  8b4004               mov eax, dword ptr [eax + 4]
// 00929b01  80783900             cmp byte ptr [eax + 0x39], 0
// 00929b05  7511                 jne 0x929b18
// 00929b07  8b11                 mov edx, dword ptr [ecx]
// 00929b09  3b10                 cmp edx, dword ptr [eax]
// 00929b0b  750b                 jne 0x929b18
// 00929b0d  8901                 mov dword ptr [ecx], eax
// 00929b0f  8b4004               mov eax, dword ptr [eax + 4]
// 00929b12  80783900             cmp byte ptr [eax + 0x39], 0
// 00929b16  74ef                 je 0x929b07
// 00929b18  8b11                 mov edx, dword ptr [ecx]
// 00929b1a  807a3900             cmp byte ptr [edx + 0x39], 0
// 00929b1e  7502                 jne 0x929b22
// 00929b20  8901                 mov dword ptr [ecx], eax
// 00929b22  c3                   ret 
// copied from an identical function in another client (function ?_Dec@const_iterator@?$_Tree@V?$_Tmap_traits@HUValue@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue@@@std@@@3@$0A@@std@@@std@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /D_SECURE_SCL=0
#include <map>

struct Value { int data[10]; };

template class std::_Tree<std::_Tmap_traits<int, Value, std::less<int>, std::allocator<std::pair<const int, Value> >, false> >;