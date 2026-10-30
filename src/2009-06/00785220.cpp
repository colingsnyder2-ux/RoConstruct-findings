// roc 2009-06 00785220  unit: CInstanceRecord::CNameItem  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00785220
//
// 00785220  8b8194000000         mov eax, dword ptr [ecx + 0x94]
// 00785226  83f8ff               cmp eax, -1
// 00785229  751a                 jne 0x785245
// 0078522b  83793005             cmp dword ptr [ecx + 0x30], 5
// 0078522f  7506                 jne 0x785237
// 00785231  b84c4c4c00           mov eax, 0x4c4c4c
// 00785236  c3                   ret 
// 00785237  e8e4f8fcff           call 0x754b20
// 0078523c  6a17                 push 0x17
// 0078523e  8bc8                 mov ecx, eax
// 00785240  e85bf0fcff           call 0x7542a0
// 00785245  c3                   ret 
// library xtp-11.2.2/Source\Common\XTPToolTipContext.cpp (function ?GetTipTextColor@CXTPToolTipContext@@QBEKXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPToolTipContext.cpp
