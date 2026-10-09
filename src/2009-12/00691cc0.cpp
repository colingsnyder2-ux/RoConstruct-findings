// roc 2009-12 00691cc0  unit: RBX::HopperBin  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00691cc0
//
// 00691cc0  8a8114010000         mov al, byte ptr [ecx + 0x114]
// 00691cc6  c3                   ret 
// library ogre-1.6.4/OgreAlignedAllocator.cpp (function ?isVertexTextureFetchRequired@GpuProgram@Ogre@@UBE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreAlignedAllocator.cpp
