// from server: 100% by auto
// roc 2012-06 009a2410  unit: CXTPCommandBar  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009a2410
//
// 009a2410  e8db08ffff           call 0x992cf0
// 009a2415  85c0                 test eax, eax
// 009a2417  7506                 jne 0x9a241f
// 009a2419  b801000000           mov eax, 1
// 009a241e  c3                   ret 
// 009a241f  8b80b0000000         mov eax, dword ptr [eax + 0xb0]
// 009a2425  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPCommandBars.cpp (function ?IsKeyboardCuesVisible@CXTPCommandBar@@UBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPCommandBars.cpp
