// roc 2011-06 00871aa0  unit: CXTPToolTipContext::CHTMLToolTip  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00871aa0
//
// 00871aa0  8b8194000000         mov eax, dword ptr [ecx + 0x94]
// 00871aa6  83f8ff               cmp eax, -1
// 00871aa9  751a                 jne 0x871ac5
// 00871aab  83793005             cmp dword ptr [ecx + 0x30], 5
// 00871aaf  7506                 jne 0x871ab7
// 00871ab1  b84c4c4c00           mov eax, 0x4c4c4c
// 00871ab6  c3                   ret 
// 00871ab7  e82439fdff           call 0x8453e0
// 00871abc  6a17                 push 0x17
// 00871abe  8bc8                 mov ecx, eax
// 00871ac0  e8eb30fdff           call 0x844bb0
// 00871ac5  c3                   ret 
// library xtp-11.2.2/Source\Common\XTPToolTipContext.cpp (function ?GetTipTextColor@CXTPToolTipContext@@QBEKXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPToolTipContext.cpp
