// roc 2010-06 00814210  unit: CXTPToolTipContext::CHTMLToolTip  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00814210
//
// 00814210  8b8194000000         mov eax, dword ptr [ecx + 0x94]
// 00814216  83f8ff               cmp eax, -1
// 00814219  751a                 jne 0x814235
// 0081421b  83793005             cmp dword ptr [ecx + 0x30], 5
// 0081421f  7506                 jne 0x814227
// 00814221  b84c4c4c00           mov eax, 0x4c4c4c
// 00814226  c3                   ret 
// 00814227  e8f4f8fcff           call 0x7e3b20
// 0081422c  6a17                 push 0x17
// 0081422e  8bc8                 mov ecx, eax
// 00814230  e87bf0fcff           call 0x7e32b0
// 00814235  c3                   ret 
// library xtp-11.2.2/Source\Common\XTPToolTipContext.cpp (function ?GetTipTextColor@CXTPToolTipContext@@QBEKXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPToolTipContext.cpp
