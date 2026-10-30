// roc 2011-06 008a6c40  unit: CXTPRibbonBar::CControlCaptionButton  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008a6c40
//
// 008a6c40  56                   push esi
// 008a6c41  8bb184000000         mov esi, dword ptr [ecx + 0x84]
// 008a6c47  8b8900010000         mov ecx, dword ptr [ecx + 0x100]
// 008a6c4d  e81e6af7ff           call 0x81d670
// 008a6c52  8b4020               mov eax, dword ptr [eax + 0x20]
// 008a6c55  6a00                 push 0
// 008a6c57  56                   push esi
// 008a6c58  6812010000           push 0x112
// 008a6c5d  50                   push eax
// 008a6c5e  ff15b419a400         call dword ptr [0xa419b4]
// 008a6c64  5e                   pop esi
// 008a6c65  c3                   ret 
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?OnExecute@CControlCaptionButton@CXTPRibbonBar@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
