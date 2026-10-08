// from server: 100% by auto
// roc 2012-06 009ec9b0  unit: CXTPToolTipContext  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009ec9b0
//
// 009ec9b0  8b442408             mov eax, dword ptr [esp + 8]
// 009ec9b4  50                   push eax
// 009ec9b5  e8b6f6ffff           call 0x9ec070
// 009ec9ba  33c0                 xor eax, eax
// 009ec9bc  c20800               ret 8
// library xtp-15.2.1/Source\Common\XTPToolTipContext.cpp (function ?OnRelayEvent@CXTPToolTipContextToolTip@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPToolTipContext.cpp
