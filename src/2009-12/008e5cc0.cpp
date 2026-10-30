// roc 2009-12 008e5cc0  unit: CXTCaptionButton  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e5cc0
//
// 008e5cc0  56                   push esi
// 008e5cc1  8bf1                 mov esi, ecx
// 008e5cc3  837e2000             cmp dword ptr [esi + 0x20], 0
// 008e5cc7  7413                 je 0x8e5cdc
// 008e5cc9  e8a4070400           call 0x926472
// 008e5cce  83e00f               and eax, 0xf
// 008e5cd1  3c0b                 cmp al, 0xb
// 008e5cd3  7507                 jne 0x8e5cdc
// 008e5cd5  b801000000           mov eax, 1
// 008e5cda  eb02                 jmp 0x8e5cde
// 008e5cdc  33c0                 xor eax, eax
// 008e5cde  8986a8000000         mov dword ptr [esi + 0xa8], eax
// 008e5ce4  8b7620               mov esi, dword ptr [esi + 0x20]
// 008e5ce7  85f6                 test esi, esi
// 008e5ce9  740b                 je 0x8e5cf6
// 008e5ceb  6a00                 push 0
// 008e5ced  6a00                 push 0
// 008e5cef  56                   push esi
// 008e5cf0  ff15e8cb9800         call dword ptr [0x98cbe8]
// 008e5cf6  b001                 mov al, 1
// 008e5cf8  5e                   pop esi
// 008e5cf9  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTButton.cpp (function ?Init@CXTButton@@MAE_NXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTButton.cpp
