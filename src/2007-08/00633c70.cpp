// roc 2007-08 00633c70  unit: CXTPCommandBar  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00633c70
//
// 00633c70  85c9                 test ecx, ecx
// 00633c72  7518                 jne 0x633c8c
// 00633c74  6880226300           push 0x632280
// 00633c79  b914938c00           mov ecx, 0x8c9314
// 00633c7e  e8e7461000           call 0x73836a
// 00633c83  85c0                 test eax, eax
// 00633c85  750a                 jne 0x633c91
// 00633c87  e994c2ffff           jmp 0x62ff20
// 00633c8c  e86ffcffff           call 0x633900
// 00633c91  8bc8                 mov ecx, eax
// 00633c93  e9d8fd0600           jmp 0x6a3a70
// library xtp-11.2.2-vc8/Source\CommandBars\XTPCommandBars.cpp (function ?ClosePopups@CXTPCommandBars@@QBEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPCommandBars.cpp
