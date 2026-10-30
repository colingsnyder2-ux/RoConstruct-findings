// roc 2012-06 00a6aea0  unit: CXTCaptionButton  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a6aea0
//
// 00a6aea0  56                   push esi
// 00a6aea1  8bf1                 mov esi, ecx
// 00a6aea3  837e2000             cmp dword ptr [esi + 0x20], 0
// 00a6aea7  7413                 je 0xa6aebc
// 00a6aea9  e824e70200           call 0xa995d2
// 00a6aeae  83e00f               and eax, 0xf
// 00a6aeb1  3c0b                 cmp al, 0xb
// 00a6aeb3  7507                 jne 0xa6aebc
// 00a6aeb5  b801000000           mov eax, 1
// 00a6aeba  eb02                 jmp 0xa6aebe
// 00a6aebc  33c0                 xor eax, eax
// 00a6aebe  8986a8000000         mov dword ptr [esi + 0xa8], eax
// 00a6aec4  8b7620               mov esi, dword ptr [esi + 0x20]
// 00a6aec7  85f6                 test esi, esi
// 00a6aec9  740b                 je 0xa6aed6
// 00a6aecb  6a00                 push 0
// 00a6aecd  6a00                 push 0
// 00a6aecf  56                   push esi
// 00a6aed0  ff15ec3bb200         call dword ptr [0xb23bec]
// 00a6aed6  b001                 mov al, 1
// 00a6aed8  5e                   pop esi
// 00a6aed9  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTButton.cpp (function ?Init@CXTButton@@MAE_NXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTButton.cpp
