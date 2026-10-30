// roc 2007-03 00697da0  unit: seg_00690000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00697da0
//
// 00697da0  56                   push esi
// 00697da1  8bf1                 mov esi, ecx
// 00697da3  e8a8d00100           call 0x6b4e50
// 00697da8  838ed40000001b       or dword ptr [esi + 0xd4], 0x1b
// 00697daf  c7067c167d00         mov dword ptr [esi], 0x7d167c
// 00697db5  c746201c167d00       mov dword ptr [esi + 0x20], 0x7d161c
// 00697dbc  8bc6                 mov eax, esi
// 00697dbe  5e                   pop esi
// 00697dbf  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPMenuBar.cpp (function ??0CControlMDIButton@CXTPMenuBar@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPMenuBar.cpp
