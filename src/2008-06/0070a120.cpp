// from server: 100% by auto
// roc 2008-06 0070a120  unit: CXTPToolTipContext::CHTMLToolTip  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0070a120
//
// 0070a120  8b8194000000         mov eax, dword ptr [ecx + 0x94]
// 0070a126  83f8ff               cmp eax, -1
// 0070a129  751a                 jne 0x70a145
// 0070a12b  83793005             cmp dword ptr [ecx + 0x30], 5
// 0070a12f  7506                 jne 0x70a137
// 0070a131  b84c4c4c00           mov eax, 0x4c4c4c
// 0070a136  c3                   ret 
// 0070a137  e8045cfdff           call 0x6dfd40
// 0070a13c  6a17                 push 0x17
// 0070a13e  8bc8                 mov ecx, eax
// 0070a140  e8db53fdff           call 0x6df520
// 0070a145  c3                   ret 
// library xtp-11.2.2/Source\Common\XTPToolTipContext.cpp (function ?GetTipTextColor@CXTPToolTipContext@@QBEKXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPToolTipContext.cpp
