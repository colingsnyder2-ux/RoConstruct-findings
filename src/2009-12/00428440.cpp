// roc 2009-12 00428440  unit: CXTPToolBar::CControlButtonExpand  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00428440
//
// 00428440  8b8178010000         mov eax, dword ptr [ecx + 0x178]
// 00428446  c3                   ret 
// library ogre-1.6.4/OgreCompositorManager.cpp (function ?_getBindingDelegate@HighLevelGpuProgram@Ogre@@UAEPAVGpuProgram@2@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreCompositorManager.cpp
