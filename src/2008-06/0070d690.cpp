// from server: 100% by auto
// roc 2008-06 0070d690  unit: CSelectionCaption  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0070d690
//
// 0070d690  c70144cf8500         mov dword ptr [ecx], 0x85cf44
// 0070d696  83c10c               add ecx, 0xc
// 0070d699  c701a0e88000         mov dword ptr [ecx], 0x80e8a0
// 0070d69f  e9fc3ad0ff           jmp 0x4111a0
// library xtp-11.2.2/Source\Controls\XTThemeManager.cpp (function ??1CXTThemeManagerStyle@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTThemeManager.cpp
