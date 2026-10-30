// roc 2009-12 0082f3e0  unit: CXTPReportSelectedRows  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0082f3e0
//
// 0082f3e0  8b8168010000         mov eax, dword ptr [ecx + 0x168]
// 0082f3e6  c3                   ret 
// library ogre-1.6.4/OgreBorderPanelOverlayElement.cpp (function ?getSourceTemplate@OverlayElement@Ogre@@QBEPBV12@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreBorderPanelOverlayElement.cpp
