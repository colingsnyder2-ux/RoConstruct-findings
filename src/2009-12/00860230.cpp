// roc 2009-12 00860230  unit: CXTPToolTipContext::CHTMLToolTip  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00860230
//
// 00860230  8b8194000000         mov eax, dword ptr [ecx + 0x94]
// 00860236  83f8ff               cmp eax, -1
// 00860239  751a                 jne 0x860255
// 0086023b  83793005             cmp dword ptr [ecx + 0x30], 5
// 0086023f  7506                 jne 0x860247
// 00860241  b84c4c4c00           mov eax, 0x4c4c4c
// 00860246  c3                   ret 
// 00860247  e884f7fcff           call 0x82f9d0
// 0086024c  6a17                 push 0x17
// 0086024e  8bc8                 mov ecx, eax
// 00860250  e8abeefcff           call 0x82f100
// 00860255  c3                   ret 
// library xtp-11.2.2/Source\Common\XTPToolTipContext.cpp (function ?GetTipTextColor@CXTPToolTipContext@@QBEKXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPToolTipContext.cpp
