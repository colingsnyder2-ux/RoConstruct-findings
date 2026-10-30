// roc 2011-06 0078a900  unit: RBX::Block  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0078a900
//
// 0078a900  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0078a904  56                   push esi
// 0078a905  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0078a909  3bce                 cmp ecx, esi
// 0078a90b  7456                 je 0x78a963
// 0078a90d  8b542410             mov edx, dword ptr [esp + 0x10]
// 0078a911  ff02                 inc dword ptr [edx]
// 0078a913  80791d00             cmp byte ptr [ecx + 0x1d], 0
// 0078a917  7546                 jne 0x78a95f
// 0078a919  8b4108               mov eax, dword ptr [ecx + 8]
// 0078a91c  80781d00             cmp byte ptr [eax + 0x1d], 0
// 0078a920  751a                 jne 0x78a93c
// 0078a922  8bc8                 mov ecx, eax
// 0078a924  8b01                 mov eax, dword ptr [ecx]
// 0078a926  80781d00             cmp byte ptr [eax + 0x1d], 0
// 0078a92a  752f                 jne 0x78a95b
// 0078a92c  8d642400             lea esp, [esp]
// 0078a930  8bc8                 mov ecx, eax
// 0078a932  8b01                 mov eax, dword ptr [ecx]
// 0078a934  80781d00             cmp byte ptr [eax + 0x1d], 0
// 0078a938  74f6                 je 0x78a930
// 0078a93a  eb1f                 jmp 0x78a95b
// 0078a93c  8b4104               mov eax, dword ptr [ecx + 4]
// 0078a93f  80781d00             cmp byte ptr [eax + 0x1d], 0
// 0078a943  7514                 jne 0x78a959
// 0078a945  3b4808               cmp ecx, dword ptr [eax + 8]
// 0078a948  750f                 jne 0x78a959
// 0078a94a  8bc8                 mov ecx, eax
// 0078a94c  894c2408             mov dword ptr [esp + 8], ecx
// 0078a950  8b4004               mov eax, dword ptr [eax + 4]
// 0078a953  80781d00             cmp byte ptr [eax + 0x1d], 0
// 0078a957  74ec                 je 0x78a945
// 0078a959  8bc8                 mov ecx, eax
// 0078a95b  894c2408             mov dword ptr [esp + 8], ecx
// 0078a95f  3bce                 cmp ecx, esi
// 0078a961  75ae                 jne 0x78a911
// 0078a963  5e                   pop esi
// 0078a964  c3                   ret 
// copied from an identical function in another client (function ??$_Distance2@Viterator@?$_Tree@V?$_Tmap_traits@HUValue@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue@@@std@@@3@$0A@@std@@@std@@I@std@@YAXViterator@?$_Tree@V?$_Tmap_traits@HUValue@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue@@@std@@@3@$0A@@std@@@0@0AAIUbidirectional_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#define _SECURE_SCL 0
#include <map>

// pair<const int, Value> is isnil(0x1d) - 0xd bytes.
struct Value { int words[3]; };
template class std::_Tree<std::_Tmap_traits<int, Value, std::less<int>,
    std::allocator<std::pair<const int, Value> >, false> >;