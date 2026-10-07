// roc 2012-06 00411bb0  unit: RBX::Reflection::Metadata::VCallbacks::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00411bb0
//
// 00411bb0  e82bffffff           call 0x411ae0
// 00411bb5  8bc8                 mov ecx, eax
// 00411bb7  e964beffff           jmp 0x40da20
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
