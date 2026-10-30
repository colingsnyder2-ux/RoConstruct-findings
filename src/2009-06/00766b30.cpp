// roc 2009-06 00766b30  unit: CXTPCustomizeCommandsPage  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00766b30
//
// 00766b30  56                   push esi
// 00766b31  8bf1                 mov esi, ecx
// 00766b33  e8687e0500           call 0x7be9a0
// 00766b38  c706ac998f00         mov dword ptr [esi], 0x8f99ac
// 00766b3e  c746204c998f00       mov dword ptr [esi + 0x20], 0x8f994c
// 00766b45  c786fc00000001000000 mov dword ptr [esi + 0xfc], 1
// 00766b4f  c786d40000005a000000 mov dword ptr [esi + 0xd4], 0x5a
// 00766b59  8bc6                 mov eax, esi
// 00766b5b  5e                   pop esi
// 00766b5c  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPPopupBar.cpp (function ??0CControlExpandButton@CXTPPopupBar@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPopupBar.cpp
