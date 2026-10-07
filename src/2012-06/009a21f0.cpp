// roc 2012-06 009a21f0  unit: CXTPCommandBars  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009a21f0
//
// 009a21f0  85c9                 test ecx, ecx
// 009a21f2  7505                 jne 0x9a21f9
// 009a21f4  33c0                 xor eax, eax
// 009a21f6  c20400               ret 4
// 009a21f9  8b89bc000000         mov ecx, dword ptr [ecx + 0xbc]
// 009a21ff  e93c2dfeff           jmp 0x984f40
// library xtp-15.2.1/Source\CommandBars\XTPCommandBars.cpp (function ?FindAction@CXTPCommandBars@@QBEPAVCXTPControlAction@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPCommandBars.cpp
