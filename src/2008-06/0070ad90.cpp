// from server: 100% by auto
// roc 2008-06 0070ad90  unit: CXTPToolTipContextToolTip  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0070ad90
//
// 0070ad90  6a00                 push 0
// 0070ad92  e8e9f8ffff           call 0x70a680
// 0070ad97  c20c00               ret 0xc
// library xtp-11.2.2/Source\Common\XTPToolTipContext.cpp (function ?OnMouseMove@CXTPToolTipContextToolTip@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPToolTipContext.cpp
