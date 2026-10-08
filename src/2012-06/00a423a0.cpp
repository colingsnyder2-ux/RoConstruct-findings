// roc 2012-06 00a423a0  unit: XTPDockingPanePaintThemes::CXTPDockingPaneOffice2003Theme  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a423a0
//
// 00a423a0  8b442404             mov eax, dword ptr [esp + 4]
// 00a423a4  8b4978               mov ecx, dword ptr [ecx + 0x78]
// 00a423a7  c70000000000         mov dword ptr [eax], 0
// 00a423ad  c7400400000000       mov dword ptr [eax + 4], 0
// 00a423b4  c740080a000000       mov dword ptr [eax + 8], 0xa
// 00a423bb  89480c               mov dword ptr [eax + 0xc], ecx
// 00a423be  c20800               ret 8
// library xtp-11.2.2/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?GetCaptionGripperRect@CXTPDockingPaneOffice2003Theme@XTPDockingPanePaintThemes@@UAE?AVCRect@@PBVCXTPDockingPaneTabbedContainer@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPanePaintManager.cpp
