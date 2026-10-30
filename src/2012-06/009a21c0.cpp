// from server: 100% by auto
// roc 2012-06 009a21c0  unit: CXTPCommandBars  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009a21c0
//
// 009a21c0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 009a21c4  85c9                 test ecx, ecx
// 009a21c6  740f                 je 0x9a21d7
// 009a21c8  e8e3eeffff           call 0x9a10b0
// 009a21cd  85c0                 test eax, eax
// 009a21cf  7406                 je 0x9a21d7
// 009a21d1  b801000000           mov eax, 1
// 009a21d6  c3                   ret 
// 009a21d7  33c0                 xor eax, eax
// 009a21d9  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPCommandBars.cpp (function ?IsToolBarVisible@@YAHPAVCXTPToolBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPCommandBars.cpp
