// roc 2010-06 007f59a0  unit: CXTPCustomizeCommandsPage  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007f59a0
//
// 007f59a0  56                   push esi
// 007f59a1  8bf1                 mov esi, ecx
// 007f59a3  e8b8e90400           call 0x844360
// 007f59a8  c70614e1a500         mov dword ptr [esi], 0xa5e114
// 007f59ae  c74620b4e0a500       mov dword ptr [esi + 0x20], 0xa5e0b4
// 007f59b5  c786fc00000001000000 mov dword ptr [esi + 0xfc], 1
// 007f59bf  c786d40000005a000000 mov dword ptr [esi + 0xd4], 0x5a
// 007f59c9  8bc6                 mov eax, esi
// 007f59cb  5e                   pop esi
// 007f59cc  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPPopupBar.cpp (function ??0CControlExpandButton@CXTPPopupBar@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPopupBar.cpp
