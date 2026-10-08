// from server: 100% by auto
// roc 2012-06 00a6ad00  unit: CXTColorSelectorCtrl  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a6ad00
//
// 00a6ad00  56                   push esi
// 00a6ad01  57                   push edi
// 00a6ad02  8bf1                 mov esi, ecx
// 00a6ad04  e8d579f1ff           call 0x9826de
// 00a6ad09  6a00                 push 0
// 00a6ad0b  8bf8                 mov edi, eax
// 00a6ad0d  8b4620               mov eax, dword ptr [esi + 0x20]
// 00a6ad10  6a00                 push 0
// 00a6ad12  50                   push eax
// 00a6ad13  ff15ec3bb200         call dword ptr [0xb23bec]
// 00a6ad19  8bc7                 mov eax, edi
// 00a6ad1b  5f                   pop edi
// 00a6ad1c  5e                   pop esi
// 00a6ad1d  c20800               ret 8
// library xtp-15.2.1/Source\Controls\Deprecated\XTButton.cpp (function ?OnDefaultAndInvalidate@CXTButton@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Deprecated/XTButton.cpp
