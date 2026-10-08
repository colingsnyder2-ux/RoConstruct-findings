// roc 2010-06 00899fe0  unit: CXTCaptionButton  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00899fe0
//
// 00899fe0  56                   push esi
// 00899fe1  8bf1                 mov esi, ecx
// 00899fe3  837e2000             cmp dword ptr [esi + 0x20], 0
// 00899fe7  7413                 je 0x899ffc
// 00899fe9  e8f02d0e00           call 0x97cdde
// 00899fee  83e00f               and eax, 0xf
// 00899ff1  3c0b                 cmp al, 0xb
// 00899ff3  7507                 jne 0x899ffc
// 00899ff5  b801000000           mov eax, 1
// 00899ffa  eb02                 jmp 0x899ffe
// 00899ffc  33c0                 xor eax, eax
// 00899ffe  8986a8000000         mov dword ptr [esi + 0xa8], eax
// 0089a004  8b7620               mov esi, dword ptr [esi + 0x20]
// 0089a007  85f6                 test esi, esi
// 0089a009  740b                 je 0x89a016
// 0089a00b  6a00                 push 0
// 0089a00d  6a00                 push 0
// 0089a00f  56                   push esi
// 0089a010  ff1578ba9e00         call dword ptr [0x9eba78]
// 0089a016  b001                 mov al, 1
// 0089a018  5e                   pop esi
// 0089a019  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTButton.cpp (function ?Init@CXTButton@@MAE_NXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTButton.cpp
