// roc 2011-06 004519f0  unit: RBX::VGuiMain::?$FactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004519f0
//
// 004519f0  8b01                 mov eax, dword ptr [ecx]
// 004519f2  80781500             cmp byte ptr [eax + 0x15], 0
// 004519f6  7406                 je 0x4519fe
// 004519f8  8b4008               mov eax, dword ptr [eax + 8]
// 004519fb  8901                 mov dword ptr [ecx], eax
// 004519fd  c3                   ret 
// 004519fe  8b10                 mov edx, dword ptr [eax]
// 00451a00  807a1500             cmp byte ptr [edx + 0x15], 0
// 00451a04  7518                 jne 0x451a1e
// 00451a06  8b4208               mov eax, dword ptr [edx + 8]
// 00451a09  80781500             cmp byte ptr [eax + 0x15], 0
// 00451a0d  750c                 jne 0x451a1b
// 00451a0f  90                   nop 
// 00451a10  8bd0                 mov edx, eax
// 00451a12  8b4208               mov eax, dword ptr [edx + 8]
// 00451a15  80781500             cmp byte ptr [eax + 0x15], 0
// 00451a19  74f5                 je 0x451a10
// 00451a1b  8911                 mov dword ptr [ecx], edx
// 00451a1d  c3                   ret 
// 00451a1e  8b4004               mov eax, dword ptr [eax + 4]
// 00451a21  80781500             cmp byte ptr [eax + 0x15], 0
// 00451a25  7511                 jne 0x451a38
// 00451a27  8b11                 mov edx, dword ptr [ecx]
// 00451a29  3b10                 cmp edx, dword ptr [eax]
// 00451a2b  750b                 jne 0x451a38
// 00451a2d  8901                 mov dword ptr [ecx], eax
// 00451a2f  8b4004               mov eax, dword ptr [eax + 4]
// 00451a32  80781500             cmp byte ptr [eax + 0x15], 0
// 00451a36  74ef                 je 0x451a27
// 00451a38  8b11                 mov edx, dword ptr [ecx]
// 00451a3a  807a1500             cmp byte ptr [edx + 0x15], 0
// 00451a3e  7502                 jne 0x451a42
// 00451a40  8901                 mov dword ptr [ecx], eax
// 00451a42  c3                   ret 
// copied from an identical function in another client (function ?_Dec@const_iterator@?$_Tree@V?$_Tmap_traits@HHU?$less@H@std@@V?$allocator@U?$pair@$$CBHH@std@@@2@$0A@@std@@@std@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /D_SECURE_SCL=0
#include <map>

template class std::_Tree<std::_Tmap_traits<int, int, std::less<int>, std::allocator<std::pair<const int, int> >, false> >;