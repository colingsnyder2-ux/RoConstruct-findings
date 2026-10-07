// roc 2012-06 00a78960  unit: CXTPDockingPaneAutoHidePanel  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a78960
//
// 00a78960  83794400             cmp dword ptr [ecx + 0x44], 0
// 00a78964  7503                 jne 0xa78969
// 00a78966  33c0                 xor eax, eax
// 00a78968  c3                   ret 
// 00a78969  8b413c               mov eax, dword ptr [ecx + 0x3c]
// 00a7896c  85c0                 test eax, eax
// 00a7896e  7505                 jne 0xa78975
// 00a78970  e94b9af0ff           jmp 0x9823c0
// 00a78975  8b4008               mov eax, dword ptr [eax + 8]
// 00a78978  c3                   ret 
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneBaseContainer.cpp (function ?GetFirstPane@CXTPDockingPaneBaseContainer@@QBEPAVCXTPDockingPaneBase@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneBaseContainer.cpp
