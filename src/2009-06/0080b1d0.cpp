// roc 2009-06 0080b1d0  unit: CXTCaptionButton  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0080b1d0
//
// 0080b1d0  56                   push esi
// 0080b1d1  8bf1                 mov esi, ecx
// 0080b1d3  837e2000             cmp dword ptr [esi + 0x20], 0
// 0080b1d7  7413                 je 0x80b1ec
// 0080b1d9  e8fe0c0400           call 0x84bedc
// 0080b1de  83e00f               and eax, 0xf
// 0080b1e1  3c0b                 cmp al, 0xb
// 0080b1e3  7507                 jne 0x80b1ec
// 0080b1e5  b801000000           mov eax, 1
// 0080b1ea  eb02                 jmp 0x80b1ee
// 0080b1ec  33c0                 xor eax, eax
// 0080b1ee  8986a8000000         mov dword ptr [esi + 0xa8], eax
// 0080b1f4  8b7620               mov esi, dword ptr [esi + 0x20]
// 0080b1f7  85f6                 test esi, esi
// 0080b1f9  740b                 je 0x80b206
// 0080b1fb  6a00                 push 0
// 0080b1fd  6a00                 push 0
// 0080b1ff  56                   push esi
// 0080b200  ff157cee8900         call dword ptr [0x89ee7c]
// 0080b206  b001                 mov al, 1
// 0080b208  5e                   pop esi
// 0080b209  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTButton.cpp (function ?Init@CXTButton@@MAE_NXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTButton.cpp
