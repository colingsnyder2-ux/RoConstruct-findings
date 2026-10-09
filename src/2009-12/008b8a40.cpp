// roc 2009-12 008b8a40  unit: XTPDockingPanePaintThemes::CXTPDockingPaneOffice2003Theme  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b8a40
//
// 008b8a40  8b442404             mov eax, dword ptr [esp + 4]
// 008b8a44  8b4978               mov ecx, dword ptr [ecx + 0x78]
// 008b8a47  c70000000000         mov dword ptr [eax], 0
// 008b8a4d  c7400400000000       mov dword ptr [eax + 4], 0
// 008b8a54  c740080a000000       mov dword ptr [eax + 8], 0xa
// 008b8a5b  89480c               mov dword ptr [eax + 0xc], ecx
// 008b8a5e  c20800               ret 8
// library xtp-11.2.2/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?GetCaptionGripperRect@CXTPDockingPaneOffice2003Theme@XTPDockingPanePaintThemes@@UAE?AVCRect@@PBVCXTPDockingPaneTabbedContainer@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPanePaintManager.cpp
