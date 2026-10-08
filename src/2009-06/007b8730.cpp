// roc 2009-06 007b8730  unit: CXTPRibbonBar::CControlCaptionButton  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007b8730
//
// 007b8730  56                   push esi
// 007b8731  8bb184000000         mov esi, dword ptr [ecx + 0x84]
// 007b8737  8b8900010000         mov ecx, dword ptr [ecx + 0x100]
// 007b873d  e8ee77f7ff           call 0x72ff30
// 007b8742  8b4020               mov eax, dword ptr [eax + 0x20]
// 007b8745  6a00                 push 0
// 007b8747  56                   push esi
// 007b8748  6812010000           push 0x112
// 007b874d  50                   push eax
// 007b874e  ff159cee8900         call dword ptr [0x89ee9c]
// 007b8754  5e                   pop esi
// 007b8755  c3                   ret 
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?OnExecute@CControlCaptionButton@CXTPRibbonBar@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
