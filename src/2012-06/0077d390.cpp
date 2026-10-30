// from server: 100% by auto
// roc 2012-06 0077d390  unit: RBX::VRbxRay::V?$Value::?$FactoryProduct  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0077d390
//
// 0077d390  e89bfeffff           call 0x77d230
// 0077d395  8bc8                 mov ecx, eax
// 0077d397  e9b4befeff           jmp 0x769250
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBoxExt.cpp (function ?GetCurSel@CXTPControlComboBoxList@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBoxExt.cpp
