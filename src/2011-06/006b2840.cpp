// roc 2011-06 006b2840  unit: RBX::GuiButton  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006b2840
//
// 006b2840  8b442404             mov eax, dword ptr [esp + 4]
// 006b2844  8b08                 mov ecx, dword ptr [eax]
// 006b2846  80797100             cmp byte ptr [ecx + 0x71], 0
// 006b284a  750e                 jne 0x6b285a
// 006b284c  8d642400             lea esp, [esp]
// 006b2850  8bc1                 mov eax, ecx
// 006b2852  8b08                 mov ecx, dword ptr [eax]
// 006b2854  80797100             cmp byte ptr [ecx + 0x71], 0
// 006b2858  74f6                 je 0x6b2850
// 006b285a  c3                   ret 
// copied from an identical function in another client (function ?_Min@?$_Tree@V?$_Tmap_traits@HUValue@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue@@@std@@@3@$0A@@std@@@std@@KAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@HUValue@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue@@@std@@@3@$0A@@std@@@2@PAU342@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#define _SECURE_SCL 0
#include <map>

// pair<const int, Value> sized from isnil offset 0x71 (isnil = 0xd + sizeof(pair)).
struct Value { int words[24]; };
template class std::_Tree<std::_Tmap_traits<int, Value, std::less<int>,
    std::allocator<std::pair<const int, Value> >, false> >;