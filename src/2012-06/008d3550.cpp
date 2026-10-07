// roc 2012-06 008d3550  unit: RBX::VHandles::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008d3550
//
// 008d3550  e89bffffff           call 0x8d34f0
// 008d3555  8bc8                 mov ecx, eax
// 008d3557  e93454e9ff           jmp 0x768990
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
