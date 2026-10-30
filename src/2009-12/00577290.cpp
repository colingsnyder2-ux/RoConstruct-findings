// roc 2009-12 00577290  unit: RBX::ViewRbxGfx  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00577290
//
// 00577290  8d81ac000000         lea eax, [ecx + 0xac]
// 00577296  c3                   ret 
// library ogre-1.6.4/OgreAlignedAllocator.cpp (function ?_getLightList@MovableObject@Ogre@@UAEPAV?$vector@PAVLight@Ogre@@V?$allocator@PAVLight@Ogre@@@std@@@std@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreAlignedAllocator.cpp
