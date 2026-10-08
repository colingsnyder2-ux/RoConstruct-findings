// roc 2012-06 00a1f0f0  unit: CXTPRibbonBar::CControlCaptionButton  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a1f0f0
//
// 00a1f0f0  56                   push esi
// 00a1f0f1  8bb184000000         mov esi, dword ptr [ecx + 0x84]
// 00a1f0f7  8b8900010000         mov ecx, dword ptr [ecx + 0x100]
// 00a1f0fd  e83e68f7ff           call 0x995940
// 00a1f102  8b4020               mov eax, dword ptr [eax + 0x20]
// 00a1f105  6a00                 push 0
// 00a1f107  56                   push esi
// 00a1f108  6812010000           push 0x112
// 00a1f10d  50                   push eax
// 00a1f10e  ff15243cb200         call dword ptr [0xb23c24]
// 00a1f114  5e                   pop esi
// 00a1f115  c3                   ret 
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?OnExecute@CControlCaptionButton@CXTPRibbonBar@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
