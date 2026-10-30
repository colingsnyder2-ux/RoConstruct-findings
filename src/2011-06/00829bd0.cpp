// from server: 100% by auto
// roc 2011-06 00829bd0  unit: CXTPCommandBars  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00829bd0
//
// 00829bd0  85c9                 test ecx, ecx
// 00829bd2  7505                 jne 0x829bd9
// 00829bd4  33c0                 xor eax, eax
// 00829bd6  c20400               ret 4
// 00829bd9  8b89bc000000         mov ecx, dword ptr [ecx + 0xbc]
// 00829bdf  e9bc30feff           jmp 0x80cca0
// library xtp-15.2.1/Source\CommandBars\XTPCommandBars.cpp (function ?FindAction@CXTPCommandBars@@QBEPAVCXTPControlAction@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPCommandBars.cpp
