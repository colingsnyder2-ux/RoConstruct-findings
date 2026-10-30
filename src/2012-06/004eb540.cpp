// roc 2012-06 004eb540  unit: Ogre::RbxSubEntity  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004eb540
//
// 004eb540  8b01                 mov eax, dword ptr [ecx]
// 004eb542  8b5010               mov edx, dword ptr [eax + 0x10]
// 004eb545  6a00                 push 0
// 004eb547  ffd2                 call edx
// 004eb549  c3                   ret 
// library ogre-1.6.4/OgreMovableObject.cpp (function ?getLightCapBounds@MovableObject@Ogre@@UBEABVAxisAlignedBox@2@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreMovableObject.cpp
