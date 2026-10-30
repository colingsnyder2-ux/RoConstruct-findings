// from server: 100% by auto
// roc 2011-06 00871a30  unit: CXTPToolTipContext::CHTMLToolTip  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00871a30
//
// 00871a30  8b8190000000         mov eax, dword ptr [ecx + 0x90]
// 00871a36  83f8ff               cmp eax, -1
// 00871a39  750e                 jne 0x871a49
// 00871a3b  e8a039fdff           call 0x8453e0
// 00871a40  6a18                 push 0x18
// 00871a42  8bc8                 mov ecx, eax
// 00871a44  e86731fdff           call 0x844bb0
// 00871a49  c3                   ret 
// library xtp-15.2.1/Source\Common\XTPToolTipContext.cpp (function ?GetTipBkColor@CXTPToolTipContext@@QBEKXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPToolTipContext.cpp
