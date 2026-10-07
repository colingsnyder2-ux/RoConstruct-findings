// roc 2008-06 0070cb20  unit: CXTPToolTipContext  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0070cb20
//
// 0070cb20  8b442408             mov eax, dword ptr [esp + 8]
// 0070cb24  50                   push eax
// 0070cb25  e856f3ffff           call 0x70be80
// 0070cb2a  c20800               ret 8
// library xtp-11.2.2/Source\Common\XTPToolTipContext.cpp (function ?OnAddTool@CXTPToolTipContextToolTip@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPToolTipContext.cpp
