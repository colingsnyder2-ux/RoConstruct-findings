// from server: 100% by auto
// roc 2012-06 009c9ec0  unit: ATL::CRegObject  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c9ec0
//
// 009c9ec0  e8bbffffff           call 0x9c9e80
// 009c9ec5  0fb6c0               movzx eax, al
// 009c9ec8  c3                   ret 
// library xtp-15.2.1/Source\Common\XTPSystemHelpers.cpp (function ?IsClearTypeTextQualitySupported@CXTPSystemVersion@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPSystemHelpers.cpp
