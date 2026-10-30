// from server: 100% by auto
// roc 2012-06 009ec990  unit: CXTPToolTipContext  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009ec990
//
// 009ec990  8b442404             mov eax, dword ptr [esp + 4]
// 009ec994  50                   push eax
// 009ec995  e816f4ffff           call 0x9ebdb0
// 009ec99a  33c0                 xor eax, eax
// 009ec99c  c20800               ret 8
// library xtp-15.2.1/Source\Common\XTPToolTipContext.cpp (function ?OnActivate@CXTPToolTipContextToolTip@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPToolTipContext.cpp
