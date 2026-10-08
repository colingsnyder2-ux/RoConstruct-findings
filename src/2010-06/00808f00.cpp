// roc 2010-06 00808f00  unit: CXTPTabClientWnd  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00808f00
//
// 00808f00  56                   push esi
// 00808f01  8bf1                 mov esi, ecx
// 00808f03  8b8e84000000         mov ecx, dword ptr [esi + 0x84]
// 00808f09  e8d63e1700           call 0x97cde4
// 00808f0e  a900004000           test eax, 0x400000
// 00808f13  b801000000           mov eax, 1
// 00808f18  7506                 jne 0x808f20
// 00808f1a  8b8618010000         mov eax, dword ptr [esi + 0x118]
// 00808f20  5e                   pop esi
// 00808f21  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?IsLayoutRTL@CXTPTabClientWnd@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
