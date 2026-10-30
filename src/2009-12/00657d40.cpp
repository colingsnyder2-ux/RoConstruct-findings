// roc 2009-12 00657d40  unit: RBX::BasicPartInstance  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00657d40
//
// 00657d40  8a81d9010000         mov al, byte ptr [ecx + 0x1d9]
// 00657d46  c3                   ret 
// library ogre-1.7.0/OgreTagPoint.cpp (function ?getInheritParentEntityScale@TagPoint@Ogre@@QBE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreTagPoint.cpp
