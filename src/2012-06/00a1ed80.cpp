// roc 2012-06 00a1ed80  unit: CXTPRibbonBar  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a1ed80
//
// 00a1ed80  8b01                 mov eax, dword ptr [ecx]
// 00a1ed82  8b80dc010000         mov eax, dword ptr [eax + 0x1dc]
// 00a1ed88  c744240800000000     mov dword ptr [esp + 8], 0
// 00a1ed90  ffe0                 jmp eax
// library xtp-15.2.1-shared-mfc/Source\Ribbon\XTPRibbonBar.cpp (function ?MergeToolBar@CXTPRibbonBar@@MAEXPAVCXTPCommandBar@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/Ribbon/XTPRibbonBar.cpp
