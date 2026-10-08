// roc 2012-06 006a2a00  unit: std::D::DU?$char_traits::?$basic_istringstream  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006a2a00
//
// 006a2a00  8b442404             mov eax, dword ptr [esp + 4]
// 006a2a04  8b4808               mov ecx, dword ptr [eax + 8]
// 006a2a07  80796500             cmp byte ptr [ecx + 0x65], 0
// 006a2a0b  750e                 jne 0x6a2a1b
// 006a2a0d  8d4900               lea ecx, [ecx]
// 006a2a10  8bc1                 mov eax, ecx
// 006a2a12  8b4808               mov ecx, dword ptr [eax + 8]
// 006a2a15  80796500             cmp byte ptr [ecx + 0x65], 0
// 006a2a19  74f5                 je 0x6a2a10
// 006a2a1b  c3                   ret 
// library ogre-1.6.4/OgreCompiler2Pass.cpp (function ?_Max@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UTokenState@Compiler2Pass@Ogre@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UTokenState@Compiler2Pass@Ogre@@@std@@@2@$0A@@std@@@std@@KAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UTokenState@Compiler2Pass@Ogre@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UTokenState@Compiler2Pass@Ogre@@@std@@@2@$0A@@std@@@2@PAU342@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreCompiler2Pass.cpp
