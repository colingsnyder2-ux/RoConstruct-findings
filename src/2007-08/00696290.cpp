// roc 2007-08 00696290  unit: CXTPToolTipContext  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00696290
//
// 00696290  8b442408             mov eax, dword ptr [esp + 8]
// 00696294  50                   push eax
// 00696295  e8d6edffff           call 0x695070
// 0069629a  c20800               ret 8
// library xtp-11.2.2-vc8/Source\Common\XTPToolTipContext.cpp (function ?OnAddTool@CXTPToolTipContextToolTip@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPToolTipContext.cpp
