// from server: 100% by auto
// roc 2012-06 0069a1d0  unit: RBX::VTeam::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0069a1d0
//
// 0069a1d0  e87bfeffff           call 0x69a050
// 0069a1d5  8bc8                 mov ecx, eax
// 0069a1d7  e9b4cdd6ff           jmp 0x406f90
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
