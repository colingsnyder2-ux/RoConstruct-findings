// roc 2008-06 00773950  unit: VCEdit::?$CXTMaskEditT  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00773950
//
// 00773950  6aff                 push -1
// 00773952  ff15142d8000         call dword ptr [0x802d14]
// 00773958  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTMaskEdit.cpp (function ?NotifyPosNotInRange@?$CXTMaskEditT@VCEdit@@@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTMaskEdit.cpp
