// roc 2009-06 005da150  unit: RBX::ContentProvider::HashApprovalDictionary::VValue::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005da150
//
// 005da150  6a40                 push 0x40
// 005da152  e8e1e81300           call 0x718a38
// 005da157  83c404               add esp, 4
// 005da15a  85c0                 test eax, eax
// 005da15c  7402                 je 0x5da160
// 005da15e  8900                 mov dword ptr [eax], eax
// 005da160  8d4804               lea ecx, [eax + 4]
// 005da163  85c9                 test ecx, ecx
// 005da165  7402                 je 0x5da169
// 005da167  8901                 mov dword ptr [ecx], eax
// 005da169  c3                   ret 
// library ogre-1.7.0/OgreScriptTranslator.cpp (function ?_Buynode@?$list@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@std@@IAEPAU_Node@?$_List_nod@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@2@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreScriptTranslator.cpp
