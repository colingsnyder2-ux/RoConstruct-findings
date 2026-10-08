// from server: 100% by auto
// roc 2012-06 009a4030  unit: CXTPCommandBar  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009a4030
//
// 009a4030  85c9                 test ecx, ecx
// 009a4032  7518                 jne 0x9a404c
// 009a4034  68704e9800           push 0x984e70
// 009a4039  b958a0e500           mov ecx, 0xe5a058
// 009a403e  e83b550f00           call 0xa9957e
// 009a4043  85c0                 test eax, eax
// 009a4045  750a                 jne 0x9a4051
// 009a4047  e974e3fdff           jmp 0x9823c0
// 009a404c  e86ffcffff           call 0x9a3cc0
// 009a4051  8bc8                 mov ecx, eax
// 009a4053  e9184d0500           jmp 0x9f8d70
// library xtp-15.2.1/Source\CommandBars\XTPCommandBars.cpp (function ?ClosePopups@CXTPCommandBars@@QBEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPCommandBars.cpp
