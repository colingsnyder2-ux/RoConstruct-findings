// roc 2012-06 00a07150  unit: CXTPRibbonTheme  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a07150
//
// 00a07150  8b442404             mov eax, dword ptr [esp + 4]
// 00a07154  83b80001000005       cmp dword ptr [eax + 0x100], 5
// 00a0715b  7509                 jne 0xa07166
// 00a0715d  89442404             mov dword ptr [esp + 4], eax
// 00a07161  e98afeffff           jmp 0xa06ff0
// 00a07166  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonTheme.cpp (function ?SetCommandBarRegion@CXTPRibbonTheme@@MAEXPAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonTheme.cpp
