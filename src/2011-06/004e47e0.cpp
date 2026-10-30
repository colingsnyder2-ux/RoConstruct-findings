// roc 2011-06 004e47e0  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004e47e0
//
// 004e47e0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004e47e4  56                   push esi
// 004e47e5  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004e47e9  3bce                 cmp ecx, esi
// 004e47eb  7456                 je 0x4e4843
// 004e47ed  8b542410             mov edx, dword ptr [esp + 0x10]
// 004e47f1  ff02                 inc dword ptr [edx]
// 004e47f3  80793100             cmp byte ptr [ecx + 0x31], 0
// 004e47f7  7546                 jne 0x4e483f
// 004e47f9  8b4108               mov eax, dword ptr [ecx + 8]
// 004e47fc  80783100             cmp byte ptr [eax + 0x31], 0
// 004e4800  751a                 jne 0x4e481c
// 004e4802  8bc8                 mov ecx, eax
// 004e4804  8b01                 mov eax, dword ptr [ecx]
// 004e4806  80783100             cmp byte ptr [eax + 0x31], 0
// 004e480a  752f                 jne 0x4e483b
// 004e480c  8d642400             lea esp, [esp]
// 004e4810  8bc8                 mov ecx, eax
// 004e4812  8b01                 mov eax, dword ptr [ecx]
// 004e4814  80783100             cmp byte ptr [eax + 0x31], 0
// 004e4818  74f6                 je 0x4e4810
// 004e481a  eb1f                 jmp 0x4e483b
// 004e481c  8b4104               mov eax, dword ptr [ecx + 4]
// 004e481f  80783100             cmp byte ptr [eax + 0x31], 0
// 004e4823  7514                 jne 0x4e4839
// 004e4825  3b4808               cmp ecx, dword ptr [eax + 8]
// 004e4828  750f                 jne 0x4e4839
// 004e482a  8bc8                 mov ecx, eax
// 004e482c  894c2408             mov dword ptr [esp + 8], ecx
// 004e4830  8b4004               mov eax, dword ptr [eax + 4]
// 004e4833  80783100             cmp byte ptr [eax + 0x31], 0
// 004e4837  74ec                 je 0x4e4825
// 004e4839  8bc8                 mov ecx, eax
// 004e483b  894c2408             mov dword ptr [esp + 8], ecx
// 004e483f  3bce                 cmp ecx, esi
// 004e4841  75ae                 jne 0x4e47f1
// 004e4843  5e                   pop esi
// 004e4844  c3                   ret 
// copied from an identical function in another client (function ??$_Distance2@Viterator@?$_Tree@V?$_Tmap_traits@HUValue@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue@@@std@@@3@$0A@@std@@@std@@I@std@@YAXViterator@?$_Tree@V?$_Tmap_traits@HUValue@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue@@@std@@@3@$0A@@std@@@0@0AAIUbidirectional_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#define _SECURE_SCL 0
#include <map>

// pair<const int, Value> sized from isnil offset 0x31 (isnil = 0xd + sizeof(pair)).
struct Value { int words[8]; };
template class std::_Tree<std::_Tmap_traits<int, Value, std::less<int>,
    std::allocator<std::pair<const int, Value> >, false> >;