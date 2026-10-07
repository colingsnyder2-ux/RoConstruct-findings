// roc 2012-06 005d3580  unit: RBX::VBlockMesh::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005d3580
//
// 005d3580  e89bffffff           call 0x5d3520
// 005d3585  8bc8                 mov ecx, eax
// 005d3587  e9e4f4ffff           jmp 0x5d2a70
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
