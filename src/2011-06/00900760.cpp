// from server: 100% by auto
// roc 2011-06 00900760  unit: CXTPDockingPaneAutoHidePanel  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00900760
//
// 00900760  83794400             cmp dword ptr [ecx + 0x44], 0
// 00900764  7503                 jne 0x900769
// 00900766  33c0                 xor eax, eax
// 00900768  c3                   ret 
// 00900769  8b4140               mov eax, dword ptr [ecx + 0x40]
// 0090076c  85c0                 test eax, eax
// 0090076e  7505                 jne 0x900775
// 00900770  e9959bf0ff           jmp 0x80a30a
// 00900775  8b4008               mov eax, dword ptr [eax + 8]
// 00900778  c3                   ret 
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneBaseContainer.cpp (function ?GetLastPane@CXTPDockingPaneBaseContainer@@QBEPAVCXTPDockingPaneBase@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneBaseContainer.cpp
