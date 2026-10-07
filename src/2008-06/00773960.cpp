// roc 2008-06 00773960  unit: VCEdit::?$CXTMaskEditT  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00773960
//
// 00773960  6aff                 push -1
// 00773962  ff15142d8000         call dword ptr [0x802d14]
// 00773968  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTMaskEdit.cpp (function ?NotifyInvalidCharacter@?$CXTMaskEditT@VCEdit@@@@MAEXDD@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTMaskEdit.cpp
