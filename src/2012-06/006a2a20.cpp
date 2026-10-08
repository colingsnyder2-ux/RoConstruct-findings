// roc 2012-06 006a2a20  unit: std::D::DU?$char_traits::?$basic_istringstream  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006a2a20
//
// 006a2a20  8b442404             mov eax, dword ptr [esp + 4]
// 006a2a24  8b08                 mov ecx, dword ptr [eax]
// 006a2a26  80796500             cmp byte ptr [ecx + 0x65], 0
// 006a2a2a  750e                 jne 0x6a2a3a
// 006a2a2c  8d642400             lea esp, [esp]
// 006a2a30  8bc1                 mov eax, ecx
// 006a2a32  8b08                 mov ecx, dword ptr [eax]
// 006a2a34  80796500             cmp byte ptr [ecx + 0x65], 0
// 006a2a38  74f6                 je 0x6a2a30
// 006a2a3a  c3                   ret 
// library ogre-1.6.4/OgreCompiler2Pass.cpp (function ?_Min@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UTokenState@Compiler2Pass@Ogre@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UTokenState@Compiler2Pass@Ogre@@@std@@@2@$0A@@std@@@std@@KAPAU_Node@?$_Tree_nod@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UTokenState@Compiler2Pass@Ogre@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UTokenState@Compiler2Pass@Ogre@@@std@@@2@$0A@@std@@@2@PAU342@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreCompiler2Pass.cpp
