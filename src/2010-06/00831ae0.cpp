// roc 2010-06 00831ae0  unit: CXTPRibbonTheme  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00831ae0
//
// 00831ae0  8b442404             mov eax, dword ptr [esp + 4]
// 00831ae4  83b80001000005       cmp dword ptr [eax + 0x100], 5
// 00831aeb  7509                 jne 0x831af6
// 00831aed  89442404             mov dword ptr [esp + 4], eax
// 00831af1  e98afeffff           jmp 0x831980
// 00831af6  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonTheme.cpp (function ?SetCommandBarRegion@CXTPRibbonTheme@@MAEXPAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonTheme.cpp
