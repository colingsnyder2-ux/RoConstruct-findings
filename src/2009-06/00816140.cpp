// roc 2009-06 00816140  unit: CXTPRibbonControlSystemButton  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00816140
//
// 00816140  56                   push esi
// 00816141  8bf1                 mov esi, ecx
// 00816143  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 00816149  e84272f1ff           call 0x72d390
// 0081614e  8bc8                 mov ecx, eax
// 00816150  e8db50f1ff           call 0x72b230
// 00816155  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 0081615b  e8d09df1ff           call 0x72ff30
// 00816160  8b4020               mov eax, dword ptr [eax + 0x20]
// 00816163  6a00                 push 0
// 00816165  6863f00000           push 0xf063
// 0081616a  6812010000           push 0x112
// 0081616f  50                   push eax
// 00816170  ff1590ee8900         call dword ptr [0x89ee90]
// 00816176  b801000000           mov eax, 1
// 0081617b  5e                   pop esi
// 0081617c  c20800               ret 8
// library xtp-11.2.2/Source\Ribbon\XTPRibbonSystemButton.cpp (function ?OnLButtonDblClk@CXTPRibbonControlSystemButton@@MAEHVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonSystemButton.cpp
