// roc 2009-12 008ebb60  unit: CXTPToolBar::CControlButtonHide  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ebb60
//
// 008ebb60  56                   push esi
// 008ebb61  8bf1                 mov esi, ecx
// 008ebb63  e868eff4ff           call 0x83aad0
// 008ebb68  c7067cd3a000         mov dword ptr [esi], 0xa0d37c
// 008ebb6e  c746201cd3a000       mov dword ptr [esi + 0x20], 0xa0d31c
// 008ebb75  c786d40000001e000000 mov dword ptr [esi + 0xd4], 0x1e
// 008ebb7f  c7868401000000000000 mov dword ptr [esi + 0x184], 0
// 008ebb89  8bc6                 mov eax, esi
// 008ebb8b  5e                   pop esi
// 008ebb8c  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPDialogBar.cpp (function ??0CControlCaptionPopup@CXTPDialogBar@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDialogBar.cpp
