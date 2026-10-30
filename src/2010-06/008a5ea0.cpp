// roc 2010-06 008a5ea0  unit: CXTPRibbonControlSystemButton  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a5ea0
//
// 008a5ea0  56                   push esi
// 008a5ea1  8bf1                 mov esi, ecx
// 008a5ea3  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 008a5ea9  e82227f1ff           call 0x7b85d0
// 008a5eae  8bc8                 mov ecx, eax
// 008a5eb0  e8fb40f2ff           call 0x7c9fb0
// 008a5eb5  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 008a5ebb  e84053f1ff           call 0x7bb200
// 008a5ec0  8b4020               mov eax, dword ptr [eax + 0x20]
// 008a5ec3  6a00                 push 0
// 008a5ec5  6863f00000           push 0xf063
// 008a5eca  6812010000           push 0x112
// 008a5ecf  50                   push eax
// 008a5ed0  ff1554ba9e00         call dword ptr [0x9eba54]
// 008a5ed6  b801000000           mov eax, 1
// 008a5edb  5e                   pop esi
// 008a5edc  c20800               ret 8
// library xtp-11.2.2/Source\Ribbon\XTPRibbonSystemButton.cpp (function ?OnLButtonDblClk@CXTPRibbonControlSystemButton@@MAEHVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonSystemButton.cpp
