// from server: 100% by auto
// roc 2008-06 006e8970  unit: CPatchedControlComboBox  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e8970
//
// 006e8970  e8bbffffff           call 0x6e8930
// 006e8975  0fb6c0               movzx eax, al
// 006e8978  c3                   ret 
// library xtp-11.2.2/Source\Common\XTPSystemHelpers.cpp (function ?IsClearTypeTextQualitySupported@CXTPSystemVersion@@QAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPSystemHelpers.cpp
