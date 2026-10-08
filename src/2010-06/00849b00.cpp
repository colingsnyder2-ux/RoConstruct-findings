// roc 2010-06 00849b00  unit: CXTPRibbonBar::CControlCaptionButton  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00849b00
//
// 00849b00  56                   push esi
// 00849b01  8bb184000000         mov esi, dword ptr [ecx + 0x84]
// 00849b07  8b8900010000         mov ecx, dword ptr [ecx + 0x100]
// 00849b0d  e8ee16f7ff           call 0x7bb200
// 00849b12  8b4020               mov eax, dword ptr [eax + 0x20]
// 00849b15  6a00                 push 0
// 00849b17  56                   push esi
// 00849b18  6812010000           push 0x112
// 00849b1d  50                   push eax
// 00849b1e  ff1548ba9e00         call dword ptr [0x9eba48]
// 00849b24  5e                   pop esi
// 00849b25  c3                   ret 
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?OnExecute@CControlCaptionButton@CXTPRibbonBar@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
