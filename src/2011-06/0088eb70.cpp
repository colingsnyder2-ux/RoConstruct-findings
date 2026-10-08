// roc 2011-06 0088eb70  unit: CXTPRibbonTheme  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0088eb70
//
// 0088eb70  8b442404             mov eax, dword ptr [esp + 4]
// 0088eb74  83b80001000005       cmp dword ptr [eax + 0x100], 5
// 0088eb7b  7509                 jne 0x88eb86
// 0088eb7d  89442404             mov dword ptr [esp + 4], eax
// 0088eb81  e98afeffff           jmp 0x88ea10
// 0088eb86  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonTheme.cpp (function ?SetCommandBarRegion@CXTPRibbonTheme@@MAEXPAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonTheme.cpp
