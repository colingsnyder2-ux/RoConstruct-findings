// roc 2007-08 00714fa0  unit: CXTCaptionButton  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00714fa0
//
// 00714fa0  56                   push esi
// 00714fa1  57                   push edi
// 00714fa2  8bf1                 mov esi, ecx
// 00714fa4  e869340200           call 0x738412
// 00714fa9  8bf8                 mov edi, eax
// 00714fab  81e700000010         and edi, 0x10000000
// 00714fb1  7410                 je 0x714fc3
// 00714fb3  6a00                 push 0
// 00714fb5  6a00                 push 0
// 00714fb7  6800000010           push 0x10000000
// 00714fbc  8bce                 mov ecx, esi
// 00714fbe  e8f5b3f1ff           call 0x6303b8
// 00714fc3  8bce                 mov ecx, esi
// 00714fc5  e874b2f1ff           call 0x63023e
// 00714fca  85ff                 test edi, edi
// 00714fcc  7410                 je 0x714fde
// 00714fce  6a00                 push 0
// 00714fd0  6800000010           push 0x10000000
// 00714fd5  6a00                 push 0
// 00714fd7  8bce                 mov ecx, esi
// 00714fd9  e8dab3f1ff           call 0x6303b8
// 00714fde  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00714fe1  33c0                 xor eax, eax
// 00714fe3  3944240c             cmp dword ptr [esp + 0xc], eax
// 00714fe7  6a00                 push 0
// 00714fe9  0f95c0               setne al
// 00714fec  6a00                 push 0
// 00714fee  51                   push ecx
// 00714fef  8986a4000000         mov dword ptr [esi + 0xa4], eax
// 00714ff5  ff15dcec7700         call dword ptr [0x77ecdc]
// 00714ffb  5f                   pop edi
// 00714ffc  33c0                 xor eax, eax
// 00714ffe  5e                   pop esi
// 00714fff  c20800               ret 8
// library xtp-11.2.2-vc8/Source\Controls\XTButton.cpp (function ?OnSetState@CXTButton@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTButton.cpp
