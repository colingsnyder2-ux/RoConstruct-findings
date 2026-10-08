// from server: 100% by auto
// roc 2012-06 00a56d90  unit: VCEdit::?$CXTMaskEditT  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a56d90
//
// 00a56d90  6aff                 push -1
// 00a56d92  ff15683bb200         call dword ptr [0xb23b68]
// 00a56d98  c3                   ret 
// library xtp-15.2.1/Source\Controls\Deprecated\XTFlatComboBox.cpp (function ?NotifyPosNotInRange@?$CXTPMaskEditT@VCEdit@@@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Deprecated/XTFlatComboBox.cpp
