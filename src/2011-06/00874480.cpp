// from server: 100% by auto
// roc 2011-06 00874480  unit: CXTPToolTipContext  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00874480
//
// 00874480  8b442408             mov eax, dword ptr [esp + 8]
// 00874484  50                   push eax
// 00874485  e8a6f6ffff           call 0x873b30
// 0087448a  33c0                 xor eax, eax
// 0087448c  c20800               ret 8
// library xtp-15.2.1/Source\Common\XTPToolTipContext.cpp (function ?OnRelayEvent@CXTPToolTipContextToolTip@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPToolTipContext.cpp
