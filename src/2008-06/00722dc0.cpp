// from server: 100% by auto
// roc 2008-06 00722dc0  unit: CXTPRibbonBar::CControlCaptionButton  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00722dc0
//
// 00722dc0  56                   push esi
// 00722dc1  8bb184000000         mov esi, dword ptr [ecx + 0x84]
// 00722dc7  8b8900010000         mov ecx, dword ptr [ecx + 0x100]
// 00722dcd  e8ee4bf9ff           call 0x6b79c0
// 00722dd2  8b4020               mov eax, dword ptr [eax + 0x20]
// 00722dd5  6a00                 push 0
// 00722dd7  56                   push esi
// 00722dd8  6812010000           push 0x112
// 00722ddd  50                   push eax
// 00722dde  ff150c2e8000         call dword ptr [0x802e0c]
// 00722de4  5e                   pop esi
// 00722de5  c3                   ret 
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?OnExecute@CControlCaptionButton@CXTPRibbonBar@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
