// roc 2007-03 006d1450  unit: seg_006d0000  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006d1450
//
// 006d1450  8b442404             mov eax, dword ptr [esp + 4]
// 006d1454  8b4978               mov ecx, dword ptr [ecx + 0x78]
// 006d1457  c70000000000         mov dword ptr [eax], 0
// 006d145d  c7400400000000       mov dword ptr [eax + 4], 0
// 006d1464  c740080a000000       mov dword ptr [eax + 8], 0xa
// 006d146b  89480c               mov dword ptr [eax + 0xc], ecx
// 006d146e  c20800               ret 8
// library xtp-11.2.2/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?GetCaptionGripperRect@CXTPDockingPaneOffice2003Theme@XTPDockingPanePaintThemes@@UAE?AVCRect@@PBVCXTPDockingPaneTabbedContainer@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPanePaintManager.cpp
