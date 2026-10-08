// roc 2011-06 008f8970  unit: CXTPDialogBar  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f8970
//
// 008f8970  56                   push esi
// 008f8971  8bf1                 mov esi, ecx
// 008f8973  e8f87af5ff           call 0x850470
// 008f8978  c706a4b1ad00         mov dword ptr [esi], 0xadb1a4
// 008f897e  c7462044b1ad00       mov dword ptr [esi + 0x20], 0xadb144
// 008f8985  c786d40000001e000000 mov dword ptr [esi + 0xd4], 0x1e
// 008f898f  c7868401000000000000 mov dword ptr [esi + 0x184], 0
// 008f8999  8bc6                 mov eax, esi
// 008f899b  5e                   pop esi
// 008f899c  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPDialogBar.cpp (function ??0CControlCaptionPopup@CXTPDialogBar@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDialogBar.cpp
