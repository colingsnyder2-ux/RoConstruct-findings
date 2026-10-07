// roc 2008-06 0070cb50  unit: CXTPToolTipContext  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0070cb50
//
// 0070cb50  8b442408             mov eax, dword ptr [esp + 8]
// 0070cb54  50                   push eax
// 0070cb55  e8a6f6ffff           call 0x70c200
// 0070cb5a  33c0                 xor eax, eax
// 0070cb5c  c20800               ret 8
// library xtp-11.2.2/Source\Common\XTPToolTipContext.cpp (function ?OnRelayEvent@CXTPToolTipContextToolTip@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPToolTipContext.cpp
