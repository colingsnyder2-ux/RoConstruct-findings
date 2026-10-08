// from server: 100% by auto
// roc 2012-06 0077e1d0  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0077e1d0
//
// 0077e1d0  e82bffffff           call 0x77e100
// 0077e1d5  8bc8                 mov ecx, eax
// 0077e1d7  e9c4b1feff           jmp 0x7693a0
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
