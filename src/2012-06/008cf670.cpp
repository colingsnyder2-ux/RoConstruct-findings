// from server: 100% by auto
// roc 2012-06 008cf670  unit: RBX::VBodyForce::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008cf670
//
// 008cf670  e81bd3ffff           call 0x8cc990
// 008cf675  8bc8                 mov ecx, eax
// 008cf677  e97490e9ff           jmp 0x7686f0
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
