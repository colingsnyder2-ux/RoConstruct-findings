// roc 2009-06 0077a100  unit: CXTPTabClientWnd  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0077a100
//
// 0077a100  56                   push esi
// 0077a101  8bf1                 mov esi, ecx
// 0077a103  8b8e84000000         mov ecx, dword ptr [esi + 0x84]
// 0077a109  e8d41d0d00           call 0x84bee2
// 0077a10e  a900004000           test eax, 0x400000
// 0077a113  b801000000           mov eax, 1
// 0077a118  7506                 jne 0x77a120
// 0077a11a  8b8618010000         mov eax, dword ptr [esi + 0x118]
// 0077a120  5e                   pop esi
// 0077a121  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?IsLayoutRTL@CXTPTabClientWnd@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
