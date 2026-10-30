// from server: 100% by auto
// roc 2012-06 00899660  unit: RBX::VMotorFeature::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00899660
//
// 00899660  e89bfaffff           call 0x899100
// 00899665  8bc8                 mov ecx, eax
// 00899667  e9c4b0e5ff           jmp 0x6f4730
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
