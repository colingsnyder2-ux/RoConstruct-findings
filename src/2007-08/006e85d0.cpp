// from server: 100% by auto
// roc 2007-08 006e85d0  unit: XTPDockingPanePaintThemes::CXTPDockingPaneOffice2003Theme  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006e85d0
//
// 006e85d0  8b442404             mov eax, dword ptr [esp + 4]
// 006e85d4  8b4978               mov ecx, dword ptr [ecx + 0x78]
// 006e85d7  c70000000000         mov dword ptr [eax], 0
// 006e85dd  c7400400000000       mov dword ptr [eax + 4], 0
// 006e85e4  c740080a000000       mov dword ptr [eax + 8], 0xa
// 006e85eb  89480c               mov dword ptr [eax + 0xc], ecx
// 006e85ee  c20800               ret 8
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?GetCaptionGripperRect@CXTPDockingPaneOffice2003Theme@XTPDockingPanePaintThemes@@UAE?AVCRect@@PBVCXTPDockingPaneTabbedContainer@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPanePaintManager.cpp
