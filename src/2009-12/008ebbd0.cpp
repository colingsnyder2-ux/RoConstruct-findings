// roc 2009-12 008ebbd0  unit: CXTPDialogBar::CCaptionPopupBar  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ebbd0
//
// 008ebbd0  56                   push esi
// 008ebbd1  8bf1                 mov esi, ecx
// 008ebbd3  e86875f5ff           call 0x843140
// 008ebbd8  8b868c010000         mov eax, dword ptr [esi + 0x18c]
// 008ebbde  898684010000         mov dword ptr [esi + 0x184], eax
// 008ebbe4  8b8698010000         mov eax, dword ptr [esi + 0x198]
// 008ebbea  c7869c01000003000000 mov dword ptr [esi + 0x19c], 3
// 008ebbf4  898688010000         mov dword ptr [esi + 0x188], eax
// 008ebbfa  5e                   pop esi
// 008ebbfb  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPDialogBar.cpp (function ?UpdateFlags@CCaptionPopupBar@CXTPDialogBar@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDialogBar.cpp
