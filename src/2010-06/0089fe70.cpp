// roc 2010-06 0089fe70  unit: CXTPDialogBar::CCaptionPopupBar  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0089fe70
//
// 0089fe70  56                   push esi
// 0089fe71  8bf1                 mov esi, ecx
// 0089fe73  e87873f5ff           call 0x7f71f0
// 0089fe78  8b868c010000         mov eax, dword ptr [esi + 0x18c]
// 0089fe7e  898684010000         mov dword ptr [esi + 0x184], eax
// 0089fe84  8b8698010000         mov eax, dword ptr [esi + 0x198]
// 0089fe8a  c7869c01000003000000 mov dword ptr [esi + 0x19c], 3
// 0089fe94  898688010000         mov dword ptr [esi + 0x188], eax
// 0089fe9a  5e                   pop esi
// 0089fe9b  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPDialogBar.cpp (function ?UpdateFlags@CCaptionPopupBar@CXTPDialogBar@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDialogBar.cpp
