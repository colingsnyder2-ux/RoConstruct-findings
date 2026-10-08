// roc 2012-06 009e9ff0  unit: CInstanceRecord::CNameItem  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e9ff0
//
// 009e9ff0  8b8194000000         mov eax, dword ptr [ecx + 0x94]
// 009e9ff6  83f8ff               cmp eax, -1
// 009e9ff9  751a                 jne 0x9ea015
// 009e9ffb  83793005             cmp dword ptr [ecx + 0x30], 5
// 009e9fff  7506                 jne 0x9ea007
// 009ea001  b84c4c4c00           mov eax, 0x4c4c4c
// 009ea006  c3                   ret 
// 009ea007  e85438fdff           call 0x9bd860
// 009ea00c  6a17                 push 0x17
// 009ea00e  8bc8                 mov ecx, eax
// 009ea010  e8cb2ffdff           call 0x9bcfe0
// 009ea015  c3                   ret 
// library xtp-11.2.2/Source\Common\XTPToolTipContext.cpp (function ?GetTipTextColor@CXTPToolTipContext@@QBEKXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPToolTipContext.cpp
