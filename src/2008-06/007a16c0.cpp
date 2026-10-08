// from server: 100% by auto
// roc 2008-06 007a16c0  unit: CXTMemDC  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007a16c0
//
// 007a16c0  8b01                 mov eax, dword ptr [ecx]
// 007a16c2  8b4904               mov ecx, dword ptr [ecx + 4]
// 007a16c5  50                   push eax
// 007a16c6  e857a90100           call 0x7bc022
// 007a16cb  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTButtonTheme.cpp (function ??1CXTContextBkModeHandler@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTButtonTheme.cpp
