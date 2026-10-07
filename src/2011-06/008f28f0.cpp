// roc 2011-06 008f28f0  unit: CXTColorSelectorCtrl  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f28f0
//
// 008f28f0  56                   push esi
// 008f28f1  57                   push edi
// 008f28f2  8bf1                 mov esi, ecx
// 008f28f4  e81f9d0d00           call 0x9cc618
// 008f28f9  8bf8                 mov edi, eax
// 008f28fb  81e700000010         and edi, 0x10000000
// 008f2901  7410                 je 0x8f2913
// 008f2903  6a00                 push 0
// 008f2905  6a00                 push 0
// 008f2907  6800000010           push 0x10000000
// 008f290c  8bce                 mov ecx, esi
// 008f290e  e8c57ef1ff           call 0x80a7d8
// 008f2913  8bce                 mov ecx, esi
// 008f2915  e8147df1ff           call 0x80a62e
// 008f291a  85ff                 test edi, edi
// 008f291c  7410                 je 0x8f292e
// 008f291e  6a00                 push 0
// 008f2920  6800000010           push 0x10000000
// 008f2925  6a00                 push 0
// 008f2927  8bce                 mov ecx, esi
// 008f2929  e8aa7ef1ff           call 0x80a7d8
// 008f292e  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008f2931  33c0                 xor eax, eax
// 008f2933  3944240c             cmp dword ptr [esp + 0xc], eax
// 008f2937  6a00                 push 0
// 008f2939  0f95c0               setne al
// 008f293c  6a00                 push 0
// 008f293e  51                   push ecx
// 008f293f  8986a4000000         mov dword ptr [esi + 0xa4], eax
// 008f2945  ff15ec19a400         call dword ptr [0xa419ec]
// 008f294b  5f                   pop edi
// 008f294c  33c0                 xor eax, eax
// 008f294e  5e                   pop esi
// 008f294f  c20800               ret 8
// library xtp-15.2.1/Source\Controls\Deprecated\XTButton.cpp (function ?OnSetState@CXTButton@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Deprecated/XTButton.cpp
