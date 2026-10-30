// roc 2009-12 008aba70  unit: CXTPDockingPaneAutoHidePanel  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008aba70
//
// 008aba70  8b442404             mov eax, dword ptr [esp + 4]
// 008aba74  894110               mov dword ptr [ecx + 0x10], eax
// 008aba77  c20400               ret 4
// library ogre-1.6.4/OgreCompositionTechnique.cpp (function ?notifyViewport@RQListener@CompositorChain@Ogre@@QAEXPAVViewport@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreCompositionTechnique.cpp
