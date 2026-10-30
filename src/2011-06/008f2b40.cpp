// roc 2011-06 008f2b40  unit: CXTCaptionButton  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f2b40
//
// 008f2b40  56                   push esi
// 008f2b41  8bf1                 mov esi, ecx
// 008f2b43  837e2000             cmp dword ptr [esi + 0x20], 0
// 008f2b47  7413                 je 0x8f2b5c
// 008f2b49  e8ca9a0d00           call 0x9cc618
// 008f2b4e  83e00f               and eax, 0xf
// 008f2b51  3c0b                 cmp al, 0xb
// 008f2b53  7507                 jne 0x8f2b5c
// 008f2b55  b801000000           mov eax, 1
// 008f2b5a  eb02                 jmp 0x8f2b5e
// 008f2b5c  33c0                 xor eax, eax
// 008f2b5e  8986a8000000         mov dword ptr [esi + 0xa8], eax
// 008f2b64  8b7620               mov esi, dword ptr [esi + 0x20]
// 008f2b67  85f6                 test esi, esi
// 008f2b69  740b                 je 0x8f2b76
// 008f2b6b  6a00                 push 0
// 008f2b6d  6a00                 push 0
// 008f2b6f  56                   push esi
// 008f2b70  ff15ec19a400         call dword ptr [0xa419ec]
// 008f2b76  b001                 mov al, 1
// 008f2b78  5e                   pop esi
// 008f2b79  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTButton.cpp (function ?Init@CXTButton@@MAE_NXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTButton.cpp
