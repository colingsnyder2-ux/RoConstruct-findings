// from server: 100% by auto
// roc 2012-06 00772880  unit: RBX::VCustomEvent::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00772880
//
// 00772880  e8dbfeffff           call 0x772760
// 00772885  8bc8                 mov ecx, eax
// 00772887  e9545bffff           jmp 0x7683e0
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
