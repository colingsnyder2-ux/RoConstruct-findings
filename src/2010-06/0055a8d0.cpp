// roc 2010-06 0055a8d0  unit: G3D::BinaryInput  size: 778 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0055a8d0
//
// 0055a8d0  64a100000000         mov eax, dword ptr fs:[0]
// 0055a8d6  6aff                 push -1
// 0055a8d8  68cb149900           push 0x9914cb
// 0055a8dd  50                   push eax
// 0055a8de  64892500000000       mov dword ptr fs:[0], esp
// 0055a8e5  81ece4000000         sub esp, 0xe4
// 0055a8eb  56                   push esi
// 0055a8ec  8bb424f8000000       mov esi, dword ptr [esp + 0xf8]
// 0055a8f3  68fe08a000           push 0xa008fe
// 0055a8f8  56                   push esi
// 0055a8f9  ff1558a49e00         call dword ptr [0x9ea458]
// 0055a8ff  83c408               add esp, 8
// 0055a902  84c0                 test al, al
// 0055a904  0f85ba020000         jne 0x55abc4
// 0055a90a  55                   push ebp
// 0055a90b  57                   push edi
// 0055a90c  8d4c2434             lea ecx, [esp + 0x34]
// 0055a910  ff1504a49e00         call dword ptr [0x9ea404]
// 0055a916  8b4614               mov eax, dword ptr [esi + 0x14]
// 0055a919  33ed                 xor ebp, ebp
// 0055a91b  8d78ff               lea edi, [eax - 1]
// 0055a91e  89ac24f8000000       mov dword ptr [esp + 0xf8], ebp
// 0055a925  3bf8                 cmp edi, eax
// 0055a927  7606                 jbe 0x55a92f
// 0055a929  ff150ca99e00         call dword ptr [0x9ea90c]
// 0055a92f  837e1810             cmp dword ptr [esi + 0x18], 0x10
// 0055a933  7205                 jb 0x55a93a
// 0055a935  8b4604               mov eax, dword ptr [esi + 4]
// 0055a938  eb03                 jmp 0x55a93d
// 0055a93a  8d4604               lea eax, [esi + 4]
// 0055a93d  8a0438               mov al, byte ptr [eax + edi]
// 0055a940  8b3d88a49e00         mov edi, dword ptr [0x9ea488]
// 0055a946  3c2f                 cmp al, 0x2f
// 0055a948  743b                 je 0x55a985
// 0055a94a  3c5c                 cmp al, 0x5c
// 0055a94c  7437                 je 0x55a985
// 0055a94e  68782da100           push 0xa12d78
// 0055a953  8d442454             lea eax, [esp + 0x54]
// 0055a957  56                   push esi
// 0055a958  50                   push eax
// 0055a959  ffd7                 call edi
// 0055a95b  83c40c               add esp, 0xc
// 0055a95e  50                   push eax
// 0055a95f  8d4c2438             lea ecx, [esp + 0x38]
// 0055a963  c68424fc00000001     mov byte ptr [esp + 0xfc], 1
// 0055a96b  ff1568a49e00         call dword ptr [0x9ea468]
// 0055a971  8d4c2450             lea ecx, [esp + 0x50]
// 0055a975  c68424f800000000     mov byte ptr [esp + 0xf8], 0
// 0055a97d  ff1500a49e00         call dword ptr [0x9ea400]
// 0055a983  eb0b                 jmp 0x55a990
// 0055a985  56                   push esi
// 0055a986  8d4c2438             lea ecx, [esp + 0x38]
// 0055a98a  ff1568a49e00         call dword ptr [0x9ea468]
// 0055a990  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0055a994  53                   push ebx
// 0055a995  49                   dec ecx
// 0055a996  51                   push ecx
// 0055a997  55                   push ebp
// 0055a998  8d54245c             lea edx, [esp + 0x5c]
// 0055a99c  52                   push edx
// 0055a99d  8d4c2444             lea ecx, [esp + 0x44]
// 0055a9a1  ff155ca49e00         call dword ptr [0x9ea45c]
// 0055a9a7  50                   push eax
// 0055a9a8  c684240001000002     mov byte ptr [esp + 0x100], 2
// 0055a9b0  e83bf8ffff           call 0x55a1f0
// 0055a9b5  83c404               add esp, 4
// 0055a9b8  8d4c2454             lea ecx, [esp + 0x54]
// 0055a9bc  8ad8                 mov bl, al
// 0055a9be  c68424fc00000000     mov byte ptr [esp + 0xfc], 0
// 0055a9c6  ff1500a49e00         call dword ptr [0x9ea400]
// 0055a9cc  84db                 test bl, bl
// 0055a9ce  0f85d8010000         jne 0x55abac
// 0055a9d4  8d8c2484000000       lea ecx, [esp + 0x84]
// 0055a9db  ff1504a49e00         call dword ptr [0x9ea404]
// 0055a9e1  8d8c24bc000000       lea ecx, [esp + 0xbc]
// 0055a9e8  c68424fc00000003     mov byte ptr [esp + 0xfc], 3
// 0055a9f0  ff1504a49e00         call dword ptr [0x9ea404]
// 0055a9f6  8d8c24a0000000       lea ecx, [esp + 0xa0]
// 0055a9fd  c68424fc00000004     mov byte ptr [esp + 0xfc], 4
// 0055aa05  ff1504a49e00         call dword ptr [0x9ea404]
// 0055aa0b  896c2414             mov dword ptr [esp + 0x14], ebp
// 0055aa0f  896c2418             mov dword ptr [esp + 0x18], ebp
// 0055aa13  896c2410             mov dword ptr [esp + 0x10], ebp
// 0055aa17  8d8c24d8000000       lea ecx, [esp + 0xd8]
// 0055aa1e  c68424fc00000006     mov byte ptr [esp + 0xfc], 6
// 0055aa26  ff1504a49e00         call dword ptr [0x9ea404]
// 0055aa2c  8d8424a0000000       lea eax, [esp + 0xa0]
// 0055aa33  50                   push eax
// 0055aa34  8d8c24c0000000       lea ecx, [esp + 0xc0]
// 0055aa3b  51                   push ecx
// 0055aa3c  8d542418             lea edx, [esp + 0x18]
// 0055aa40  52                   push edx
// 0055aa41  8d842490000000       lea eax, [esp + 0x90]
// 0055aa48  50                   push eax
// 0055aa49  8d4c2448             lea ecx, [esp + 0x48]
// 0055aa4d  51                   push ecx
// 0055aa4e  c684241001000007     mov byte ptr [esp + 0x110], 7
// 0055aa56  e815f9ffff           call 0x55a370
// 0055aa5b  683428a100           push 0xa12834
// 0055aa60  8d94249c000000       lea edx, [esp + 0x9c]
// 0055aa67  52                   push edx
// 0055aa68  8d442438             lea eax, [esp + 0x38]
// 0055aa6c  50                   push eax
// 0055aa6d  ffd7                 call edi
// 0055aa6f  83c420               add esp, 0x20
// 0055aa72  396c2414             cmp dword ptr [esp + 0x14], ebp
// 0055aa76  c68424fc00000008     mov byte ptr [esp + 0xfc], 8
// 0055aa7e  0f8eb1000000         jle 0x55ab35
// 0055aa84  8b3d18a59e00         mov edi, dword ptr [0x9ea518]
// 0055aa8a  33f6                 xor esi, esi
// 0055aa8c  8d642400             lea esp, [esp]
// 0055aa90  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0055aa94  8d040e               lea eax, [esi + ecx]
// 0055aa97  50                   push eax
// 0055aa98  8d542458             lea edx, [esp + 0x58]
// 0055aa9c  68782da100           push 0xa12d78
// 0055aaa1  52                   push edx
// 0055aaa2  ffd7                 call edi
// 0055aaa4  83c40c               add esp, 0xc
// 0055aaa7  50                   push eax
// 0055aaa8  8d4c2420             lea ecx, [esp + 0x20]
// 0055aaac  c684240001000009     mov byte ptr [esp + 0x100], 9
// 0055aab4  ff1518a49e00         call dword ptr [0x9ea418]
// 0055aaba  8d4c2454             lea ecx, [esp + 0x54]
// 0055aabe  c68424fc00000008     mov byte ptr [esp + 0xfc], 8
// 0055aac6  ff1500a49e00         call dword ptr [0x9ea400]
// 0055aacc  8d44241c             lea eax, [esp + 0x1c]
// 0055aad0  68fe08a000           push 0xa008fe
// 0055aad5  50                   push eax
// 0055aad6  ff1558a49e00         call dword ptr [0x9ea458]
// 0055aadc  83c408               add esp, 8
// 0055aadf  84c0                 test al, al
// 0055aae1  7544                 jne 0x55ab27
// 0055aae3  8b442420             mov eax, dword ptr [esp + 0x20]
// 0055aae7  bb10000000           mov ebx, 0x10
// 0055aaec  395c2434             cmp dword ptr [esp + 0x34], ebx
// 0055aaf0  7304                 jae 0x55aaf6
// 0055aaf2  8d442420             lea eax, [esp + 0x20]
// 0055aaf6  8d4c2454             lea ecx, [esp + 0x54]
// 0055aafa  51                   push ecx
// 0055aafb  50                   push eax
// 0055aafc  ff15b8a79e00         call dword ptr [0x9ea7b8]
// 0055ab02  83c408               add esp, 8
// 0055ab05  83f8ff               cmp eax, -1
// 0055ab08  0f95c0               setne al
// 0055ab0b  84c0                 test al, al
// 0055ab0d  7518                 jne 0x55ab27
// 0055ab0f  8b442420             mov eax, dword ptr [esp + 0x20]
// 0055ab13  395c2434             cmp dword ptr [esp + 0x34], ebx
// 0055ab17  7304                 jae 0x55ab1d
// 0055ab19  8d442420             lea eax, [esp + 0x20]
// 0055ab1d  50                   push eax
// 0055ab1e  ff15e8a79e00         call dword ptr [0x9ea7e8]
// 0055ab24  83c404               add esp, 4
// 0055ab27  45                   inc ebp
// 0055ab28  83c61c               add esi, 0x1c
// 0055ab2b  3b6c2414             cmp ebp, dword ptr [esp + 0x14]
// 0055ab2f  0f8c5bffffff         jl 0x55aa90
// 0055ab35  8d4c241c             lea ecx, [esp + 0x1c]
// 0055ab39  c68424fc00000007     mov byte ptr [esp + 0xfc], 7
// 0055ab41  ff1500a49e00         call dword ptr [0x9ea400]
// 0055ab47  8d8c24d8000000       lea ecx, [esp + 0xd8]
// 0055ab4e  c68424fc00000006     mov byte ptr [esp + 0xfc], 6
// 0055ab56  ff1500a49e00         call dword ptr [0x9ea400]
// 0055ab5c  8d4c2410             lea ecx, [esp + 0x10]
// 0055ab60  c68424fc00000005     mov byte ptr [esp + 0xfc], 5
// 0055ab68  e83336ffff           call 0x54e1a0
// 0055ab6d  8d8c24a0000000       lea ecx, [esp + 0xa0]
// 0055ab74  c68424fc00000004     mov byte ptr [esp + 0xfc], 4
// 0055ab7c  ff1500a49e00         call dword ptr [0x9ea400]
// 0055ab82  8d8c24bc000000       lea ecx, [esp + 0xbc]
// 0055ab89  c68424fc00000003     mov byte ptr [esp + 0xfc], 3
// 0055ab91  ff1500a49e00         call dword ptr [0x9ea400]
// 0055ab97  8d8c2484000000       lea ecx, [esp + 0x84]
// 0055ab9e  c68424fc00000000     mov byte ptr [esp + 0xfc], 0
// 0055aba6  ff1500a49e00         call dword ptr [0x9ea400]
// 0055abac  8d4c2438             lea ecx, [esp + 0x38]
// 0055abb0  c78424fc000000ffffffff mov dword ptr [esp + 0xfc], 0xffffffff
// 0055abbb  ff1500a49e00         call dword ptr [0x9ea400]
// 0055abc1  5b                   pop ebx
// 0055abc2  5f                   pop edi
// 0055abc3  5d                   pop ebp
// 0055abc4  8b8c24e8000000       mov ecx, dword ptr [esp + 0xe8]
// 0055abcb  5e                   pop esi
// 0055abcc  64890d00000000       mov dword ptr fs:[0], ecx
// 0055abd3  81c4f0000000         add esp, 0xf0
// 0055abd9  c3                   ret 
// library g3d-6.09/G3Dcpp\fileutils.cpp (function ?createDirectory@G3D@@YAXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/fileutils.cpp
