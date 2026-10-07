// roc 2008-06 00792ad0  unit: CXTCaptionButton  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00792ad0
//
// 00792ad0  56                   push esi
// 00792ad1  8bf1                 mov esi, ecx
// 00792ad3  837e2000             cmp dword ptr [esi + 0x20], 0
// 00792ad7  7413                 je 0x792aec
// 00792ad9  e82c950200           call 0x7bc00a
// 00792ade  83e00f               and eax, 0xf
// 00792ae1  3c0b                 cmp al, 0xb
// 00792ae3  7507                 jne 0x792aec
// 00792ae5  b801000000           mov eax, 1
// 00792aea  eb02                 jmp 0x792aee
// 00792aec  33c0                 xor eax, eax
// 00792aee  8986a8000000         mov dword ptr [esi + 0xa8], eax
// 00792af4  8b7620               mov esi, dword ptr [esi + 0x20]
// 00792af7  85f6                 test esi, esi
// 00792af9  740b                 je 0x792b06
// 00792afb  6a00                 push 0
// 00792afd  6a00                 push 0
// 00792aff  56                   push esi
// 00792b00  ff15182e8000         call dword ptr [0x802e18]
// 00792b06  b001                 mov al, 1
// 00792b08  5e                   pop esi
// 00792b09  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTButton.cpp (function ?Init@CXTButton@@MAE_NXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTButton.cpp
