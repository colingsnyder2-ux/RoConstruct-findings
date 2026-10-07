// roc 2012-06 00a79850  unit: CXTMemDC  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a79850
//
// 00a79850  8b01                 mov eax, dword ptr [ecx]
// 00a79852  8b4904               mov ecx, dword ptr [ecx + 4]
// 00a79855  50                   push eax
// 00a79856  e84dfd0100           call 0xa995a8
// 00a7985b  c3                   ret 
// library xtp-15.2.1/Source\Controls\Deprecated\XTButtonTheme.cpp (function ??1CXTPContextBkModeHandler@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Deprecated/XTButtonTheme.cpp
