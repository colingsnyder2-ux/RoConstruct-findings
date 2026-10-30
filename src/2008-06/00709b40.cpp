// from server: 100% by auto
// roc 2008-06 00709b40  unit: CXTPToolTipContextToolTip  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00709b40
//
// 00709b40  8b442408             mov eax, dword ptr [esp + 8]
// 00709b44  89812c010000         mov dword ptr [ecx + 0x12c], eax
// 00709b4a  33c0                 xor eax, eax
// 00709b4c  c20800               ret 8
// library xtp-11.2.2/Source\Common\XTPToolTipContext.cpp (function ?OnSetImage@CXTPToolTipContextToolTip@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPToolTipContext.cpp
