// roc 2009-12 0056e960  unit: RakPeer  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0056e960
//
// 0056e960  8a8158020000         mov al, byte ptr [ecx + 0x258]
// 0056e966  c3                   ret 
// library ogre-1.6.4/OgreCompositionPass.cpp (function ?getStencilTwoSidedOperation@CompositionPass@Ogre@@QAE_NXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreCompositionPass.cpp
