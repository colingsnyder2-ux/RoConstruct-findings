// roc 2008-06 0055d1f0  unit: RBX::MD5HasherImpl  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0055d1f0
//
// 0055d1f0  6a40                 push 0x40
// 0055d1f2  e829371400           call 0x6a0920
// 0055d1f7  83c404               add esp, 4
// 0055d1fa  85c0                 test eax, eax
// 0055d1fc  7402                 je 0x55d200
// 0055d1fe  8900                 mov dword ptr [eax], eax
// 0055d200  8d4804               lea ecx, [eax + 4]
// 0055d203  85c9                 test ecx, ecx
// 0055d205  7402                 je 0x55d209
// 0055d207  8901                 mov dword ptr [ecx], eax
// 0055d209  c3                   ret 
// library ogre-1.7.0/OgreScriptTranslator.cpp (function ?_Buynode@?$list@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@std@@IAEPAU_Node@?$_List_nod@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@2@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreScriptTranslator.cpp
