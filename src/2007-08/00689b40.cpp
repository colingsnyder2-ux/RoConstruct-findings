// roc 2007-08 00689b40  unit: CXTPTabClientWnd  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00689b40
//
// 00689b40  56                   push esi
// 00689b41  8bf1                 mov esi, ecx
// 00689b43  8b8e84000000         mov ecx, dword ptr [esi + 0x84]
// 00689b49  e8d4e70a00           call 0x738322
// 00689b4e  a900004000           test eax, 0x400000
// 00689b53  b801000000           mov eax, 1
// 00689b58  7506                 jne 0x689b60
// 00689b5a  8b8618010000         mov eax, dword ptr [esi + 0x118]
// 00689b60  5e                   pop esi
// 00689b61  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPTabClientWnd.cpp (function ?IsLayoutRTL@CXTPTabClientWnd@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPTabClientWnd.cpp
