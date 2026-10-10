// roc 2012-06 00a79860  unit: CXTMemDC  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a79860
//
// 00a79860  8bc1                 mov eax, ecx
// 00a79862  8b4804               mov ecx, dword ptr [eax + 4]
// 00a79865  8b11                 mov edx, dword ptr [ecx]
// 00a79867  8b00                 mov eax, dword ptr [eax]
// 00a79869  8b5238               mov edx, dword ptr [edx + 0x38]
// 00a7986c  50                   push eax
// 00a7986d  ffd2                 call edx
// 00a7986f  c3                   ret 
// library xtp-15.2.1-shared-mfc/Source\Controls\Deprecated\XTButtonTheme.cpp (function ??1CXTPContextTextColorHandler@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/Controls/Deprecated/XTButtonTheme.cpp
