// roc 2009-12 00528ac0  unit: RBX::Network::VClient::?$EventDesc  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00528ac0
//
// 00528ac0  d98108010000         fld dword ptr [ecx + 0x108]
// 00528ac6  c3                   ret 
// library ogre-1.6.4/OgreLight.cpp (function ?getSpotlightFalloff@Light@Ogre@@QBEMXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreLight.cpp
