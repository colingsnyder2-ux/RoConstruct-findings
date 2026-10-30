// roc 2011-06 009665e0  unit: Ogre::RbxCluster::RbxPartBinding  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 009665e0
//
// 009665e0  6a60                 push 0x60
// 009665e2  e8773aeaff           call 0x80a05e
// 009665e7  83c404               add esp, 4
// 009665ea  85c0                 test eax, eax
// 009665ec  7406                 je 0x9665f4
// 009665ee  c70000000000         mov dword ptr [eax], 0
// 009665f4  8d4804               lea ecx, [eax + 4]
// 009665f7  85c9                 test ecx, ecx
// 009665f9  7406                 je 0x966601
// 009665fb  c70100000000         mov dword ptr [ecx], 0
// 00966601  8d4808               lea ecx, [eax + 8]
// 00966604  85c9                 test ecx, ecx
// 00966606  7406                 je 0x96660e
// 00966608  c70100000000         mov dword ptr [ecx], 0
// 0096660e  c6405c01             mov byte ptr [eax + 0x5c], 1
// 00966612  c6405d00             mov byte ptr [eax + 0x5d], 0
// 00966616  c3                   ret 
// copied from an identical function in another client (function ?_Buynode@?$_Tree@V?$_Tmap_traits@HUValue16@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue16@@@std@@@3@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@HUValue16@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue16@@@std@@@3@$0A@@std@@@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#define _SECURE_SCL 0
#include <map>

// value_type is 0x14 bytes: node color at +0x20, isnil at +0x21, max_size 0xcccccccc.
struct Value16 { int words[19]; };
template class std::_Tree<std::_Tmap_traits<int, Value16, std::less<int>,
    std::allocator<std::pair<const int, Value16> >, false> >;