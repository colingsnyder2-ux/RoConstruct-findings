// roc 2009-12 00894e90  unit: CXTPRibbonBar  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00894e90
//
// 00894e90  8b8144020000         mov eax, dword ptr [ecx + 0x244]
// 00894e96  c3                   ret 
// library ogre-1.6.4/OgreCompositionPass.cpp (function ?getStencilRefValue@CompositionPass@Ogre@@QAEIXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreCompositionPass.cpp
