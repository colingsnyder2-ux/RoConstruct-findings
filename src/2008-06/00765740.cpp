// roc 2008-06 00765740  unit: XTPDockingPanePaintThemes::CXTPDockingPaneOffice2003Theme  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00765740
//
// 00765740  8b442404             mov eax, dword ptr [esp + 4]
// 00765744  8b4978               mov ecx, dword ptr [ecx + 0x78]
// 00765747  c70000000000         mov dword ptr [eax], 0
// 0076574d  c7400400000000       mov dword ptr [eax + 4], 0
// 00765754  c740080a000000       mov dword ptr [eax + 8], 0xa
// 0076575b  89480c               mov dword ptr [eax + 0xc], ecx
// 0076575e  c20800               ret 8
// library xtp-11.2.2/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?GetCaptionGripperRect@CXTPDockingPaneOffice2003Theme@XTPDockingPanePaintThemes@@UAE?AVCRect@@PBVCXTPDockingPaneTabbedContainer@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPanePaintManager.cpp
