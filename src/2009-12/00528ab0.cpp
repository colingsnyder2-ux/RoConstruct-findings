// roc 2009-12 00528ab0  unit: RBX::Network::VClient::?$EventDesc  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00528ab0
//
// 00528ab0  d98104010000         fld dword ptr [ecx + 0x104]
// 00528ab6  c3                   ret 
// library ogre-1.6.4/OgreParticleEmitter.cpp (function ?getRepeatDelay@ParticleEmitter@Ogre@@UBEMXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreParticleEmitter.cpp
