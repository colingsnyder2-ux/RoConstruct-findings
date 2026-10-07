// roc 2008-06 007017f0  unit: CXTPTabClientWnd  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007017f0
//
// 007017f0  56                   push esi
// 007017f1  8bf1                 mov esi, ecx
// 007017f3  8b8e84000000         mov ecx, dword ptr [esi + 0x84]
// 007017f9  e89aa70b00           call 0x7bbf98
// 007017fe  a900004000           test eax, 0x400000
// 00701803  b801000000           mov eax, 1
// 00701808  7506                 jne 0x701810
// 0070180a  8b8618010000         mov eax, dword ptr [esi + 0x118]
// 00701810  5e                   pop esi
// 00701811  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?IsLayoutRTL@CXTPTabClientWnd@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
