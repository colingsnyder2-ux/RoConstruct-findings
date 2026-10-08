// from server: 100% by auto
// roc 2007-08 006775c0  unit: CXTPPopupBar  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006775c0
//
// 006775c0  8b8980010000         mov ecx, dword ptr [ecx + 0x180]
// 006775c6  8b01                 mov eax, dword ptr [ecx]
// 006775c8  8b8040010000         mov eax, dword ptr [eax + 0x140]
// 006775ce  ffe0                 jmp eax
// library xtp-11.2.2-vc8/Source\CommandBars\XTPPopupBar.cpp (function ?AdjustExcludeRect@CXTPPopupBar@@MAEXAAVCRect@@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPPopupBar.cpp
