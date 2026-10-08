// from server: 100% by auto
// roc 2008-06 0070cb30  unit: CXTPToolTipContext  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0070cb30
//
// 0070cb30  8b442404             mov eax, dword ptr [esp + 4]
// 0070cb34  50                   push eax
// 0070cb35  e806f4ffff           call 0x70bf40
// 0070cb3a  33c0                 xor eax, eax
// 0070cb3c  c20800               ret 8
// library xtp-11.2.2/Source\Common\XTPToolTipContext.cpp (function ?OnActivate@CXTPToolTipContextToolTip@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPToolTipContext.cpp
