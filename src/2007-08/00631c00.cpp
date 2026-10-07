// roc 2007-08 00631c00  unit: CXTPCommandBars  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00631c00
//
// 00631c00  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00631c04  85c9                 test ecx, ecx
// 00631c06  740f                 je 0x631c17
// 00631c08  e8f3ec0100           call 0x650900
// 00631c0d  85c0                 test eax, eax
// 00631c0f  7406                 je 0x631c17
// 00631c11  b801000000           mov eax, 1
// 00631c16  c3                   ret 
// 00631c17  33c0                 xor eax, eax
// 00631c19  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPCommandBars.cpp (function ?IsToolBarVisible@@YAHPAVCXTPToolBar@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPCommandBars.cpp
