// roc 2012-06 009dc7e0  unit: CXTPTabClientWnd  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009dc7e0
//
// 009dc7e0  56                   push esi
// 009dc7e1  8bf1                 mov esi, ecx
// 009dc7e3  8b8e84000000         mov ecx, dword ptr [esi + 0x84]
// 009dc7e9  e8eacd0b00           call 0xa995d8
// 009dc7ee  a900004000           test eax, 0x400000
// 009dc7f3  b801000000           mov eax, 1
// 009dc7f8  7506                 jne 0x9dc800
// 009dc7fa  8b8618010000         mov eax, dword ptr [esi + 0x118]
// 009dc800  5e                   pop esi
// 009dc801  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?IsLayoutRTL@CXTPTabClientWnd@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
