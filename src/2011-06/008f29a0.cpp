// from server: 100% by auto
// roc 2011-06 008f29a0  unit: CXTColorSelectorCtrl  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f29a0
//
// 008f29a0  56                   push esi
// 008f29a1  57                   push edi
// 008f29a2  8bf1                 mov esi, ecx
// 008f29a4  e8857cf1ff           call 0x80a62e
// 008f29a9  6a00                 push 0
// 008f29ab  8bf8                 mov edi, eax
// 008f29ad  8b4620               mov eax, dword ptr [esi + 0x20]
// 008f29b0  6a00                 push 0
// 008f29b2  50                   push eax
// 008f29b3  ff15ec19a400         call dword ptr [0xa419ec]
// 008f29b9  8bc7                 mov eax, edi
// 008f29bb  5f                   pop edi
// 008f29bc  5e                   pop esi
// 008f29bd  c20800               ret 8
// library xtp-15.2.1/Source\Controls\Deprecated\XTButton.cpp (function ?OnDefaultAndInvalidate@CXTButton@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Deprecated/XTButton.cpp
