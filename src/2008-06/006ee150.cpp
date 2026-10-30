// from server: 100% by auto
// roc 2008-06 006ee150  unit: CXTPCustomizeCommandsPage  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ee150
//
// 006ee150  56                   push esi
// 006ee151  8bf1                 mov esi, ecx
// 006ee153  e8e8740500           call 0x745640
// 006ee158  c70654898500         mov dword ptr [esi], 0x858954
// 006ee15e  c74620f4888500       mov dword ptr [esi + 0x20], 0x8588f4
// 006ee165  c786fc00000001000000 mov dword ptr [esi + 0xfc], 1
// 006ee16f  c786d40000005a000000 mov dword ptr [esi + 0xd4], 0x5a
// 006ee179  8bc6                 mov eax, esi
// 006ee17b  5e                   pop esi
// 006ee17c  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPPopupBar.cpp (function ??0CControlExpandButton@CXTPPopupBar@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPopupBar.cpp
