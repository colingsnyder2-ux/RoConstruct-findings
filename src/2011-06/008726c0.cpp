// roc 2011-06 008726c0  unit: CXTPToolTipContextToolTip  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008726c0
//
// 008726c0  6a00                 push 0
// 008726c2  e8e9f8ffff           call 0x871fb0
// 008726c7  c20c00               ret 0xc
// library xtp-15.2.1/Source\Common\XTPToolTipContext.cpp (function ?OnMouseMove@CXTPToolTipContextToolTip@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPToolTipContext.cpp
