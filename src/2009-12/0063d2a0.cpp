// roc 2009-12 0063d2a0  unit: RBX::Team  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0063d2a0
//
// 0063d2a0  8a819c000000         mov al, byte ptr [ecx + 0x9c]
// 0063d2a6  c3                   ret 
// library ogre-1.6.4/OgrePass.cpp (function ?getColourWriteEnabled@Pass@Ogre@@QBE_NXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgrePass.cpp
