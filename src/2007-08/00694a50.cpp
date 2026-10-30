// from server: 100% by auto
// roc 2007-08 00694a50  unit: CXTPToolTipContext::CRichEditToolTip  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00694a50
//
// 00694a50  6a00                 push 0
// 00694a52  e809f9ffff           call 0x694360
// 00694a57  c20c00               ret 0xc
// library xtp-11.2.2-vc8/Source\Common\XTPToolTipContext.cpp (function ?OnMouseMove@CXTPToolTipContextToolTip@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPToolTipContext.cpp
