// roc 2011-06 00900740  unit: CXTPDockingPaneAutoHidePanel  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00900740
//
// 00900740  83794400             cmp dword ptr [ecx + 0x44], 0
// 00900744  7503                 jne 0x900749
// 00900746  33c0                 xor eax, eax
// 00900748  c3                   ret 
// 00900749  8b413c               mov eax, dword ptr [ecx + 0x3c]
// 0090074c  85c0                 test eax, eax
// 0090074e  7505                 jne 0x900755
// 00900750  e9b59bf0ff           jmp 0x80a30a
// 00900755  8b4008               mov eax, dword ptr [eax + 8]
// 00900758  c3                   ret 
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneBaseContainer.cpp (function ?GetFirstPane@CXTPDockingPaneBaseContainer@@QBEPAVCXTPDockingPaneBase@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneBaseContainer.cpp
