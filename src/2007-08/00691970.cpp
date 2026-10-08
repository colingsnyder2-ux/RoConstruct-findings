// from server: 100% by auto
// roc 2007-08 00691970  unit: CSelectionCaption  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00691970
//
// 00691970  c7016c087d00         mov dword ptr [ecx], 0x7d086c
// 00691976  83c10c               add ecx, 0xc
// 00691979  c70100837800         mov dword ptr [ecx], 0x788300
// 0069197f  e9fcdcd8ff           jmp 0x41f680
// library xtp-11.2.2-vc8/Source\Controls\XTThemeManager.cpp (function ??1CXTThemeManagerStyle@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTThemeManager.cpp
