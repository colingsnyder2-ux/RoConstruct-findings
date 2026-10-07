// roc 2008-06 0070cb40  unit: CXTPToolTipContext  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0070cb40
//
// 0070cb40  8b442408             mov eax, dword ptr [esp + 8]
// 0070cb44  50                   push eax
// 0070cb45  e856f4ffff           call 0x70bfa0
// 0070cb4a  33c0                 xor eax, eax
// 0070cb4c  c20800               ret 8
// library xtp-11.2.2/Source\Common\XTPToolTipContext.cpp (function ?OnRelayEvent@CXTPToolTipContextToolTip@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPToolTipContext.cpp
