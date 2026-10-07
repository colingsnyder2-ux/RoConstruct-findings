// roc 2011-06 00901880  unit: CXTCaptionButtonTheme  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00901880
//
// 00901880  8b4128               mov eax, dword ptr [ecx + 0x28]
// 00901883  83f8ff               cmp eax, -1
// 00901886  7503                 jne 0x90188b
// 00901888  8b4124               mov eax, dword ptr [ecx + 0x24]
// 0090188b  c3                   ret 
// library xtp-15.2.1/Source\Controls\Deprecated\XTButtonTheme.cpp (function ?GetColorFace@CXTButtonTheme@@UAEKXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Deprecated/XTButtonTheme.cpp
