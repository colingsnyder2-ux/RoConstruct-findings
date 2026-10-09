// roc 2009-12 00876bb0  unit: CXTPRibbonTheme  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00876bb0
//
// 00876bb0  8b442404             mov eax, dword ptr [esp + 4]
// 00876bb4  83b80001000005       cmp dword ptr [eax + 0x100], 5
// 00876bbb  7509                 jne 0x876bc6
// 00876bbd  89442404             mov dword ptr [esp + 4], eax
// 00876bc1  e98afeffff           jmp 0x876a50
// 00876bc6  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonTheme.cpp (function ?SetCommandBarRegion@CXTPRibbonTheme@@MAEXPAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonTheme.cpp
