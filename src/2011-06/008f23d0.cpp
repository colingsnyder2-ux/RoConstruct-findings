// from server: 100% by auto
// roc 2011-06 008f23d0  unit: CXTCaptionButton  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f23d0
//
// 008f23d0  8b899c000000         mov ecx, dword ptr [ecx + 0x9c]
// 008f23d6  85c9                 test ecx, ecx
// 008f23d8  7405                 je 0x8f23df
// 008f23da  e98104f3ff           jmp 0x822860
// 008f23df  c3                   ret 
// library xtp-15.2.1/Source\Controls\Deprecated\XTButton.cpp (function ?CleanUpGDI@CXTButton@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Deprecated/XTButton.cpp
