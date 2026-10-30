// roc 2009-12 0063d280  unit: RBX::Team  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0063d280
//
// 0063d280  8b8194000000         mov eax, dword ptr [ecx + 0x94]
// 0063d286  c3                   ret 
// library ogre-1.6.4/OgreAlignedAllocator.cpp (function ?getStateCount@Resource@Ogre@@UBEIXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreAlignedAllocator.cpp
