// roc 2012-06 00821830  unit: RBX::VCharacterMesh::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00821830
//
// 00821830  e89bffffff           call 0x8217d0
// 00821835  8bc8                 mov ecx, eax
// 00821837  e91413dbff           jmp 0x5d2b50
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
