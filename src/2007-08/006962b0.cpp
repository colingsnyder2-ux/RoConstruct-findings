// from server: 100% by auto
// roc 2007-08 006962b0  unit: CXTPToolTipContext  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006962b0
//
// 006962b0  8b442408             mov eax, dword ptr [esp + 8]
// 006962b4  50                   push eax
// 006962b5  e8d6eeffff           call 0x695190
// 006962ba  33c0                 xor eax, eax
// 006962bc  c20800               ret 8
// library xtp-11.2.2-vc8/Source\Common\XTPToolTipContext.cpp (function ?OnRelayEvent@CXTPToolTipContextToolTip@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPToolTipContext.cpp
