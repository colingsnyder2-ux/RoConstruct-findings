// roc 2009-12 005c8ff0  unit: RBX::WedgeBuilder  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005c8ff0
//
// 005c8ff0  8d81a0000000         lea eax, [ecx + 0xa0]
// 005c8ff6  c3                   ret 
// library ogre-1.6.4/OgreOverlayElement.cpp (function ?getCaption@OverlayElement@Ogre@@UBEABVUTFString@2@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreOverlayElement.cpp
