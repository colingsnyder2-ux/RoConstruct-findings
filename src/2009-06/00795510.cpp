// roc 2009-06 00795510  unit: CXTPRibbonTheme::CRibbonAppearanceSet  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00795510
//
// 00795510  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 00795513  8b8050060000         mov eax, dword ptr [eax + 0x650]
// 00795519  40                   inc eax
// 0079551a  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonTheme.cpp (function ?GetButtonHeight@CRibbonAppearanceSet@CXTPRibbonTheme@@MAEHPBVCXTPTabManager@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonTheme.cpp
