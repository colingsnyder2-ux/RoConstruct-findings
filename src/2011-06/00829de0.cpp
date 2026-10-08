// from server: 100% by auto
// roc 2011-06 00829de0  unit: CXTPCommandBar  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00829de0
//
// 00829de0  e8ab0cffff           call 0x81aa90
// 00829de5  85c0                 test eax, eax
// 00829de7  7506                 jne 0x829def
// 00829de9  b801000000           mov eax, 1
// 00829dee  c3                   ret 
// 00829def  8b80b0000000         mov eax, dword ptr [eax + 0xb0]
// 00829df5  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPCommandBars.cpp (function ?IsKeyboardCuesVisible@CXTPCommandBar@@UBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPCommandBars.cpp
