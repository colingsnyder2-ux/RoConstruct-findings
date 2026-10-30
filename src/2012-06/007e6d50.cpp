// from server: 100% by auto
// roc 2012-06 007e6d50  unit: RBX::GuiTarget  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007e6d50
//
// 007e6d50  8b442404             mov eax, dword ptr [esp + 4]
// 007e6d54  33c9                 xor ecx, ecx
// 007e6d56  8908                 mov dword ptr [eax], ecx
// 007e6d58  894804               mov dword ptr [eax + 4], ecx
// 007e6d5b  894808               mov dword ptr [eax + 8], ecx
// 007e6d5e  89480c               mov dword ptr [eax + 0xc], ecx
// 007e6d61  c20800               ret 8
// library xtp-15.2.1/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?GetCaptionGripperRect@CXTPDockingPanePaintManager@@UAE?AVCRect@@PBVCXTPDockingPaneTabbedContainer@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPanePaintManager.cpp
