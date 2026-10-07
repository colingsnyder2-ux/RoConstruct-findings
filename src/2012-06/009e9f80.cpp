// roc 2012-06 009e9f80  unit: CInstanceRecord::CNameItem  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e9f80
//
// 009e9f80  8b8190000000         mov eax, dword ptr [ecx + 0x90]
// 009e9f86  83f8ff               cmp eax, -1
// 009e9f89  750e                 jne 0x9e9f99
// 009e9f8b  e8d038fdff           call 0x9bd860
// 009e9f90  6a18                 push 0x18
// 009e9f92  8bc8                 mov ecx, eax
// 009e9f94  e84730fdff           call 0x9bcfe0
// 009e9f99  c3                   ret 
// library xtp-15.2.1/Source\Common\XTPToolTipContext.cpp (function ?GetTipBkColor@CXTPToolTipContext@@QBEKXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPToolTipContext.cpp
