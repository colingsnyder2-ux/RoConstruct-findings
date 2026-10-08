// from server: 100% by auto
// roc 2012-06 009ec980  unit: CXTPToolTipContext  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009ec980
//
// 009ec980  8b442408             mov eax, dword ptr [esp + 8]
// 009ec984  50                   push eax
// 009ec985  e866f3ffff           call 0x9ebcf0
// 009ec98a  c20800               ret 8
// library xtp-15.2.1/Source\Common\XTPToolTipContext.cpp (function ?OnAddTool@CXTPToolTipContextToolTip@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPToolTipContext.cpp
