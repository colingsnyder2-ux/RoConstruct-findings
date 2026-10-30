// roc 2011-06 00965d80  unit: Ogre::RbxCluster::RbxPartBinding  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00965d80
//
// 00965d80  8b442404             mov eax, dword ptr [esp + 4]
// 00965d84  8b4808               mov ecx, dword ptr [eax + 8]
// 00965d87  80795d00             cmp byte ptr [ecx + 0x5d], 0
// 00965d8b  750e                 jne 0x965d9b
// 00965d8d  8d4900               lea ecx, [ecx]
// 00965d90  8bc1                 mov eax, ecx
// 00965d92  8b4808               mov ecx, dword ptr [eax + 8]
// 00965d95  80795d00             cmp byte ptr [ecx + 0x5d], 0
// 00965d99  74f5                 je 0x965d90
// 00965d9b  c3                   ret 
// copied from an identical function in another client (function ?_Max@?$_Tree@V?$_Tmap_traits@HUValue16@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue16@@@std@@@3@$0A@@std@@@std@@KAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@HUValue16@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue16@@@std@@@3@$0A@@std@@@2@PAU342@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#define _SECURE_SCL 0
#include <map>

// value_type is 0x14 bytes: node color at +0x20, isnil at +0x21, max_size 0xcccccccc.
struct Value16 { int words[19]; };
template class std::_Tree<std::_Tmap_traits<int, Value16, std::less<int>,
    std::allocator<std::pair<const int, Value16> >, false> >;