// roc 2008-06 00496ed0  unit: RBX::Network::Players  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00496ed0
//
// 00496ed0  6a50                 push 0x50
// 00496ed2  e8499a2000           call 0x6a0920
// 00496ed7  83c404               add esp, 4
// 00496eda  85c0                 test eax, eax
// 00496edc  7402                 je 0x496ee0
// 00496ede  8900                 mov dword ptr [eax], eax
// 00496ee0  8d4804               lea ecx, [eax + 4]
// 00496ee3  85c9                 test ecx, ecx
// 00496ee5  7402                 je 0x496ee9
// 00496ee7  8901                 mov dword ptr [ecx], eax
// 00496ee9  c3                   ret 
// library ogre-1.6.4/OgreResourceGroupManager.cpp (function ?_Buynode@?$list@UResourceDeclaration@ResourceGroupManager@Ogre@@V?$allocator@UResourceDeclaration@ResourceGroupManager@Ogre@@@std@@@std@@IAEPAU_Node@?$_List_nod@UResourceDeclaration@ResourceGroupManager@Ogre@@V?$allocator@UResourceDeclaration@ResourceGroupManager@Ogre@@@std@@@2@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreResourceGroupManager.cpp
