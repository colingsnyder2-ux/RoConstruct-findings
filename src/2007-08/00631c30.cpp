// roc 2007-08 00631c30  unit: CXTPCommandBars  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00631c30
//
// 00631c30  85c9                 test ecx, ecx
// 00631c32  7505                 jne 0x631c39
// 00631c34  33c0                 xor eax, eax
// 00631c36  c20400               ret 4
// 00631c39  8b89bc000000         mov ecx, dword ptr [ecx + 0xbc]
// 00631c3f  e95c890000           jmp 0x63a5a0
// library xtp-11.2.2-vc8/Source\CommandBars\XTPCommandBars.cpp (function ?FindAction@CXTPCommandBars@@QBEPAVCXTPControlAction@@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPCommandBars.cpp
