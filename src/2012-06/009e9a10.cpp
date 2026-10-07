// roc 2012-06 009e9a10  unit: CXTPToolTipContextToolTip  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e9a10
//
// 009e9a10  8b442408             mov eax, dword ptr [esp + 8]
// 009e9a14  89812c010000         mov dword ptr [ecx + 0x12c], eax
// 009e9a1a  33c0                 xor eax, eax
// 009e9a1c  c20800               ret 8
// library xtp-13.2.1/Source\Common\XTPToolTipContext.cpp (function ?OnSetImage@CXTPToolTipContextToolTip@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-13.2.1 Source/Common/XTPToolTipContext.cpp
