// roc 2009-12 007124b0  unit: RBX::Mechanism  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007124b0
//
// 007124b0  8d81a4000000         lea eax, [ecx + 0xa4]
// 007124b6  c3                   ret 
// library ogre-1.6.4/OgreParticleEmitter.cpp (function ?getDirection@ParticleEmitter@Ogre@@UBEABVVector3@2@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreParticleEmitter.cpp
