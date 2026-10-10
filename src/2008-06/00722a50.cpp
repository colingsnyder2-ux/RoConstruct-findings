// roc 2008-06 00722a50  unit: CXTPRibbonBar  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00722a50
//
// 00722a50  8b01                 mov eax, dword ptr [ecx]
// 00722a52  8b80dc010000         mov eax, dword ptr [eax + 0x1dc]
// 00722a58  c744240800000000     mov dword ptr [esp + 8], 0
// 00722a60  ffe0                 jmp eax
// library xtp-11.2.2-shared-mfc/Source\Ribbon\XTPRibbonBar.cpp (function ?MergeToolBar@CXTPRibbonBar@@MAEXPAVCXTPCommandBar@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonBar.cpp
