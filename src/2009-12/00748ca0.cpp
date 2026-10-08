// roc 2009-12 00748ca0  unit: RBX::Handles  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00748ca0
//
// 00748ca0  8a81b0000000         mov al, byte ptr [ecx + 0xb0]
// 00748ca6  c3                   ret 
// library ogre-1.6.4/OgrePass.cpp (function ?getLightingEnabled@Pass@Ogre@@QBE_NXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgrePass.cpp
