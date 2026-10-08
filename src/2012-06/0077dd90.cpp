// from server: 100% by auto
// roc 2012-06 0077dd90  unit: G3D::VColor3::V?$Value::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0077dd90
//
// 0077dd90  e89bfeffff           call 0x77dc30
// 0077dd95  8bc8                 mov ecx, eax
// 0077dd97  e994b5feff           jmp 0x769330
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
