// roc 2012-06 00710ae0  unit: RBX::VTool::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00710ae0
//
// 00710ae0  e89bffffff           call 0x710a80
// 00710ae5  8bc8                 mov ecx, eax
// 00710ae7  e9f4e2d0ff           jmp 0x41ede0
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
