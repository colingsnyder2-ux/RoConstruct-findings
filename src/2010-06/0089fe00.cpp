// roc 2010-06 0089fe00  unit: CXTPToolBar::CControlButtonHide  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0089fe00
//
// 0089fe00  56                   push esi
// 0089fe01  8bf1                 mov esi, ecx
// 0089fe03  e818eef4ff           call 0x7eec20
// 0089fe08  c7067416a700         mov dword ptr [esi], 0xa71674
// 0089fe0e  c746201416a700       mov dword ptr [esi + 0x20], 0xa71614
// 0089fe15  c786d40000001e000000 mov dword ptr [esi + 0xd4], 0x1e
// 0089fe1f  c7868401000000000000 mov dword ptr [esi + 0x184], 0
// 0089fe29  8bc6                 mov eax, esi
// 0089fe2b  5e                   pop esi
// 0089fe2c  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPDialogBar.cpp (function ??0CControlCaptionPopup@CXTPDialogBar@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDialogBar.cpp
