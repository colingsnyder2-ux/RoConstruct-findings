// from server: 100% by auto
// roc 2008-06 0079ec90  unit: CXTPDialogBar::CCaptionPopupBar  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0079ec90
//
// 0079ec90  56                   push esi
// 0079ec91  8bf1                 mov esi, ecx
// 0079ec93  e8080df5ff           call 0x6ef9a0
// 0079ec98  8b868c010000         mov eax, dword ptr [esi + 0x18c]
// 0079ec9e  898684010000         mov dword ptr [esi + 0x184], eax
// 0079eca4  8b8698010000         mov eax, dword ptr [esi + 0x198]
// 0079ecaa  c7869c01000003000000 mov dword ptr [esi + 0x19c], 3
// 0079ecb4  898688010000         mov dword ptr [esi + 0x188], eax
// 0079ecba  5e                   pop esi
// 0079ecbb  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPDialogBar.cpp (function ?UpdateFlags@CCaptionPopupBar@CXTPDialogBar@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDialogBar.cpp
