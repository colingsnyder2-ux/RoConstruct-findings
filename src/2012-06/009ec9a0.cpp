// roc 2012-06 009ec9a0  unit: CXTPToolTipContext  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009ec9a0
//
// 009ec9a0  8b442408             mov eax, dword ptr [esp + 8]
// 009ec9a4  50                   push eax
// 009ec9a5  e866f4ffff           call 0x9ebe10
// 009ec9aa  33c0                 xor eax, eax
// 009ec9ac  c20800               ret 8
// library xtp-15.2.1/Source\Common\XTPToolTipContext.cpp (function ?OnRelayEvent@CXTPToolTipContextToolTip@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPToolTipContext.cpp
