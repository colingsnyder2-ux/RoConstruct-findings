// roc 2007-08 006ca4d0  unit: CXTPToolBar::CControlButtonHide  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006ca4d0
//
// 006ca4d0  c7011c797d00         mov dword ptr [ecx], 0x7d791c
// 006ca4d6  c74120bc787d00       mov dword ptr [ecx + 0x20], 0x7d78bc
// 006ca4dd  e91e1af7ff           jmp 0x63bf00
// library xtp-11.2.2-vc8/Source\CommandBars\XTPControlButton.cpp (function ??1CXTPControlButton@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPControlButton.cpp
