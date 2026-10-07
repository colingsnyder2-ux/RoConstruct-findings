// roc 2012-06 0077ad20  unit: RBX::VBindableFunction::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0077ad20
//
// 0077ad20  e86bfeffff           call 0x77ab90
// 0077ad25  8bc8                 mov ecx, eax
// 0077ad27  e9a4e1feff           jmp 0x768ed0
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
