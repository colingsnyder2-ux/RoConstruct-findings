// roc 2012-06 007e3ee0  unit: RBX::Assembly  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007e3ee0
//
// 007e3ee0  e8fbfeffff           call 0x7e3de0
// 007e3ee5  8bc8                 mov ecx, eax
// 007e3ee7  e9c456fdff           jmp 0x7b95b0
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
