// roc 2009-12 00895600  unit: CXTPRibbonBar  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00895600
//
// 00895600  8b01                 mov eax, dword ptr [ecx]
// 00895602  8b80dc010000         mov eax, dword ptr [eax + 0x1dc]
// 00895608  c744240800000000     mov dword ptr [esp + 8], 0
// 00895610  ffe0                 jmp eax
// copied from an identical function in another client (function ?MergeToolBar@CXTPRibbonBar@@MAEXPAVCXTPCommandBar@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonBar.cpp