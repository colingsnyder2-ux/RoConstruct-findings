// from server: 100% by auto
// roc 2012-06 0070cc40  unit: RBX::VHopperBin::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0070cc40
//
// 0070cc40  e89bffffff           call 0x70cbe0
// 0070cc45  8bc8                 mov ecx, eax
// 0070cc47  e9b420d1ff           jmp 0x41ed00
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
