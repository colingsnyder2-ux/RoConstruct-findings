// from server: 100% by auto
// roc 2011-06 008dea90  unit: VCEdit::?$CXTMaskEditT  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008dea90
//
// 008dea90  6aff                 push -1
// 008dea92  ff15cc1ba400         call dword ptr [0xa41bcc]
// 008dea98  c3                   ret 
// library xtp-15.2.1/Source\Controls\Deprecated\XTFlatComboBox.cpp (function ?NotifyPosNotInRange@?$CXTPMaskEditT@VCEdit@@@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Deprecated/XTFlatComboBox.cpp
