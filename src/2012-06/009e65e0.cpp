// roc 2012-06 009e65e0  unit: CSelectionCaption  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e65e0
//
// 009e65e0  c7014c78c100         mov dword ptr [ecx], 0xc1784c
// 009e65e6  83c10c               add ecx, 0xc
// 009e65e9  c701506cb400         mov dword ptr [ecx], 0xb46c50
// 009e65ef  e90c06a3ff           jmp 0x416c00
// library xtp-15.2.1/Source\CommandBars\XTPResourceTheme.cpp (function ??1CXTPFramePaintManager@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPResourceTheme.cpp
