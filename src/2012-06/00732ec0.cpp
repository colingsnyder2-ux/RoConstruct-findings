// roc 2012-06 00732ec0  unit: RBX::VScreenGui::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00732ec0
//
// 00732ec0  e8fbfeffff           call 0x732dc0
// 00732ec5  8bc8                 mov ecx, eax
// 00732ec7  e9346ed0ff           jmp 0x439d00
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
