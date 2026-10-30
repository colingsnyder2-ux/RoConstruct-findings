// from server: 100% by auto
// roc 2012-06 00462850  unit: 1RBX::Metadata::VReflection::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00462850
//
// 00462850  e8cbfdffff           call 0x462620
// 00462855  8bc8                 mov ecx, eax
// 00462857  e9b4aefaff           jmp 0x40d710
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
