// roc 2009-12 006da8f0  unit: RBX::VControllerService::?$FactoryProduct  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006da8f0
//
// 006da8f0  8d81c4000000         lea eax, [ecx + 0xc4]
// 006da8f6  c3                   ret 
// library ogre-1.6.4/OgreAlignedAllocator.cpp (function ?getSource@GpuProgram@Ogre@@UBEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreAlignedAllocator.cpp
