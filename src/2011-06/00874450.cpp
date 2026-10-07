// roc 2011-06 00874450  unit: CXTPToolTipContext  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00874450
//
// 00874450  8b442408             mov eax, dword ptr [esp + 8]
// 00874454  50                   push eax
// 00874455  e856f3ffff           call 0x8737b0
// 0087445a  c20800               ret 8
// library xtp-15.2.1/Source\Common\XTPToolTipContext.cpp (function ?OnAddTool@CXTPToolTipContextToolTip@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPToolTipContext.cpp
