// roc 2011-06 00865fd0  unit: CXTPTabClientWnd::CWorkspace  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00865fd0
//
// 00865fd0  68b0cb8000           push 0x80cbb0
// 00865fd5  b9e88ed100           mov ecx, 0xd18ee8
// 00865fda  e8e5651600           call 0x9cc5c4
// 00865fdf  85c0                 test eax, eax
// 00865fe1  7505                 jne 0x865fe8
// 00865fe3  e92243faff           jmp 0x80a30a
// 00865fe8  6a00                 push 0
// 00865fea  8bc8                 mov ecx, eax
// 00865fec  e80fa60100           call 0x880600
// 00865ff1  f7d8                 neg eax
// 00865ff3  1bc0                 sbb eax, eax
// 00865ff5  f7d8                 neg eax
// 00865ff7  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPTabClientWnd.cpp (function ?IsMouseLocked@CWorkspace@CXTPTabClientWnd@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPTabClientWnd.cpp
