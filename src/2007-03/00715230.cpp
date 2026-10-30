// roc 2007-03 00715230  unit: seg_00710000  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00715230
//
// 00715230  83794400             cmp dword ptr [ecx + 0x44], 0
// 00715234  7503                 jne 0x715239
// 00715236  33c0                 xor eax, eax
// 00715238  c3                   ret 
// 00715239  8b413c               mov eax, dword ptr [ecx + 0x3c]
// 0071523c  8b4008               mov eax, dword ptr [eax + 8]
// 0071523f  c3                   ret 
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneBaseContainer.cpp (function ?GetFirstPane@CXTPDockingPaneBaseContainer@@QBEPAVCXTPDockingPaneBase@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneBaseContainer.cpp
