// roc 2011-06 008f2bb0  unit: CXTCaptionButton  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f2bb0
//
// 008f2bb0  56                   push esi
// 008f2bb1  8bf1                 mov esi, ecx
// 008f2bb3  83bea800000000       cmp dword ptr [esi + 0xa8], 0
// 008f2bba  741c                 je 0x8f2bd8
// 008f2bbc  ff15f819a400         call dword ptr [0xa419f8]
// 008f2bc2  50                   push eax
// 008f2bc3  e86077f1ff           call 0x80a328
// 008f2bc8  2bc6                 sub eax, esi
// 008f2bca  f7d8                 neg eax
// 008f2bcc  1bc0                 sbb eax, eax
// 008f2bce  83e0f0               and eax, 0xfffffff0
// 008f2bd1  0510200000           add eax, 0x2010
// 008f2bd6  5e                   pop esi
// 008f2bd7  c3                   ret 
// 008f2bd8  5e                   pop esi
// 008f2bd9  e9507af1ff           jmp 0x80a62e
// library xtp-15.2.1/Source\Controls\Deprecated\XTButton.cpp (function ?OnGetDlgCode@CXTButton@@IAEIXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Deprecated/XTButton.cpp
