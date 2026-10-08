// roc 2009-12 00713150  unit: RBX::VHint::?$FactoryProduct  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00713150
//
// 00713150  d9818c010000         fld dword ptr [ecx + 0x18c]
// 00713156  c3                   ret 
// library ogre-1.6.4/OgreParticle.cpp (function ?getIterationInterval@ParticleSystem@Ogre@@QBEMXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreParticle.cpp
