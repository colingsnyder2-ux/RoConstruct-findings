// from server: 100% by auto
// roc 2007-08 006962a0  unit: CXTPToolTipContext  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006962a0
//
// 006962a0  8b442404             mov eax, dword ptr [esp + 4]
// 006962a4  50                   push eax
// 006962a5  e886eeffff           call 0x695130
// 006962aa  33c0                 xor eax, eax
// 006962ac  c20800               ret 8
// library xtp-11.2.2-vc8/Source\Common\XTPToolTipContext.cpp (function ?OnActivate@CXTPToolTipContextToolTip@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPToolTipContext.cpp
