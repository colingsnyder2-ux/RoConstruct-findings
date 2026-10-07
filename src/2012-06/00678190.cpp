// roc 2012-06 00678190  unit: RBX::XVGfxBinding::XV?$mf2::V?$bind_t::?$callable_slot  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00678190
//
// 00678190  e81bf52f00           call 0x9776b0
// 00678195  8bc8                 mov ecx, eax
// 00678197  e994da2f00           jmp 0x975c30
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
