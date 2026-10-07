// roc 2008-06 006a4950  unit: CXTPCommandBar  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a4950
//
// 006a4950  85c9                 test ecx, ecx
// 006a4952  7518                 jne 0x6a496c
// 006a4954  6810306a00           push 0x6a3010
// 006a4959  b99ced9700           mov ecx, 0x97ed9c
// 006a495e  e877761100           call 0x7bbfda
// 006a4963  85c0                 test eax, eax
// 006a4965  750a                 jne 0x6a4971
// 006a4967  e9d8bfffff           jmp 0x6a0944
// 006a496c  e86ffcffff           call 0x6a45e0
// 006a4971  8bc8                 mov ecx, eax
// 006a4973  e958880700           jmp 0x71d1d0
// library xtp-11.2.2/Source\CommandBars\XTPCommandBars.cpp (function ?ClosePopups@CXTPCommandBars@@QBEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCommandBars.cpp
