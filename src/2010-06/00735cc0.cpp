// roc 2010-06 00735cc0  unit: seg_00730000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00735cc0
//
// 00735cc0  56                   push esi
// 00735cc1  57                   push edi
// 00735cc2  8bf8                 mov edi, eax
// 00735cc4  803f00               cmp byte ptr [edi], 0
// 00735cc7  8bf1                 mov esi, ecx
// 00735cc9  7406                 je 0x735cd1
// 00735ccb  807f0100             cmp byte ptr [edi + 1], 0
// 00735ccf  7511                 jne 0x735ce2
// 00735cd1  8b4308               mov eax, dword ptr [ebx + 8]
// 00735cd4  687ce3a400           push 0xa4e37c
// 00735cd9  50                   push eax
// 00735cda  e8c1c7feff           call 0x7224a0
// 00735cdf  83c408               add esp, 8
// 00735ce2  8a07                 mov al, byte ptr [edi]
// 00735ce4  3806                 cmp byte ptr [esi], al
// 00735ce6  7405                 je 0x735ced
// 00735ce8  5f                   pop edi
// 00735ce9  33c0                 xor eax, eax
// 00735ceb  5e                   pop esi
// 00735cec  c3                   ret 
// 00735ced  8b4b04               mov ecx, dword ptr [ebx + 4]
// 00735cf0  0fbe7f01             movsx edi, byte ptr [edi + 1]
// 00735cf4  46                   inc esi
// 00735cf5  55                   push ebp
// 00735cf6  0fbee8               movsx ebp, al
// 00735cf9  ba01000000           mov edx, 1
// 00735cfe  3bf1                 cmp esi, ecx
// 00735d00  731d                 jae 0x735d1f
// 00735d02  0fbe06               movsx eax, byte ptr [esi]
// 00735d05  3bc7                 cmp eax, edi
// 00735d07  750c                 jne 0x735d15
// 00735d09  83ea01               sub edx, 1
// 00735d0c  750c                 jne 0x735d1a
// 00735d0e  5d                   pop ebp
// 00735d0f  5f                   pop edi
// 00735d10  8d4601               lea eax, [esi + 1]
// 00735d13  5e                   pop esi
// 00735d14  c3                   ret 
// 00735d15  3bc5                 cmp eax, ebp
// 00735d17  7501                 jne 0x735d1a
// 00735d19  42                   inc edx
// 00735d1a  46                   inc esi
// 00735d1b  3bf1                 cmp esi, ecx
// 00735d1d  72e3                 jb 0x735d02
// 00735d1f  5d                   pop ebp
// 00735d20  5f                   pop edi
// 00735d21  33c0                 xor eax, eax
// 00735d23  5e                   pop esi
// 00735d24  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _matchbalance)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
