// roc 2011-06 00889e70  unit: CXTPRibbonTheme::CRibbonAppearanceSet  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00889e70
//
// 00889e70  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 00889e73  8b8050060000         mov eax, dword ptr [eax + 0x650]
// 00889e79  40                   inc eax
// 00889e7a  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonTheme.cpp (function ?GetButtonHeight@CRibbonAppearanceSet@CXTPRibbonTheme@@MAEHPBVCXTPTabManager@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonTheme.cpp
