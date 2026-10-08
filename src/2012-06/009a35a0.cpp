// from server: 100% by auto
// roc 2012-06 009a35a0  unit: MyXTPCommandBars  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009a35a0
//
// 009a35a0  e82bf6ffff           call 0x9a2bd0
// 009a35a5  85c0                 test eax, eax
// 009a35a7  7407                 je 0x9a35b0
// 009a35a9  8bc8                 mov ecx, eax
// 009a35ab  e9608d0700           jmp 0xa1c310
// 009a35b0  c20400               ret 4
// library xtp-15.2.1/Source\CommandBars\XTPCommandBars.cpp (function ?OnToolBarRemoved@CXTPCommandBars@@MAEXPAVCXTPToolBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPCommandBars.cpp
