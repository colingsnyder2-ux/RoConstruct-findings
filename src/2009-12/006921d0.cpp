// roc 2009-12 006921d0  unit: RBX::VHopperBin::?$EventDesc  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006921d0
//
// 006921d0  8d813c010000         lea eax, [ecx + 0x13c]
// 006921d6  c3                   ret 
// library ogre-1.6.4/OgreAlignedAllocator.cpp (function ?getNamedConstants@GpuProgram@Ogre@@UBEABUGpuNamedConstants@2@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreAlignedAllocator.cpp
