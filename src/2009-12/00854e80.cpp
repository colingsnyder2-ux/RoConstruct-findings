// roc 2009-12 00854e80  unit: CXTPTabClientWnd  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00854e80
//
// 00854e80  56                   push esi
// 00854e81  8bf1                 mov esi, ecx
// 00854e83  8b8e84000000         mov ecx, dword ptr [esi + 0x84]
// 00854e89  e8ea150d00           call 0x926478
// 00854e8e  a900004000           test eax, 0x400000
// 00854e93  b801000000           mov eax, 1
// 00854e98  7506                 jne 0x854ea0
// 00854e9a  8b8618010000         mov eax, dword ptr [esi + 0x118]
// 00854ea0  5e                   pop esi
// 00854ea1  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?IsLayoutRTL@CXTPTabClientWnd@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
