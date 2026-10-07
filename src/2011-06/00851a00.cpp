// roc 2011-06 00851a00  unit: CSourceStream  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00851a00
//
// 00851a00  e8bbffffff           call 0x8519c0
// 00851a05  0fb6c0               movzx eax, al
// 00851a08  c3                   ret 
// library xtp-15.2.1/Source\Common\XTPSystemHelpers.cpp (function ?IsClearTypeTextQualitySupported@CXTPSystemVersion@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPSystemHelpers.cpp
