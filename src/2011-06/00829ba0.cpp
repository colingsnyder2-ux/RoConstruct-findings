// from server: 100% by auto
// roc 2011-06 00829ba0  unit: CXTPCommandBars  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00829ba0
//
// 00829ba0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00829ba4  85c9                 test ecx, ecx
// 00829ba6  740f                 je 0x829bb7
// 00829ba8  e8e3eeffff           call 0x828a90
// 00829bad  85c0                 test eax, eax
// 00829baf  7406                 je 0x829bb7
// 00829bb1  b801000000           mov eax, 1
// 00829bb6  c3                   ret 
// 00829bb7  33c0                 xor eax, eax
// 00829bb9  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPCommandBars.cpp (function ?IsToolBarVisible@@YAHPAVCXTPToolBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPCommandBars.cpp
