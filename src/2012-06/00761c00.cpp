// from server: 100% by auto
// roc 2012-06 00761c00  unit: RBX::VExplosion::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00761c00
//
// 00761c00  e85bfdffff           call 0x761960
// 00761c05  8bc8                 mov ecx, eax
// 00761c07  e964e2d0ff           jmp 0x46fe70
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
