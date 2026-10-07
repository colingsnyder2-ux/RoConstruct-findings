// roc 2012-06 008126b0  unit: RBX::VGlue::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008126b0
//
// 008126b0  e87bf8ffff           call 0x811f30
// 008126b5  8bc8                 mov ecx, eax
// 008126b7  e90423d6ff           jmp 0x5749c0
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
