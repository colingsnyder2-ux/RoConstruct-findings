// roc 2012-06 00a6ace0  unit: CXTColorSelectorCtrl  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a6ace0
//
// 00a6ace0  56                   push esi
// 00a6ace1  8bf1                 mov esi, ecx
// 00a6ace3  e8f679f1ff           call 0x9826de
// 00a6ace8  8b4620               mov eax, dword ptr [esi + 0x20]
// 00a6aceb  6a00                 push 0
// 00a6aced  6a00                 push 0
// 00a6acef  50                   push eax
// 00a6acf0  ff15ec3bb200         call dword ptr [0xb23bec]
// 00a6acf6  5e                   pop esi
// 00a6acf7  c20400               ret 4
// library xtp-15.2.1/Source\Controls\Deprecated\XTButton.cpp (function ?OnKillFocus@CXTButton@@IAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Deprecated/XTButton.cpp
