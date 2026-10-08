// from server: 100% by auto
// roc 2008-06 006a28e0  unit: CXTPCommandBars  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a28e0
//
// 006a28e0  85c9                 test ecx, ecx
// 006a28e2  7505                 jne 0x6a28e9
// 006a28e4  33c0                 xor eax, eax
// 006a28e6  c20400               ret 4
// 006a28e9  8b89bc000000         mov ecx, dword ptr [ecx + 0xbc]
// 006a28ef  e9ec8e0000           jmp 0x6ab7e0
// library xtp-11.2.2/Source\CommandBars\XTPCommandBars.cpp (function ?FindAction@CXTPCommandBars@@QBEPAVCXTPControlAction@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCommandBars.cpp
