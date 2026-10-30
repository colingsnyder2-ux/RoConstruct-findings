// from server: 100% by auto
// roc 2012-06 008cf690  unit: RBX::VBodyPosition::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008cf690
//
// 008cf690  e8bbd3ffff           call 0x8cca50
// 008cf695  8bc8                 mov ecx, eax
// 008cf697  e93491e9ff           jmp 0x7687d0
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
