// roc 2007-08 006f65b0  unit: VCEdit::?$CXTMaskEditT  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006f65b0
//
// 006f65b0  6aff                 push -1
// 006f65b2  ff157ced7700         call dword ptr [0x77ed7c]
// 006f65b8  c20800               ret 8
// library xtp-11.2.2-vc8/Source\Controls\XTMaskEdit.cpp (function ?NotifyInvalidCharacter@?$CXTMaskEditT@VCEdit@@@@MAEXDD@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTMaskEdit.cpp
