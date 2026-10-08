// roc 2009-12 006cb2b0  unit: RBX::Profiling::Profiler  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006cb2b0
//
// 006cb2b0  8d8184010000         lea eax, [ecx + 0x184]
// 006cb2b6  c3                   ret 
// library ogre-1.6.4/OgreLight.cpp (function ?getCustomShadowCameraSetup@Light@Ogre@@QBEABV?$SharedPtr@VShadowCameraSetup@Ogre@@@2@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreLight.cpp
