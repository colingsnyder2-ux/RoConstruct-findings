// roc 2009-12 00577280  unit: RBX::ViewRbxGfx  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00577280
//
// 00577280  8d8194000000         lea eax, [ecx + 0x94]
// 00577286  c3                   ret 
// library ogre-1.6.4/OgreNode.cpp (function ?getScale@Node@Ogre@@UBEABVVector3@2@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreNode.cpp
