// from server: 100% by auto
// roc 2012-06 00a79a60  unit: CXTCaptionButtonTheme  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a79a60
//
// 00a79a60  8b4128               mov eax, dword ptr [ecx + 0x28]
// 00a79a63  83f8ff               cmp eax, -1
// 00a79a66  7503                 jne 0xa79a6b
// 00a79a68  8b4124               mov eax, dword ptr [ecx + 0x24]
// 00a79a6b  c3                   ret 
// library xtp-15.2.1/Source\Controls\Deprecated\XTButtonTheme.cpp (function ?GetColorFace@CXTButtonTheme@@UAEKXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Deprecated/XTButtonTheme.cpp
