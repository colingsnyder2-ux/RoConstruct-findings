// roc 2012-06 008ca780  unit: RBX::VCornerWedgeInstance::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008ca780
//
// 008ca780  e87bffffff           call 0x8ca700
// 008ca785  8bc8                 mov ecx, eax
// 008ca787  e914dee9ff           jmp 0x7685a0
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
