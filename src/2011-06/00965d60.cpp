// roc 2011-06 00965d60  unit: Ogre::RbxCluster::RbxPartBinding  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00965d60
//
// 00965d60  8b442404             mov eax, dword ptr [esp + 4]
// 00965d64  8b08                 mov ecx, dword ptr [eax]
// 00965d66  80795d00             cmp byte ptr [ecx + 0x5d], 0
// 00965d6a  750e                 jne 0x965d7a
// 00965d6c  8d642400             lea esp, [esp]
// 00965d70  8bc1                 mov eax, ecx
// 00965d72  8b08                 mov ecx, dword ptr [eax]
// 00965d74  80795d00             cmp byte ptr [ecx + 0x5d], 0
// 00965d78  74f6                 je 0x965d70
// 00965d7a  c3                   ret 
// copied from an identical function in another client (function ?_Min@?$_Tree@V?$_Tmap_traits@HUValue16@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue16@@@std@@@3@$0A@@std@@@std@@KAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@HUValue16@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue16@@@std@@@3@$0A@@std@@@2@PAU342@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#define _SECURE_SCL 0
#include <map>

// value_type is 0x14 bytes: node color at +0x20, isnil at +0x21, max_size 0xcccccccc.
struct Value16 { int words[19]; };
template class std::_Tree<std::_Tmap_traits<int, Value16, std::less<int>,
    std::allocator<std::pair<const int, Value16> >, false> >;