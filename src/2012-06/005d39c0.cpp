// from server: 100% by auto
// roc 2012-06 005d39c0  unit: RBX::VCylinderMesh::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005d39c0
//
// 005d39c0  e89bffffff           call 0x5d3960
// 005d39c5  8bc8                 mov ecx, eax
// 005d39c7  e914f1ffff           jmp 0x5d2ae0
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
