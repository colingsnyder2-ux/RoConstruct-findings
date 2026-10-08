// from server: 100% by auto
// roc 2008-06 0075d700  unit: CXTPDockingPane  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0075d700
//
// 0075d700  8b4118               mov eax, dword ptr [ecx + 0x18]
// 0075d703  3b442404             cmp eax, dword ptr [esp + 4]
// 0075d707  750a                 jne 0x75d713
// 0075d709  51                   push ecx
// 0075d70a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0075d70e  e8ade30000           call 0x76bac0
// 0075d713  c20800               ret 8
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneBase.cpp (function ?FindPane@CXTPDockingPaneBase@@UBEXW4XTPDockingPaneType@@PAV?$CList@PAVCXTPDockingPaneBase@@PAV1@@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneBase.cpp
