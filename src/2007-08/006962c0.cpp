// roc 2007-08 006962c0  unit: CXTPToolTipContext  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006962c0
//
// 006962c0  8b442408             mov eax, dword ptr [esp + 8]
// 006962c4  50                   push eax
// 006962c5  e8f6f4ffff           call 0x6957c0
// 006962ca  33c0                 xor eax, eax
// 006962cc  c20800               ret 8
// library xtp-11.2.2-vc8/Source\Common\XTPToolTipContext.cpp (function ?OnRelayEvent@CXTPToolTipContextToolTip@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPToolTipContext.cpp
