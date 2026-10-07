// roc 2008-06 00763360  unit: CXTPDockingPanePaintManager  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00763360
//
// 00763360  8b442404             mov eax, dword ptr [esp + 4]
// 00763364  33c9                 xor ecx, ecx
// 00763366  8908                 mov dword ptr [eax], ecx
// 00763368  894804               mov dword ptr [eax + 4], ecx
// 0076336b  894808               mov dword ptr [eax + 8], ecx
// 0076336e  89480c               mov dword ptr [eax + 0xc], ecx
// 00763371  c20800               ret 8
// library xtp-11.2.2/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?GetCaptionGripperRect@CXTPDockingPanePaintManager@@UAE?AVCRect@@PBVCXTPDockingPaneTabbedContainer@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPanePaintManager.cpp
