// roc 2012-06 007c5b10  unit: RBX::VMegaClusterInstance::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007c5b10
//
// 007c5b10  e8fbf3ffff           call 0x7c4f10
// 007c5b15  8bc8                 mov ecx, eax
// 007c5b17  e9e4ddd4ff           jmp 0x513900
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
