// roc 2009-12 006b39f0  unit: RBX::DropperTool  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006b39f0
//
// 006b39f0  d981c4000000         fld dword ptr [ecx + 0xc4]
// 006b39f6  c3                   ret 
// library ogre-1.6.4/OgreParticleEmitter.cpp (function ?getMaxParticleVelocity@ParticleEmitter@Ogre@@UBEMXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreParticleEmitter.cpp
