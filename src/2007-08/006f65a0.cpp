// roc 2007-08 006f65a0  unit: VCEdit::?$CXTMaskEditT  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006f65a0
//
// 006f65a0  6aff                 push -1
// 006f65a2  ff157ced7700         call dword ptr [0x77ed7c]
// 006f65a8  c3                   ret 
// library xtp-11.2.2-vc8/Source\Controls\XTMaskEdit.cpp (function ?NotifyPosNotInRange@?$CXTMaskEditT@VCEdit@@@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTMaskEdit.cpp
