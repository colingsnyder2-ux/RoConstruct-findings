// roc 2009-06 0079a210  unit: CXTPRibbonTheme  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0079a210
//
// 0079a210  8b442404             mov eax, dword ptr [esp + 4]
// 0079a214  83b80001000005       cmp dword ptr [eax + 0x100], 5
// 0079a21b  7509                 jne 0x79a226
// 0079a21d  89442404             mov dword ptr [esp + 4], eax
// 0079a221  e98afeffff           jmp 0x79a0b0
// 0079a226  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonTheme.cpp (function ?SetCommandBarRegion@CXTPRibbonTheme@@MAEXPAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonTheme.cpp
