// roc 2008-06 007923a0  unit: CXTCaptionButton  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007923a0
//
// 007923a0  8b899c000000         mov ecx, dword ptr [ecx + 0x9c]
// 007923a6  85c9                 test ecx, ecx
// 007923a8  7405                 je 0x7923af
// 007923aa  e9b1adf2ff           jmp 0x6bd160
// 007923af  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTButton.cpp (function ?CleanUpGDI@CXTButton@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTButton.cpp
