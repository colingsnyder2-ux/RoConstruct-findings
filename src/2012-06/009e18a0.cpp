// from server: 100% by auto
// roc 2012-06 009e18a0  unit: CXTPPropertyGrid  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e18a0
//
// 009e18a0  e87bfeffff           call 0x9e1720
// 009e18a5  8bc8                 mov ecx, eax
// 009e18a7  e954df0000           jmp 0x9ef800
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
