// roc 2011-06 008deaa0  unit: VCEdit::?$CXTMaskEditT  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008deaa0
//
// 008deaa0  6aff                 push -1
// 008deaa2  ff15cc1ba400         call dword ptr [0xa41bcc]
// 008deaa8  c20800               ret 8
// library xtp-15.2.1/Source\Controls\Deprecated\XTFlatComboBox.cpp (function ?NotifyInvalidCharacter@?$CXTPMaskEditT@VCEdit@@@@MAEXDD@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Deprecated/XTFlatComboBox.cpp
