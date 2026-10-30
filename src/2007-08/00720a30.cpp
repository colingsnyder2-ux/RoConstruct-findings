// from server: 100% by auto
// roc 2007-08 00720a30  unit: CXTCaptionButtonTheme  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00720a30
//
// 00720a30  8b4128               mov eax, dword ptr [ecx + 0x28]
// 00720a33  83f8ff               cmp eax, -1
// 00720a36  7503                 jne 0x720a3b
// 00720a38  8b4124               mov eax, dword ptr [ecx + 0x24]
// 00720a3b  c3                   ret 
// library xtp-11.2.2-vc8/Source\Controls\XTButtonTheme.cpp (function ?GetColorFace@CXTButtonTheme@@UAEKXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTButtonTheme.cpp
