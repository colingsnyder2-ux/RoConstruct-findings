// from server: 100% by auto
// roc 2007-08 006e6200  unit: CXTPDockingPanePaintManager  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006e6200
//
// 006e6200  8b442404             mov eax, dword ptr [esp + 4]
// 006e6204  33c9                 xor ecx, ecx
// 006e6206  8908                 mov dword ptr [eax], ecx
// 006e6208  894804               mov dword ptr [eax + 4], ecx
// 006e620b  894808               mov dword ptr [eax + 8], ecx
// 006e620e  89480c               mov dword ptr [eax + 0xc], ecx
// 006e6211  c20800               ret 8
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?GetCaptionGripperRect@CXTPDockingPanePaintManager@@UAE?AVCRect@@PBVCXTPDockingPaneTabbedContainer@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPanePaintManager.cpp
