// roc 2012-06 0069a980  unit: RBX::VTeam::?$FactoryProduct  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0069a980
//
// 0069a980  8a442404             mov al, byte ptr [esp + 4]
// 0069a984  88814c010000         mov byte ptr [ecx + 0x14c], al
// 0069a98a  c20400               ret 4
// library ogre-1.6.4/OgreParticleEmitter.cpp (function ?setEmitted@ParticleEmitter@Ogre@@UAEX_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreParticleEmitter.cpp
