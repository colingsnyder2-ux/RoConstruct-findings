// roc 2011-06 008fea30  unit: CXTPRibbonControlSystemButton  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008fea30
//
// 008fea30  56                   push esi
// 008fea31  8bf1                 mov esi, ecx
// 008fea33  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 008fea39  e852c0f1ff           call 0x81aa90
// 008fea3e  8bc8                 mov ecx, eax
// 008fea40  e81bd0f2ff           call 0x82ba60
// 008fea45  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 008fea4b  e820ecf1ff           call 0x81d670
// 008fea50  8b4020               mov eax, dword ptr [eax + 0x20]
// 008fea53  6a00                 push 0
// 008fea55  6863f00000           push 0xf063
// 008fea5a  6812010000           push 0x112
// 008fea5f  50                   push eax
// 008fea60  ff15c019a400         call dword ptr [0xa419c0]
// 008fea66  b801000000           mov eax, 1
// 008fea6b  5e                   pop esi
// 008fea6c  c20800               ret 8
// library xtp-11.2.2/Source\Ribbon\XTPRibbonSystemButton.cpp (function ?OnLButtonDblClk@CXTPRibbonControlSystemButton@@MAEHVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonSystemButton.cpp
