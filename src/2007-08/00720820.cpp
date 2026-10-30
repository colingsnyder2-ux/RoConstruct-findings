// from server: 100% by tester
// roc 2008-06 007a16d0  unit: CXTMemDC  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007a16d0
//
// 007a16d0  8bc1                 mov eax, ecx
// 007a16d2  8b4804               mov ecx, dword ptr [eax + 4]
// 007a16d5  8b11                 mov edx, dword ptr [ecx]
// 007a16d7  8b00                 mov eax, dword ptr [eax]
// 007a16d9  8b5238               mov edx, dword ptr [edx + 0x38]
// 007a16dc  50                   push eax
// 007a16dd  ffd2                 call edx
// 007a16df  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\Controls\XTButtonTheme.cpp (function ??1CXTContextTextColorHandler@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Controls/XTButtonTheme.cpp
