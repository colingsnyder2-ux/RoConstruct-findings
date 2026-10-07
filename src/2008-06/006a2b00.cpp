// roc 2008-06 006a2b00  unit: CXTPCommandBar  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a2b00
//
// 006a2b00  e80b230100           call 0x6b4e10
// 006a2b05  85c0                 test eax, eax
// 006a2b07  7506                 jne 0x6a2b0f
// 006a2b09  b801000000           mov eax, 1
// 006a2b0e  c3                   ret 
// 006a2b0f  8b80b0000000         mov eax, dword ptr [eax + 0xb0]
// 006a2b15  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPCommandBars.cpp (function ?IsKeyboardCuesVisible@CXTPCommandBar@@UBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCommandBars.cpp
