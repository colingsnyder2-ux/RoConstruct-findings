// from server: 100% by auto
// roc 2008-06 00703400  unit: CXTPTabClientWnd::CWorkspace  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00703400
//
// 00703400  6810306a00           push 0x6a3010
// 00703405  b99ced9700           mov ecx, 0x97ed9c
// 0070340a  e8cb8b0b00           call 0x7bbfda
// 0070340f  85c0                 test eax, eax
// 00703411  7505                 jne 0x703418
// 00703413  e92cd5f9ff           jmp 0x6a0944
// 00703418  6a00                 push 0
// 0070341a  8bc8                 mov ecx, eax
// 0070341c  e8ef9b0100           call 0x71d010
// 00703421  f7d8                 neg eax
// 00703423  1bc0                 sbb eax, eax
// 00703425  f7d8                 neg eax
// 00703427  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?IsMouseLocked@CWorkspace@CXTPTabClientWnd@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
