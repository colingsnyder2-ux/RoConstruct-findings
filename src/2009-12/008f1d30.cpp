// roc 2009-12 008f1d30  unit: CXTPRibbonControlSystemButton  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f1d30
//
// 008f1d30  56                   push esi
// 008f1d31  8bf1                 mov esi, ecx
// 008f1d33  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 008f1d39  e89227f1ff           call 0x8044d0
// 008f1d3e  8bc8                 mov ecx, eax
// 008f1d40  e89b41f2ff           call 0x815ee0
// 008f1d45  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 008f1d4b  e84053f1ff           call 0x807090
// 008f1d50  8b4020               mov eax, dword ptr [eax + 0x20]
// 008f1d53  6a00                 push 0
// 008f1d55  6863f00000           push 0xf063
// 008f1d5a  6812010000           push 0x112
// 008f1d5f  50                   push eax
// 008f1d60  ff15c4cb9800         call dword ptr [0x98cbc4]
// 008f1d66  b801000000           mov eax, 1
// 008f1d6b  5e                   pop esi
// 008f1d6c  c20800               ret 8
// library xtp-11.2.2/Source\Ribbon\XTPRibbonSystemButton.cpp (function ?OnLButtonDblClk@CXTPRibbonControlSystemButton@@MAEHVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonSystemButton.cpp
