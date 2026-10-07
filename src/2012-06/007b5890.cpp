// roc 2012-06 007b5890  unit: RBX::PART::VWedge::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007b5890
//
// 007b5890  e87bffffff           call 0x7b5810
// 007b5895  8bc8                 mov ecx, eax
// 007b5897  e9948cd1ff           jmp 0x4ce530
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
