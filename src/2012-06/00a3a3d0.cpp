// roc 2012-06 00a3a3d0  unit: CXTPDockingPane  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a3a3d0
//
// 00a3a3d0  8b4118               mov eax, dword ptr [ecx + 0x18]
// 00a3a3d3  3b442404             cmp eax, dword ptr [esp + 4]
// 00a3a3d7  750a                 jne 0xa3a3e3
// 00a3a3d9  51                   push ecx
// 00a3a3da  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00a3a3de  e87de20000           call 0xa48660
// 00a3a3e3  c20800               ret 8
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneBase.cpp (function ?FindPane@CXTPDockingPaneBase@@UBEXW4XTPDockingPaneType@@PAV?$CList@PAVCXTPDockingPaneBase@@PAV1@@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneBase.cpp
