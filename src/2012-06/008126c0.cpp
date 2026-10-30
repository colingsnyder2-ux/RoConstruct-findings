// from server: 100% by auto
// roc 2012-06 008126c0  unit: RBX::VRotate::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008126c0
//
// 008126c0  e8cbf8ffff           call 0x811f90
// 008126c5  8bc8                 mov ecx, eax
// 008126c7  e96423d6ff           jmp 0x574a30
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
