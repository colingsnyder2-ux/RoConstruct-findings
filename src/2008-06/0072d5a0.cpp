// from server: 100% by auto
// roc 2008-06 0072d5a0  unit: CXTPRibbonTheme  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0072d5a0
//
// 0072d5a0  8b442404             mov eax, dword ptr [esp + 4]
// 0072d5a4  83b80001000005       cmp dword ptr [eax + 0x100], 5
// 0072d5ab  7509                 jne 0x72d5b6
// 0072d5ad  89442404             mov dword ptr [esp + 4], eax
// 0072d5b1  e98afeffff           jmp 0x72d440
// 0072d5b6  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonTheme.cpp (function ?SetCommandBarRegion@CXTPRibbonTheme@@MAEXPAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonTheme.cpp
