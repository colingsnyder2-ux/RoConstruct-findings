// from server: 100% by auto
// roc 2012-06 0073bd50  unit: RBX::VPlugin::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0073bd50
//
// 0073bd50  e8bbfbffff           call 0x73b910
// 0073bd55  8bc8                 mov ecx, eax
// 0073bd57  e924e3cfff           jmp 0x43a080
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
