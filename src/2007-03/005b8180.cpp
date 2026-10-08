// roc 2007-03 005b8180  unit: seg_005b0000  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005b8180
//
// 005b8180  6a18                 push 0x18
// 005b8182  e8815f0600           call 0x61e108
// 005b8187  83c404               add esp, 4
// 005b818a  85c0                 test eax, eax
// 005b818c  7406                 je 0x5b8194
// 005b818e  c70000000000         mov dword ptr [eax], 0
// 005b8194  8d4804               lea ecx, [eax + 4]
// 005b8197  85c9                 test ecx, ecx
// 005b8199  7406                 je 0x5b81a1
// 005b819b  c70100000000         mov dword ptr [ecx], 0
// 005b81a1  8d4808               lea ecx, [eax + 8]
// 005b81a4  85c9                 test ecx, ecx
// 005b81a6  7406                 je 0x5b81ae
// 005b81a8  c70100000000         mov dword ptr [ecx], 0
// 005b81ae  c6401401             mov byte ptr [eax + 0x14], 1
// 005b81b2  c6401500             mov byte ptr [eax + 0x15], 0
// 005b81b6  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?_Buynode@?$_Tree@V?$_Tmap_traits@PBVName@RBX@@PBVICreator@2@U?$less@PBVName@RBX@@@std@@V?$allocator@U?$pair@QBVName@RBX@@PBVICreator@2@@std@@@5@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@PBVName@RBX@@PBVICreator@2@U?$less@PBVName@RBX@@@std@@V?$allocator@U?$pair@QBVName@RBX@@PBVICreator@2@@std@@@5@$0A@@std@@@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
