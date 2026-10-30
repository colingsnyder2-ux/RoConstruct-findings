// roc 2009-12 00756af0  unit: RBX::VehicleSeat  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00756af0
//
// 00756af0  8d81a8000000         lea eax, [ecx + 0xa8]
// 00756af6  c3                   ret 
// library ogre-1.6.4/OgreAlignedAllocator.cpp (function ?getSourceFile@GpuProgram@Ogre@@UBEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreAlignedAllocator.cpp
