// roc 2012-06 00846280  unit: RBX::Lua::VWaitScriptSlot::?$TGenericSlotWrapper  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00846280
//
// 00846280  6a68                 push 0x68
// 00846282  e893be1300           call 0x98211a
// 00846287  83c404               add esp, 4
// 0084628a  85c0                 test eax, eax
// 0084628c  7406                 je 0x846294
// 0084628e  c70000000000         mov dword ptr [eax], 0
// 00846294  8d4804               lea ecx, [eax + 4]
// 00846297  85c9                 test ecx, ecx
// 00846299  7406                 je 0x8462a1
// 0084629b  c70100000000         mov dword ptr [ecx], 0
// 008462a1  8d4808               lea ecx, [eax + 8]
// 008462a4  85c9                 test ecx, ecx
// 008462a6  7406                 je 0x8462ae
// 008462a8  c70100000000         mov dword ptr [ecx], 0
// 008462ae  c6406401             mov byte ptr [eax + 0x64], 1
// 008462b2  c6406500             mov byte ptr [eax + 0x65], 0
// 008462b6  c3                   ret 
// library ogre-1.6.4/OgreCompiler2Pass.cpp (function ?_Buynode@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UTokenState@Compiler2Pass@Ogre@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UTokenState@Compiler2Pass@Ogre@@@std@@@2@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UTokenState@Compiler2Pass@Ogre@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UTokenState@Compiler2Pass@Ogre@@@std@@@2@$0A@@std@@@2@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreCompiler2Pass.cpp
