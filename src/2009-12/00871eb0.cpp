// roc 2009-12 00871eb0  unit: CXTPRibbonTheme::CRibbonAppearanceSet  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00871eb0
//
// 00871eb0  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 00871eb3  8b8050060000         mov eax, dword ptr [eax + 0x650]
// 00871eb9  40                   inc eax
// 00871eba  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonTheme.cpp (function ?GetButtonHeight@CRibbonAppearanceSet@CXTPRibbonTheme@@MAEHPBVCXTPTabManager@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonTheme.cpp
