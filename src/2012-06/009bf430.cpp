// roc 2012-06 009bf430  unit: CXTPColorManager  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009bf430
//
// 009bf430  e82be4ffff           call 0x9bd860
// 009bf435  8bc8                 mov ecx, eax
// 009bf437  e964f6ffff           jmp 0x9beaa0
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
