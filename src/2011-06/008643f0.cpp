// roc 2011-06 008643f0  unit: CXTPTabClientWnd  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008643f0
//
// 008643f0  56                   push esi
// 008643f1  8bf1                 mov esi, ecx
// 008643f3  8b8e84000000         mov ecx, dword ptr [esi + 0x84]
// 008643f9  e820821600           call 0x9cc61e
// 008643fe  a900004000           test eax, 0x400000
// 00864403  b801000000           mov eax, 1
// 00864408  7506                 jne 0x864410
// 0086440a  8b8618010000         mov eax, dword ptr [esi + 0x118]
// 00864410  5e                   pop esi
// 00864411  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?IsLayoutRTL@CXTPTabClientWnd@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
