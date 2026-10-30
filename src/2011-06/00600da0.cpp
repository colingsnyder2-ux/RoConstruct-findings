// from server: 100% by auto
// roc 2011-06 00600da0  unit: RBX::GuiTarget  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00600da0
//
// 00600da0  8b442404             mov eax, dword ptr [esp + 4]
// 00600da4  33c9                 xor ecx, ecx
// 00600da6  8908                 mov dword ptr [eax], ecx
// 00600da8  894804               mov dword ptr [eax + 4], ecx
// 00600dab  894808               mov dword ptr [eax + 8], ecx
// 00600dae  89480c               mov dword ptr [eax + 0xc], ecx
// 00600db1  c20800               ret 8
// library xtp-15.2.1/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?GetCaptionGripperRect@CXTPDockingPanePaintManager@@UAE?AVCRect@@PBVCXTPDockingPaneTabbedContainer@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPanePaintManager.cpp
