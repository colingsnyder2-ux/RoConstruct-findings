// from server: 100% by auto
// roc 2007-08 00671aa0  unit: CPropertyGridItemBrickColor  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00671aa0
//
// 00671aa0  e8bbffffff           call 0x671a60
// 00671aa5  0fb6c0               movzx eax, al
// 00671aa8  c3                   ret 
// library xtp-11.2.2-vc8/Source\Common\XTPSystemHelpers.cpp (function ?IsClearTypeTextQualitySupported@CXTPSystemVersion@@QAEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPSystemHelpers.cpp
