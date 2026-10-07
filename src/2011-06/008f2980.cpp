// roc 2011-06 008f2980  unit: CXTColorSelectorCtrl  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f2980
//
// 008f2980  56                   push esi
// 008f2981  8bf1                 mov esi, ecx
// 008f2983  e8a67cf1ff           call 0x80a62e
// 008f2988  8b4620               mov eax, dword ptr [esi + 0x20]
// 008f298b  6a00                 push 0
// 008f298d  6a00                 push 0
// 008f298f  50                   push eax
// 008f2990  ff15ec19a400         call dword ptr [0xa419ec]
// 008f2996  5e                   pop esi
// 008f2997  c20400               ret 4
// library xtp-15.2.1/Source\Controls\Deprecated\XTButton.cpp (function ?OnKillFocus@CXTButton@@IAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Deprecated/XTButton.cpp
