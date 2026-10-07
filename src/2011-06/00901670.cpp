// roc 2011-06 00901670  unit: CXTMemDC  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00901670
//
// 00901670  8b01                 mov eax, dword ptr [ecx]
// 00901672  8b4904               mov ecx, dword ptr [ecx + 4]
// 00901675  50                   push eax
// 00901676  e873af0c00           call 0x9cc5ee
// 0090167b  c3                   ret 
// library xtp-15.2.1/Source\Controls\Deprecated\XTButtonTheme.cpp (function ??1CXTPContextBkModeHandler@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Deprecated/XTButtonTheme.cpp
