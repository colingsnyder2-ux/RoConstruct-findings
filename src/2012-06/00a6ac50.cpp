// roc 2012-06 00a6ac50  unit: CXTColorSelectorCtrl  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a6ac50
//
// 00a6ac50  56                   push esi
// 00a6ac51  57                   push edi
// 00a6ac52  8bf1                 mov esi, ecx
// 00a6ac54  e879e90200           call 0xa995d2
// 00a6ac59  8bf8                 mov edi, eax
// 00a6ac5b  81e700000010         and edi, 0x10000000
// 00a6ac61  7410                 je 0xa6ac73
// 00a6ac63  6a00                 push 0
// 00a6ac65  6a00                 push 0
// 00a6ac67  6800000010           push 0x10000000
// 00a6ac6c  8bce                 mov ecx, esi
// 00a6ac6e  e8e57bf1ff           call 0x982858
// 00a6ac73  8bce                 mov ecx, esi
// 00a6ac75  e8647af1ff           call 0x9826de
// 00a6ac7a  85ff                 test edi, edi
// 00a6ac7c  7410                 je 0xa6ac8e
// 00a6ac7e  6a00                 push 0
// 00a6ac80  6800000010           push 0x10000000
// 00a6ac85  6a00                 push 0
// 00a6ac87  8bce                 mov ecx, esi
// 00a6ac89  e8ca7bf1ff           call 0x982858
// 00a6ac8e  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00a6ac91  33c0                 xor eax, eax
// 00a6ac93  3944240c             cmp dword ptr [esp + 0xc], eax
// 00a6ac97  6a00                 push 0
// 00a6ac99  0f95c0               setne al
// 00a6ac9c  6a00                 push 0
// 00a6ac9e  51                   push ecx
// 00a6ac9f  8986a4000000         mov dword ptr [esi + 0xa4], eax
// 00a6aca5  ff15ec3bb200         call dword ptr [0xb23bec]
// 00a6acab  5f                   pop edi
// 00a6acac  33c0                 xor eax, eax
// 00a6acae  5e                   pop esi
// 00a6acaf  c20800               ret 8
// library xtp-15.2.1/Source\Controls\Deprecated\XTButton.cpp (function ?OnSetState@CXTButton@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Deprecated/XTButton.cpp
