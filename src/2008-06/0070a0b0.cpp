// from server: 100% by auto
// roc 2008-06 0070a0b0  unit: CXTPToolTipContext::CHTMLToolTip  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0070a0b0
//
// 0070a0b0  8b8190000000         mov eax, dword ptr [ecx + 0x90]
// 0070a0b6  83f8ff               cmp eax, -1
// 0070a0b9  750e                 jne 0x70a0c9
// 0070a0bb  e8805cfdff           call 0x6dfd40
// 0070a0c0  6a18                 push 0x18
// 0070a0c2  8bc8                 mov ecx, eax
// 0070a0c4  e85754fdff           call 0x6df520
// 0070a0c9  c3                   ret 
// library xtp-11.2.2/Source\Common\XTPToolTipContext.cpp (function ?GetTipBkColor@CXTPToolTipContext@@QBEKXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPToolTipContext.cpp
