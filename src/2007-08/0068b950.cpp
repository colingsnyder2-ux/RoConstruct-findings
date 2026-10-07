// roc 2007-08 0068b950  unit: CXTPTabClientWnd::CWorkspace  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0068b950
//
// 0068b950  6880226300           push 0x632280
// 0068b955  b914938c00           mov ecx, 0x8c9314
// 0068b95a  e80bca0a00           call 0x73836a
// 0068b95f  85c0                 test eax, eax
// 0068b961  7505                 jne 0x68b968
// 0068b963  e9b845faff           jmp 0x62ff20
// 0068b968  6a00                 push 0
// 0068b96a  8bc8                 mov ecx, eax
// 0068b96c  e8cf7f0100           call 0x6a3940
// 0068b971  f7d8                 neg eax
// 0068b973  1bc0                 sbb eax, eax
// 0068b975  f7d8                 neg eax
// 0068b977  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPTabClientWnd.cpp (function ?IsMouseLocked@CWorkspace@CXTPTabClientWnd@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPTabClientWnd.cpp
