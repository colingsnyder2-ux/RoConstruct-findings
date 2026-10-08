// roc 2012-06 00a1c3b0  unit: CXTPDockBar  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a1c3b0
//
// 00a1c3b0  56                   push esi
// 00a1c3b1  8bf1                 mov esi, ecx
// 00a1c3b3  e8c8d5ffff           call 0xa19980
// 00a1c3b8  838ed40000001b       or dword ptr [esi + 0xd4], 0x1b
// 00a1c3bf  c70674e1c100         mov dword ptr [esi], 0xc1e174
// 00a1c3c5  c7462014e1c100       mov dword ptr [esi + 0x20], 0xc1e114
// 00a1c3cc  8bc6                 mov eax, esi
// 00a1c3ce  5e                   pop esi
// 00a1c3cf  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPMenuBar.cpp (function ??0CControlMDIButton@CXTPMenuBar@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPMenuBar.cpp
