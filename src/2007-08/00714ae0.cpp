// roc 2007-08 00714ae0  unit: CXTCaptionButton  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00714ae0
//
// 00714ae0  8b899c000000         mov ecx, dword ptr [ecx + 0x9c]
// 00714ae6  85c9                 test ecx, ecx
// 00714ae8  7405                 je 0x714aef
// 00714aea  e9213cf3ff           jmp 0x648710
// 00714aef  c3                   ret 
// library xtp-11.2.2-vc8/Source\Controls\XTButton.cpp (function ?CleanUpGDI@CXTButton@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTButton.cpp
