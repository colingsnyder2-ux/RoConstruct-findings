// roc 2007-08 0071dee0  unit: CXTPDialogBar::CCaptionPopupBar  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0071dee0
//
// 0071dee0  56                   push esi
// 0071dee1  8bf1                 mov esi, ecx
// 0071dee3  e888aaf5ff           call 0x678970
// 0071dee8  8b868c010000         mov eax, dword ptr [esi + 0x18c]
// 0071deee  898684010000         mov dword ptr [esi + 0x184], eax
// 0071def4  8b8698010000         mov eax, dword ptr [esi + 0x198]
// 0071defa  c7869c01000003000000 mov dword ptr [esi + 0x19c], 3
// 0071df04  898688010000         mov dword ptr [esi + 0x188], eax
// 0071df0a  5e                   pop esi
// 0071df0b  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPDialogBar.cpp (function ?UpdateFlags@CCaptionPopupBar@CXTPDialogBar@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPDialogBar.cpp
