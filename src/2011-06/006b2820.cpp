// roc 2011-06 006b2820  unit: RBX::GuiButton  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006b2820
//
// 006b2820  8b442404             mov eax, dword ptr [esp + 4]
// 006b2824  8b4808               mov ecx, dword ptr [eax + 8]
// 006b2827  80797100             cmp byte ptr [ecx + 0x71], 0
// 006b282b  750e                 jne 0x6b283b
// 006b282d  8d4900               lea ecx, [ecx]
// 006b2830  8bc1                 mov eax, ecx
// 006b2832  8b4808               mov ecx, dword ptr [eax + 8]
// 006b2835  80797100             cmp byte ptr [ecx + 0x71], 0
// 006b2839  74f5                 je 0x6b2830
// 006b283b  c3                   ret 
// copied from an identical function in another client (function ?_Max@?$_Tree@V?$_Tmap_traits@HUValue@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue@@@std@@@3@$0A@@std@@@std@@KAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@HUValue@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue@@@std@@@3@$0A@@std@@@2@PAU342@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#define _SECURE_SCL 0
#include <map>

// pair<const int, Value> sized from isnil offset 0x71 (isnil = 0xd + sizeof(pair)).
struct Value { int words[24]; };
template class std::_Tree<std::_Tmap_traits<int, Value, std::less<int>,
    std::allocator<std::pair<const int, Value> >, false> >;