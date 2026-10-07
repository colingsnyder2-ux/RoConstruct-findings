// roc 2012-06 007b6890  unit: RBX::VSmoke::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007b6890
//
// 007b6890  e8bbfeffff           call 0x7b6750
// 007b6895  8bc8                 mov ecx, eax
// 007b6897  e914ddd4ff           jmp 0x5045b0
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
