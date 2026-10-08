// from server: 100% by auto
// roc 2008-06 0079ec20  unit: CXTPToolBar::CControlButtonHide  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0079ec20
//
// 0079ec20  56                   push esi
// 0079ec21  8bf1                 mov esi, ecx
// 0079ec23  e8b887f4ff           call 0x6e73e0
// 0079ec28  c7063cdd8600         mov dword ptr [esi], 0x86dd3c
// 0079ec2e  c74620dcdc8600       mov dword ptr [esi + 0x20], 0x86dcdc
// 0079ec35  c786d40000001e000000 mov dword ptr [esi + 0xd4], 0x1e
// 0079ec3f  c7868401000000000000 mov dword ptr [esi + 0x184], 0
// 0079ec49  8bc6                 mov eax, esi
// 0079ec4b  5e                   pop esi
// 0079ec4c  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPDialogBar.cpp (function ??0CControlCaptionPopup@CXTPDialogBar@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDialogBar.cpp
