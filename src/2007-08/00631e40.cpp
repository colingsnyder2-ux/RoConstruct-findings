// roc 2007-08 00631e40  unit: CXTPCommandBar  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00631e40
//
// 00631e40  e83b1b0100           call 0x643980
// 00631e45  85c0                 test eax, eax
// 00631e47  7506                 jne 0x631e4f
// 00631e49  b801000000           mov eax, 1
// 00631e4e  c3                   ret 
// 00631e4f  8b80b0000000         mov eax, dword ptr [eax + 0xb0]
// 00631e55  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPCommandBars.cpp (function ?IsKeyboardCuesVisible@CXTPCommandBar@@UBEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPCommandBars.cpp
