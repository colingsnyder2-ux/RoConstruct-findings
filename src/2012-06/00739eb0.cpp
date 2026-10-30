// from server: 100% by auto
// roc 2012-06 00739eb0  unit: RBX::VPlayerGui::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00739eb0
//
// 00739eb0  e8cbfbffff           call 0x739a80
// 00739eb5  8bc8                 mov ecx, eax
// 00739eb7  e97400d0ff           jmp 0x439f30
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
