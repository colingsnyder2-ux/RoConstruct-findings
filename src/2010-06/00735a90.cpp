// roc 2010-06 00735a90  unit: seg_00730000  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00735a90
//
// 00735a90  56                   push esi
// 00735a91  8bf0                 mov esi, eax
// 00735a93  0fbe06               movsx eax, byte ptr [esi]
// 00735a96  46                   inc esi
// 00735a97  83f825               cmp eax, 0x25
// 00735a9a  7442                 je 0x735ade
// 00735a9c  83f85b               cmp eax, 0x5b
// 00735a9f  7404                 je 0x735aa5
// 00735aa1  8bc6                 mov eax, esi
// 00735aa3  5e                   pop esi
// 00735aa4  c3                   ret 
// 00735aa5  803e5e               cmp byte ptr [esi], 0x5e
// 00735aa8  7506                 jne 0x735ab0
// 00735aaa  46                   inc esi
// 00735aab  eb03                 jmp 0x735ab0
// 00735aad  8d4900               lea ecx, [ecx]
// 00735ab0  803e00               cmp byte ptr [esi], 0
// 00735ab3  7511                 jne 0x735ac6
// 00735ab5  8b4708               mov eax, dword ptr [edi + 8]
// 00735ab8  685ce3a400           push 0xa4e35c
// 00735abd  50                   push eax
// 00735abe  e8ddc9feff           call 0x7224a0
// 00735ac3  83c408               add esp, 8
// 00735ac6  8a0e                 mov cl, byte ptr [esi]
// 00735ac8  46                   inc esi
// 00735ac9  80f925               cmp cl, 0x25
// 00735acc  7506                 jne 0x735ad4
// 00735ace  803e00               cmp byte ptr [esi], 0
// 00735ad1  7401                 je 0x735ad4
// 00735ad3  46                   inc esi
// 00735ad4  803e5d               cmp byte ptr [esi], 0x5d
// 00735ad7  75d7                 jne 0x735ab0
// 00735ad9  8d4601               lea eax, [esi + 1]
// 00735adc  5e                   pop esi
// 00735add  c3                   ret 
// 00735ade  803e00               cmp byte ptr [esi], 0
// 00735ae1  7511                 jne 0x735af4
// 00735ae3  8b5708               mov edx, dword ptr [edi + 8]
// 00735ae6  6838e3a400           push 0xa4e338
// 00735aeb  52                   push edx
// 00735aec  e8afc9feff           call 0x7224a0
// 00735af1  83c408               add esp, 8
// 00735af4  8d4601               lea eax, [esi + 1]
// 00735af7  5e                   pop esi
// 00735af8  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _classend)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
