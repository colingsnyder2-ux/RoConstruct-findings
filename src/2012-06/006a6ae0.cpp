// from server: 100% by auto
// roc 2012-06 006a6ae0  unit: RBX::VScriptContext::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006a6ae0
//
// 006a6ae0  e85b73ddff           call 0x47de40
// 006a6ae5  8bc8                 mov ecx, eax
// 006a6ae7  e9f405d6ff           jmp 0x4070e0
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
