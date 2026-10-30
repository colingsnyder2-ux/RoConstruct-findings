// roc 2009-12 006dc170  unit: RBX::Camera  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006dc170
//
// 006dc170  8b8148010000         mov eax, dword ptr [ecx + 0x148]
// 006dc176  c3                   ret 
// library ogre-1.6.4/OgreAlignedAllocator.cpp (function ?getListener@Node@Ogre@@UBEPAVListener@12@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreAlignedAllocator.cpp
