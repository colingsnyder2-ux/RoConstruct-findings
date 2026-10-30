// roc 2012-06 00a76db0  unit: CXTPRibbonControlSystemButton  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a76db0
//
// 00a76db0  56                   push esi
// 00a76db1  8bf1                 mov esi, ecx
// 00a76db3  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 00a76db9  e832bff1ff           call 0x992cf0
// 00a76dbe  8bc8                 mov ecx, eax
// 00a76dc0  e86bd2f2ff           call 0x9a4030
// 00a76dc5  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 00a76dcb  e870ebf1ff           call 0x995940
// 00a76dd0  8b4020               mov eax, dword ptr [eax + 0x20]
// 00a76dd3  6a00                 push 0
// 00a76dd5  6863f00000           push 0xf063
// 00a76dda  6812010000           push 0x112
// 00a76ddf  50                   push eax
// 00a76de0  ff15043cb200         call dword ptr [0xb23c04]
// 00a76de6  b801000000           mov eax, 1
// 00a76deb  5e                   pop esi
// 00a76dec  c20800               ret 8
// library xtp-11.2.2/Source\Ribbon\XTPRibbonSystemButton.cpp (function ?OnLButtonDblClk@CXTPRibbonControlSystemButton@@MAEHVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonSystemButton.cpp
