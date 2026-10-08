// roc 2012-06 00a70cf0  unit: CXTPDialogBar::CCaptionPopupBar  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a70cf0
//
// 00a70cf0  56                   push esi
// 00a70cf1  8bf1                 mov esi, ecx
// 00a70cf3  e8a8c2f5ff           call 0x9ccfa0
// 00a70cf8  8b868c010000         mov eax, dword ptr [esi + 0x18c]
// 00a70cfe  898684010000         mov dword ptr [esi + 0x184], eax
// 00a70d04  8b8698010000         mov eax, dword ptr [esi + 0x198]
// 00a70d0a  c7869c01000003000000 mov dword ptr [esi + 0x19c], 3
// 00a70d14  898688010000         mov dword ptr [esi + 0x188], eax
// 00a70d1a  5e                   pop esi
// 00a70d1b  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPDialogBar.cpp (function ?UpdateFlags@CCaptionPopupBar@CXTPDialogBar@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDialogBar.cpp
