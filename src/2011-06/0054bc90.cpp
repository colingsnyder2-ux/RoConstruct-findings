// roc 2011-06 0054bc90  unit: G3D::_internal::DialogTemplate  size: 328 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0054bc90
//
// 0054bc90  83ec18               sub esp, 0x18
// 0054bc93  53                   push ebx
// 0054bc94  55                   push ebp
// 0054bc95  56                   push esi
// 0054bc96  57                   push edi
// 0054bc97  8bf8                 mov edi, eax
// 0054bc99  b88b000000           mov eax, 0x8b
// 0054bc9e  2bc7                 sub eax, edi
// 0054bca0  03c0                 add eax, eax
// 0054bca2  99                   cdq 
// 0054bca3  f7ff                 idiv edi
// 0054bca5  6a08                 push 8
// 0054bca7  68a000a800           push 0xa800a0
// 0054bcac  6880000000           push 0x80
// 0054bcb1  6818010000           push 0x118
// 0054bcb6  6a0a                 push 0xa
// 0054bcb8  6a0a                 push 0xa
// 0054bcba  680008c800           push 0xc80800
// 0054bcbf  8d4c2434             lea ecx, [esp + 0x34]
// 0054bcc3  8bd8                 mov ebx, eax
// 0054bcc5  8b442448             mov eax, dword ptr [esp + 0x48]
// 0054bcc9  50                   push eax
// 0054bcca  e861fdffff           call 0x54ba30
// 0054bccf  68e8030000           push 0x3e8
// 0054bcd4  6a6c                 push 0x6c
// 0054bcd6  6814010000           push 0x114
// 0054bcdb  6a02                 push 2
// 0054bcdd  6a02                 push 2
// 0054bcdf  6800000200           push 0x20000
// 0054bce4  68040c0110           push 0x10010c04
// 0054bce9  683862a600           push 0xa66238
// 0054bcee  8d4c2438             lea ecx, [esp + 0x38]
// 0054bcf2  e8c9feffff           call 0x54bbc0
// 0054bcf7  33f6                 xor esi, esi
// 0054bcf9  85ff                 test edi, edi
// 0054bcfb  7e32                 jle 0x54bd2f
// 0054bcfd  8d6e02               lea ebp, [esi + 2]
// 0054bd00  8b542434             mov edx, dword ptr [esp + 0x34]
// 0054bd04  8b04b2               mov eax, dword ptr [edx + esi*4]
// 0054bd07  8d8ed0070000         lea ecx, [esi + 0x7d0]
// 0054bd0d  51                   push ecx
// 0054bd0e  6a0d                 push 0xd
// 0054bd10  53                   push ebx
// 0054bd11  6a71                 push 0x71
// 0054bd13  55                   push ebp
// 0054bd14  6a00                 push 0
// 0054bd16  6800000110           push 0x10010000
// 0054bd1b  50                   push eax
// 0054bd1c  8d4c2438             lea ecx, [esp + 0x38]
// 0054bd20  e8cbfdffff           call 0x54baf0
// 0054bd25  8d4302               lea eax, [ebx + 2]
// 0054bd28  46                   inc esi
// 0054bd29  03e8                 add ebp, eax
// 0054bd2b  3bf7                 cmp esi, edi
// 0054bd2d  7cd1                 jl 0x54bd00
// 0054bd2f  8b742430             mov esi, dword ptr [esp + 0x30]
// 0054bd33  8a0e                 mov cl, byte ptr [esi]
// 0054bd35  33d2                 xor edx, edx
// 0054bd37  8bc6                 mov eax, esi
// 0054bd39  84c9                 test cl, cl
// 0054bd3b  741c                 je 0x54bd59
// 0054bd3d  8d4900               lea ecx, [ecx]
// 0054bd40  80f90a               cmp cl, 0xa
// 0054bd43  750b                 jne 0x54bd50
// 0054bd45  3bc6                 cmp eax, esi
// 0054bd47  7407                 je 0x54bd50
// 0054bd49  8078ff0d             cmp byte ptr [eax - 1], 0xd
// 0054bd4d  7401                 je 0x54bd50
// 0054bd4f  42                   inc edx
// 0054bd50  8a4801               mov cl, byte ptr [eax + 1]
// 0054bd53  40                   inc eax
// 0054bd54  42                   inc edx
// 0054bd55  84c9                 test cl, cl
// 0054bd57  75e7                 jne 0x54bd40
// 0054bd59  42                   inc edx
// 0054bd5a  52                   push edx
// 0054bd5b  ff15400aa400         call dword ptr [0xa40a40]
// 0054bd61  8be8                 mov ebp, eax
// 0054bd63  83c404               add esp, 4
// 0054bd66  803e00               cmp byte ptr [esi], 0
// 0054bd69  8bc6                 mov eax, esi
// 0054bd6b  8bcd                 mov ecx, ebp
// 0054bd6d  741f                 je 0x54bd8e
// 0054bd6f  90                   nop 
// 0054bd70  80380a               cmp byte ptr [eax], 0xa
// 0054bd73  750e                 jne 0x54bd83
// 0054bd75  3bc6                 cmp eax, esi
// 0054bd77  740a                 je 0x54bd83
// 0054bd79  8078ff0d             cmp byte ptr [eax - 1], 0xd
// 0054bd7d  7404                 je 0x54bd83
// 0054bd7f  c6010d               mov byte ptr [ecx], 0xd
// 0054bd82  41                   inc ecx
// 0054bd83  8a10                 mov dl, byte ptr [eax]
// 0054bd85  8811                 mov byte ptr [ecx], dl
// 0054bd87  40                   inc eax
// 0054bd88  41                   inc ecx
// 0054bd89  803800               cmp byte ptr [eax], 0
// 0054bd8c  75e2                 jne 0x54bd70
// 0054bd8e  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0054bd92  c60100               mov byte ptr [ecx], 0
// 0054bd95  6a00                 push 0
// 0054bd97  896c2414             mov dword ptr [esp + 0x14], ebp
// 0054bd9b  89442418             mov dword ptr [esp + 0x18], eax
// 0054bd9f  ff156803a400         call dword ptr [0xa40368]
// 0054bda5  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0054bda9  8d4c2410             lea ecx, [esp + 0x10]
// 0054bdad  51                   push ecx
// 0054bdae  68b0b75400           push 0x54b7b0
// 0054bdb3  6a00                 push 0
// 0054bdb5  56                   push esi
// 0054bdb6  50                   push eax
// 0054bdb7  ff15941ba400         call dword ptr [0xa41b94]
// 0054bdbd  8b1d740aa400         mov ebx, dword ptr [0xa40a74]
// 0054bdc3  55                   push ebp
// 0054bdc4  8bf8                 mov edi, eax
// 0054bdc6  ffd3                 call ebx
// 0054bdc8  56                   push esi
// 0054bdc9  ffd3                 call ebx
// 0054bdcb  83c408               add esp, 8
// 0054bdce  8bc7                 mov eax, edi
// 0054bdd0  5f                   pop edi
// 0054bdd1  5e                   pop esi
// 0054bdd2  5d                   pop ebp
// 0054bdd3  5b                   pop ebx
// 0054bdd4  83c418               add esp, 0x18
// 0054bdd7  c3                   ret 
// library g3d-6.09/G3Dcpp\prompt.cpp (function ?guiPrompt@G3D@@YAHPBD0PAPBDH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/prompt.cpp
