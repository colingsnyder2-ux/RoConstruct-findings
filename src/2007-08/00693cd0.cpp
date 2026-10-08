// from server: 100% by auto
// roc 2007-08 00693cd0  unit: CXTPStatusBar  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00693cd0
//
// 00693cd0  8b442408             mov eax, dword ptr [esp + 8]
// 00693cd4  89812c010000         mov dword ptr [ecx + 0x12c], eax
// 00693cda  33c0                 xor eax, eax
// 00693cdc  c20800               ret 8
// library xtp-11.2.2-vc8/Source\Common\XTPToolTipContext.cpp (function ?OnSetImage@CXTPToolTipContextToolTip@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPToolTipContext.cpp
