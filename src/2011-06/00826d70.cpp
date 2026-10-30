// roc 2011-06 00826d70  unit: CXTPToolBar::CControlButtonHide  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00826d70
//
// 00826d70  56                   push esi
// 00826d71  8bf1                 mov esi, ecx
// 00826d73  e8b8a70700           call 0x8a1530
// 00826d78  33c0                 xor eax, eax
// 00826d7a  898674010000         mov dword ptr [esi + 0x174], eax
// 00826d80  898678010000         mov dword ptr [esi + 0x178], eax
// 00826d86  c7063c34ac00         mov dword ptr [esi], 0xac343c
// 00826d8c  c74620dc33ac00       mov dword ptr [esi + 0x20], 0xac33dc
// 00826d93  8bc6                 mov eax, esi
// 00826d95  5e                   pop esi
// 00826d96  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPToolBar.cpp (function ??0CControlButtonCustomize@CXTPToolBar@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPToolBar.cpp
