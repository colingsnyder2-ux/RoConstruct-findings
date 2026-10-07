// roc 2012-06 00791600  unit: RBX::VFileMesh::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00791600
//
// 00791600  e89bffffff           call 0x7915a0
// 00791605  8bc8                 mov ecx, eax
// 00791607  e984d8ceff           jmp 0x47ee90
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
