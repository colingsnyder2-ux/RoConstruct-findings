// roc 2012-06 0077ea50  unit: RBX::N$E?sDoubleConstrainedValue::V?$ConstrainedValue::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0077ea50
//
// 0077ea50  e82bffffff           call 0x77e980
// 0077ea55  8bc8                 mov ecx, eax
// 0077ea57  e924aafeff           jmp 0x769480
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
