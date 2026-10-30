// roc 2009-12 006aa880  unit: RBX::TextDisplay  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006aa880
//
// 006aa880  8d81c8000000         lea eax, [ecx + 0xc8]
// 006aa886  c3                   ret 
// library ogre-1.6.4/OgreLight.cpp (function ?getPosition@Light@Ogre@@QBEABVVector3@2@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreLight.cpp
