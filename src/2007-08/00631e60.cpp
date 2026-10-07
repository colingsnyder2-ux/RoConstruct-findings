// roc 2007-08 00631e60  unit: CXTPCommandBar  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00631e60
//
// 00631e60  56                   push esi
// 00631e61  8bf1                 mov esi, ecx
// 00631e63  e8181b0100           call 0x643980
// 00631e68  85c0                 test eax, eax
// 00631e6a  740c                 je 0x631e78
// 00631e6c  397040               cmp dword ptr [eax + 0x40], esi
// 00631e6f  7507                 jne 0x631e78
// 00631e71  8b4044               mov eax, dword ptr [eax + 0x44]
// 00631e74  85c0                 test eax, eax
// 00631e76  7f02                 jg 0x631e7a
// 00631e78  33c0                 xor eax, eax
// 00631e7a  5e                   pop esi
// 00631e7b  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPCommandBars.cpp (function ?IsKeyboardTipsVisible@CXTPCommandBar@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPCommandBars.cpp
