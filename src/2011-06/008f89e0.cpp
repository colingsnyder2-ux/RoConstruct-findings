// roc 2011-06 008f89e0  unit: CXTPDialogBar::CCaptionPopupBar  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f89e0
//
// 008f89e0  56                   push esi
// 008f89e1  8bf1                 mov esi, ecx
// 008f89e3  e8a8c0f5ff           call 0x854a90
// 008f89e8  8b868c010000         mov eax, dword ptr [esi + 0x18c]
// 008f89ee  898684010000         mov dword ptr [esi + 0x184], eax
// 008f89f4  8b8698010000         mov eax, dword ptr [esi + 0x198]
// 008f89fa  c7869c01000003000000 mov dword ptr [esi + 0x19c], 3
// 008f8a04  898688010000         mov dword ptr [esi + 0x188], eax
// 008f8a0a  5e                   pop esi
// 008f8a0b  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPDialogBar.cpp (function ?UpdateFlags@CCaptionPopupBar@CXTPDialogBar@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDialogBar.cpp
