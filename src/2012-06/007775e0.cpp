// roc 2012-06 007775e0  unit: RBX::VBasicPartInstance::?$ActionStation  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007775e0
//
// 007775e0  e81bfcffff           call 0x777200
// 007775e5  8bc8                 mov ecx, eax
// 007775e7  e9d46ed5ff           jmp 0x4ce4c0
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
