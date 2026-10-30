// roc 2009-12 00895970  unit: CXTPRibbonBar::CControlCaptionButton  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00895970
//
// 00895970  56                   push esi
// 00895971  8bb184000000         mov esi, dword ptr [ecx + 0x84]
// 00895977  8b8900010000         mov ecx, dword ptr [ecx + 0x100]
// 0089597d  e80e17f7ff           call 0x807090
// 00895982  8b4020               mov eax, dword ptr [eax + 0x20]
// 00895985  6a00                 push 0
// 00895987  56                   push esi
// 00895988  6812010000           push 0x112
// 0089598d  50                   push eax
// 0089598e  ff15b8cb9800         call dword ptr [0x98cbb8]
// 00895994  5e                   pop esi
// 00895995  c3                   ret 
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?OnExecute@CControlCaptionButton@CXTPRibbonBar@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
