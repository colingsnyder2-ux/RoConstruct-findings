// from server: 100% by auto
// roc 2007-08 00720810  unit: CXTShadowHook  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00720810
//
// 00720810  8b01                 mov eax, dword ptr [ecx]
// 00720812  8b4904               mov ecx, dword ptr [ecx + 4]
// 00720815  50                   push eax
// 00720816  e8cd7b0100           call 0x7383e8
// 0072081b  c3                   ret 
// library xtp-11.2.2-vc8/Source\Controls\XTButtonTheme.cpp (function ??1CXTContextBkModeHandler@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTButtonTheme.cpp
