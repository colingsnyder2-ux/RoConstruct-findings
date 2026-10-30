// roc 2009-12 006b39e0  unit: RBX::DropperTool  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006b39e0
//
// 006b39e0  d981c0000000         fld dword ptr [ecx + 0xc0]
// 006b39e6  c3                   ret 
// library ogre-1.6.4/OgreParticleEmitter.cpp (function ?getParticleVelocity@ParticleEmitter@Ogre@@UBEMXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreParticleEmitter.cpp
