// roc 2011-06 00427df0  unit: CSelectionTreeCtrl  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00427df0
//
// 00427df0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00427df4  56                   push esi
// 00427df5  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00427df9  3bce                 cmp ecx, esi
// 00427dfb  7456                 je 0x427e53
// 00427dfd  8b542410             mov edx, dword ptr [esp + 0x10]
// 00427e01  ff02                 inc dword ptr [edx]
// 00427e03  80791500             cmp byte ptr [ecx + 0x15], 0
// 00427e07  7546                 jne 0x427e4f
// 00427e09  8b4108               mov eax, dword ptr [ecx + 8]
// 00427e0c  80781500             cmp byte ptr [eax + 0x15], 0
// 00427e10  751a                 jne 0x427e2c
// 00427e12  8bc8                 mov ecx, eax
// 00427e14  8b01                 mov eax, dword ptr [ecx]
// 00427e16  80781500             cmp byte ptr [eax + 0x15], 0
// 00427e1a  752f                 jne 0x427e4b
// 00427e1c  8d642400             lea esp, [esp]
// 00427e20  8bc8                 mov ecx, eax
// 00427e22  8b01                 mov eax, dword ptr [ecx]
// 00427e24  80781500             cmp byte ptr [eax + 0x15], 0
// 00427e28  74f6                 je 0x427e20
// 00427e2a  eb1f                 jmp 0x427e4b
// 00427e2c  8b4104               mov eax, dword ptr [ecx + 4]
// 00427e2f  80781500             cmp byte ptr [eax + 0x15], 0
// 00427e33  7514                 jne 0x427e49
// 00427e35  3b4808               cmp ecx, dword ptr [eax + 8]
// 00427e38  750f                 jne 0x427e49
// 00427e3a  8bc8                 mov ecx, eax
// 00427e3c  894c2408             mov dword ptr [esp + 8], ecx
// 00427e40  8b4004               mov eax, dword ptr [eax + 4]
// 00427e43  80781500             cmp byte ptr [eax + 0x15], 0
// 00427e47  74ec                 je 0x427e35
// 00427e49  8bc8                 mov ecx, eax
// 00427e4b  894c2408             mov dword ptr [esp + 8], ecx
// 00427e4f  3bce                 cmp ecx, esi
// 00427e51  75ae                 jne 0x427e01
// 00427e53  5e                   pop esi
// 00427e54  c3                   ret 
// copied from an identical function in another client (function ??$_Distance2@Viterator@?$_Tree@V?$_Tmap_traits@HHU?$less@H@std@@V?$allocator@U?$pair@$$CBHH@std@@@2@$0A@@std@@@std@@I@std@@YAXViterator@?$_Tree@V?$_Tmap_traits@HHU?$less@H@std@@V?$allocator@U?$pair@$$CBHH@std@@@2@$0A@@std@@@0@0AAIUbidirectional_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /D_SECURE_SCL=0
#include <map>

template class std::_Tree<std::_Tmap_traits<int, int, std::less<int>, std::allocator<std::pair<const int, int> >, false> >;