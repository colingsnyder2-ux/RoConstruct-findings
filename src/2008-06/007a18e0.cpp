// roc 2008-06 007a18e0  unit: CXTCaptionButtonTheme  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007a18e0
//
// 007a18e0  8b4128               mov eax, dword ptr [ecx + 0x28]
// 007a18e3  83f8ff               cmp eax, -1
// 007a18e6  7503                 jne 0x7a18eb
// 007a18e8  8b4124               mov eax, dword ptr [ecx + 0x24]
// 007a18eb  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTButtonTheme.cpp (function ?GetColorFace@CXTButtonTheme@@UAEKXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTButtonTheme.cpp
