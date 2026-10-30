// roc 2011-06 005bf670  unit: RBX::VRbxRay::?$TypedPropertyDescriptor  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005bf670
//
// 005bf670  8b01                 mov eax, dword ptr [ecx]
// 005bf672  80781500             cmp byte ptr [eax + 0x15], 0
// 005bf676  7542                 jne 0x5bf6ba
// 005bf678  8b5008               mov edx, dword ptr [eax + 8]
// 005bf67b  807a1500             cmp byte ptr [edx + 0x15], 0
// 005bf67f  751c                 jne 0x5bf69d
// 005bf681  8b02                 mov eax, dword ptr [edx]
// 005bf683  80781500             cmp byte ptr [eax + 0x15], 0
// 005bf687  7511                 jne 0x5bf69a
// 005bf689  8da42400000000       lea esp, [esp]
// 005bf690  8bd0                 mov edx, eax
// 005bf692  8b02                 mov eax, dword ptr [edx]
// 005bf694  80781500             cmp byte ptr [eax + 0x15], 0
// 005bf698  74f6                 je 0x5bf690
// 005bf69a  8911                 mov dword ptr [ecx], edx
// 005bf69c  c3                   ret 
// 005bf69d  8b4004               mov eax, dword ptr [eax + 4]
// 005bf6a0  80781500             cmp byte ptr [eax + 0x15], 0
// 005bf6a4  7512                 jne 0x5bf6b8
// 005bf6a6  8b11                 mov edx, dword ptr [ecx]
// 005bf6a8  3b5008               cmp edx, dword ptr [eax + 8]
// 005bf6ab  750b                 jne 0x5bf6b8
// 005bf6ad  8901                 mov dword ptr [ecx], eax
// 005bf6af  8b4004               mov eax, dword ptr [eax + 4]
// 005bf6b2  80781500             cmp byte ptr [eax + 0x15], 0
// 005bf6b6  74ee                 je 0x5bf6a6
// 005bf6b8  8901                 mov dword ptr [ecx], eax
// 005bf6ba  c3                   ret 
// copied from an identical function in another client (function ?_Inc@const_iterator@?$_Tree@V?$_Tmap_traits@HHU?$less@H@std@@V?$allocator@U?$pair@$$CBHH@std@@@2@$0A@@std@@@std@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /D_SECURE_SCL=0
#include <map>

template class std::_Tree<std::_Tmap_traits<int, int, std::less<int>, std::allocator<std::pair<const int, int> >, false> >;