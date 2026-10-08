// roc 2009-06 007ddf30  unit: XTPDockingPanePaintThemes::CXTPDockingPaneOffice2003Theme  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007ddf30
//
// 007ddf30  8b442404             mov eax, dword ptr [esp + 4]
// 007ddf34  8b4978               mov ecx, dword ptr [ecx + 0x78]
// 007ddf37  c70000000000         mov dword ptr [eax], 0
// 007ddf3d  c7400400000000       mov dword ptr [eax + 4], 0
// 007ddf44  c740080a000000       mov dword ptr [eax + 8], 0xa
// 007ddf4b  89480c               mov dword ptr [eax + 0xc], ecx
// 007ddf4e  c20800               ret 8
// library xtp-11.2.2/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?GetCaptionGripperRect@CXTPDockingPaneOffice2003Theme@XTPDockingPanePaintThemes@@UAE?AVCRect@@PBVCXTPDockingPaneTabbedContainer@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPanePaintManager.cpp
