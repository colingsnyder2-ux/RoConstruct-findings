// roc 2009-12 004359f0  unit: CPropertyGridItemBrickColor  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004359f0
//
// 004359f0  8b810c010000         mov eax, dword ptr [ecx + 0x10c]
// 004359f6  c3                   ret 
// library ogre-1.6.4/OgreOverlayElement.cpp (function ?getParent@OverlayElement@Ogre@@QAEPAVOverlayContainer@2@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreOverlayElement.cpp
