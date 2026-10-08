// from server: 100% by auto
// roc 2012-06 0078cd80  unit: RBX::VVisit::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0078cd80
//
// 0078cd80  e81b4bd2ff           call 0x4b18a0
// 0078cd85  8bc8                 mov ecx, eax
// 0078cd87  e92420cfff           jmp 0x47edb0
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
