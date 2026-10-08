// roc 2009-12 00757750  unit: RBX::VFrame::?$FactoryProduct  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00757750
//
// 00757750  8a8100010000         mov al, byte ptr [ecx + 0x100]
// 00757756  c3                   ret 
// library ogre-1.6.4/OgreAlignedAllocator.cpp (function ?isSkeletalAnimationIncluded@GpuProgram@Ogre@@UBE_NXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreAlignedAllocator.cpp
