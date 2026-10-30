// from server: 100% by auto
// roc 2008-06 006a28b0  unit: CXTPCommandBars  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a28b0
//
// 006a28b0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006a28b4  85c9                 test ecx, ecx
// 006a28b6  740f                 je 0x6a28c7
// 006a28b8  e8e30f0200           call 0x6c38a0
// 006a28bd  85c0                 test eax, eax
// 006a28bf  7406                 je 0x6a28c7
// 006a28c1  b801000000           mov eax, 1
// 006a28c6  c3                   ret 
// 006a28c7  33c0                 xor eax, eax
// 006a28c9  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPCommandBars.cpp (function ?IsToolBarVisible@@YAHPAVCXTPToolBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCommandBars.cpp
