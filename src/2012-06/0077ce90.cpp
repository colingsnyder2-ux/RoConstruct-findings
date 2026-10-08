// from server: 100% by auto
// roc 2012-06 0077ce90  unit: G3D::VVector3::V?$Value::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0077ce90
//
// 0077ce90  e89bfeffff           call 0x77cd30
// 0077ce95  8bc8                 mov ecx, eax
// 0077ce97  e944c3feff           jmp 0x7691e0
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
