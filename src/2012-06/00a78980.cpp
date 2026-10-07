// roc 2012-06 00a78980  unit: CXTPDockingPaneAutoHidePanel  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a78980
//
// 00a78980  83794400             cmp dword ptr [ecx + 0x44], 0
// 00a78984  7503                 jne 0xa78989
// 00a78986  33c0                 xor eax, eax
// 00a78988  c3                   ret 
// 00a78989  8b4140               mov eax, dword ptr [ecx + 0x40]
// 00a7898c  85c0                 test eax, eax
// 00a7898e  7505                 jne 0xa78995
// 00a78990  e92b9af0ff           jmp 0x9823c0
// 00a78995  8b4008               mov eax, dword ptr [eax + 8]
// 00a78998  c3                   ret 
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneBaseContainer.cpp (function ?GetLastPane@CXTPDockingPaneBaseContainer@@QBEPAVCXTPDockingPaneBase@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneBaseContainer.cpp
