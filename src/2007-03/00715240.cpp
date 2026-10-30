// roc 2007-03 00715240  unit: seg_00710000  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00715240
//
// 00715240  83794400             cmp dword ptr [ecx + 0x44], 0
// 00715244  7503                 jne 0x715249
// 00715246  33c0                 xor eax, eax
// 00715248  c3                   ret 
// 00715249  8b4140               mov eax, dword ptr [ecx + 0x40]
// 0071524c  8b4008               mov eax, dword ptr [eax + 8]
// 0071524f  c3                   ret 
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneBaseContainer.cpp (function ?GetLastPane@CXTPDockingPaneBaseContainer@@QBEPAVCXTPDockingPaneBase@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneBaseContainer.cpp
