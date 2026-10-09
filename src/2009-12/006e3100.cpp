// roc 2009-12 006e3100  unit: RBX::KernelJoint  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006e3100
//
// 006e3100  8a81d8010000         mov al, byte ptr [ecx + 0x1d8]
// 006e3106  c3                   ret 
// library ogre-1.7.0/OgreTagPoint.cpp (function ?getInheritParentEntityOrientation@TagPoint@Ogre@@QBE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreTagPoint.cpp
