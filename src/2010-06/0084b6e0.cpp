// roc 2010-06 0084b6e0  unit: CXTPRibbonBar  size: 1372 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0084b6e0
//
// 0084b6e0  6aff                 push -1
// 0084b6e2  6805789b00           push 0x9b7805
// 0084b6e7  64a100000000         mov eax, dword ptr fs:[0]
// 0084b6ed  50                   push eax
// 0084b6ee  83ec2c               sub esp, 0x2c
// 0084b6f1  53                   push ebx
// 0084b6f2  55                   push ebp
// 0084b6f3  56                   push esi
// 0084b6f4  57                   push edi
// 0084b6f5  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 0084b6fa  33c4                 xor eax, esp
// 0084b6fc  50                   push eax
// 0084b6fd  8d442440             lea eax, [esp + 0x40]
// 0084b701  64a300000000         mov dword ptr fs:[0], eax
// 0084b707  8be9                 mov ebp, ecx
// 0084b709  83bd4c02000000       cmp dword ptr [ebp + 0x24c], 0
// 0084b710  752f                 jne 0x84b741
// 0084b712  e8b9cef6ff           call 0x7b85d0
// 0084b717  8b10                 mov edx, dword ptr [eax]
// 0084b719  8bc8                 mov ecx, eax
// 0084b71b  8b426c               mov eax, dword ptr [edx + 0x6c]
// 0084b71e  ffd0                 call eax
// 0084b720  8bcd                 mov ecx, ebp
// 0084b722  8bf0                 mov esi, eax
// 0084b724  e8d7faf6ff           call 0x7bb200
// 0084b729  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0084b72c  56                   push esi
// 0084b72d  55                   push ebp
// 0084b72e  685c280000           push 0x285c
// 0084b733  51                   push ecx
// 0084b734  ff1554ba9e00         call dword ptr [0x9eba54]
// 0084b73a  8bc6                 mov eax, esi
// 0084b73c  e9ba040000           jmp 0x84bbfb
// 0084b741  8b5c2450             mov ebx, dword ptr [esp + 0x50]
// 0084b745  85db                 test ebx, ebx
// 0084b747  0f84a2000000         je 0x84b7ef
// 0084b74d  83bbfc0000000a       cmp dword ptr [ebx + 0xfc], 0xa
// 0084b754  753b                 jne 0x84b791
// 0084b756  8b13                 mov edx, dword ptr [ebx]
// 0084b758  8b828c000000         mov eax, dword ptr [edx + 0x8c]
// 0084b75e  8bcb                 mov ecx, ebx
// 0084b760  ffd0                 call eax
// 0084b762  85c0                 test eax, eax
// 0084b764  752b                 jne 0x84b791
// 0084b766  8b8300010000         mov eax, dword ptr [ebx + 0x100]
// 0084b76c  50                   push eax
// 0084b76d  e8aea2faff           call 0x7f5a20
// 0084b772  50                   push eax
// 0084b773  e806c6f5ff           call 0x7a7d7e
// 0084b778  83c408               add esp, 8
// 0084b77b  85c0                 test eax, eax
// 0084b77d  7412                 je 0x84b791
// 0084b77f  8b8300010000         mov eax, dword ptr [ebx + 0x100]
// 0084b785  8b8880010000         mov ecx, dword ptr [eax + 0x180]
// 0084b78b  894c2450             mov dword ptr [esp + 0x50], ecx
// 0084b78f  8bd9                 mov ebx, ecx
// 0084b791  8b8384000000         mov eax, dword ptr [ebx + 0x84]
// 0084b797  33d2                 xor edx, edx
// 0084b799  3d83250000           cmp eax, 0x2583
// 0084b79e  0f94c2               sete dl
// 0084b7a1  bf3c3da000           mov edi, 0xa03d3c
// 0084b7a6  33c0                 xor eax, eax
// 0084b7a8  897c2438             mov dword ptr [esp + 0x38], edi
// 0084b7ac  8944243c             mov dword ptr [esp + 0x3c], eax
// 0084b7b0  8bf2                 mov esi, edx
// 0084b7b2  89442448             mov dword ptr [esp + 0x48], eax
// 0084b7b6  e8f570fdff           call 0x8228b0
// 0084b7bb  8b10                 mov edx, dword ptr [eax]
// 0084b7bd  8b520c               mov edx, dword ptr [edx + 0xc]
// 0084b7c0  8bce                 mov ecx, esi
// 0084b7c2  f7d9                 neg ecx
// 0084b7c4  1bc9                 sbb ecx, ecx
// 0084b7c6  81c182250000         add ecx, 0x2582
// 0084b7cc  51                   push ecx
// 0084b7cd  8d4c243c             lea ecx, [esp + 0x3c]
// 0084b7d1  51                   push ecx
// 0084b7d2  8bc8                 mov ecx, eax
// 0084b7d4  ffd2                 call edx
// 0084b7d6  85c0                 test eax, eax
// 0084b7d8  751c                 jne 0x84b7f6
// 0084b7da  8d4c2438             lea ecx, [esp + 0x38]
// 0084b7de  c7442448ffffffff     mov dword ptr [esp + 0x48], 0xffffffff
// 0084b7e6  897c2438             mov dword ptr [esp + 0x38], edi
// 0084b7ea  e823cbf5ff           call 0x7a8312
// 0084b7ef  33c0                 xor eax, eax
// 0084b7f1  e905040000           jmp 0x84bbfb
// 0084b7f6  8bcd                 mov ecx, ebp
// 0084b7f8  e8d3cdf6ff           call 0x7b85d0
// 0084b7fd  50                   push eax
// 0084b7fe  e82da2faff           call 0x7f5a30
// 0084b803  8bf8                 mov edi, eax
// 0084b805  8b4520               mov eax, dword ptr [ebp + 0x20]
// 0084b808  83c404               add esp, 4
// 0084b80b  894738               mov dword ptr [edi + 0x38], eax
// 0084b80e  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0084b812  6a00                 push 0
// 0084b814  51                   push ecx
// 0084b815  897c2430             mov dword ptr [esp + 0x30], edi
// 0084b819  ff1564bc9e00         call dword ptr [0x9ebc64]
// 0084b81f  50                   push eax
// 0084b820  e805c8f5ff           call 0x7a802a
// 0084b825  8b17                 mov edx, dword ptr [edi]
// 0084b827  6a01                 push 1
// 0084b829  50                   push eax
// 0084b82a  8b824c010000         mov eax, dword ptr [edx + 0x14c]
// 0084b830  8bcf                 mov ecx, edi
// 0084b832  ffd0                 call eax
// 0084b834  6874010000           push 0x174
// 0084b839  e862c1f5ff           call 0x7a79a0
// 0084b83e  83c404               add esp, 4
// 0084b841  89442430             mov dword ptr [esp + 0x30], eax
// 0084b845  c644244801           mov byte ptr [esp + 0x48], 1
// 0084b84a  85c0                 test eax, eax
// 0084b84c  7409                 je 0x84b857
// 0084b84e  8bc8                 mov ecx, eax
// 0084b850  e88b0ffbff           call 0x7fc7e0
// 0084b855  eb02                 jmp 0x84b859
// 0084b857  33c0                 xor eax, eax
// 0084b859  8b8ffc000000         mov ecx, dword ptr [edi + 0xfc]
// 0084b85f  f7de                 neg esi
// 0084b861  1bf6                 sbb esi, esi
// 0084b863  83e6fe               and esi, 0xfffffffe
// 0084b866  83c602               add esi, 2
// 0084b869  56                   push esi
// 0084b86a  50                   push eax
// 0084b86b  c644245000           mov byte ptr [esp + 0x50], 0
// 0084b870  e88bfafaff           call 0x7fb300
// 0084b875  8b10                 mov edx, dword ptr [eax]
// 0084b877  8bc8                 mov ecx, eax
// 0084b879  8b4264               mov eax, dword ptr [edx + 0x64]
// 0084b87c  6a01                 push 1
// 0084b87e  ffd0                 call eax
// 0084b880  53                   push ebx
// 0084b881  8bcd                 mov ecx, ebp
// 0084b883  e848eaffff           call 0x84a2d0
// 0084b888  8b5500               mov edx, dword ptr [ebp]
// 0084b88b  89442420             mov dword ptr [esp + 0x20], eax
// 0084b88f  8b8234020000         mov eax, dword ptr [edx + 0x234]
// 0084b895  53                   push ebx
// 0084b896  8bcd                 mov ecx, ebp
// 0084b898  ffd0                 call eax
// 0084b89a  8bcb                 mov ecx, ebx
// 0084b89c  8944242c             mov dword ptr [esp + 0x2c], eax
// 0084b8a0  e8fbe1e4ff           call 0x699aa0
// 0084b8a5  a810                 test al, 0x10
// 0084b8a7  7511                 jne 0x84b8ba
// 0084b8a9  83bbac00000000       cmp dword ptr [ebx + 0xac], 0
// 0084b8b0  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0084b8b8  7408                 je 0x84b8c2
// 0084b8ba  c744241801000000     mov dword ptr [esp + 0x18], 1
// 0084b8c2  33f6                 xor esi, esi
// 0084b8c4  8bcf                 mov ecx, edi
// 0084b8c6  89742414             mov dword ptr [esp + 0x14], esi
// 0084b8ca  e8f1daf6ff           call 0x7b93c0
// 0084b8cf  85c0                 test eax, eax
// 0084b8d1  0f8ef1020000         jle 0x84bbc8
// 0084b8d7  56                   push esi
// 0084b8d8  8bcf                 mov ecx, edi
// 0084b8da  e8f1daf6ff           call 0x7b93d0
// 0084b8df  8bd8                 mov ebx, eax
// 0084b8e1  81bb8400000090250000 cmp dword ptr [ebx + 0x84], 0x2590
// 0084b8eb  750c                 jne 0x84b8f9
// 0084b8ed  6887250000           push 0x2587
// 0084b8f2  8bcb                 mov ecx, ebx
// 0084b8f4  e837e6f5ff           call 0x7a9f30
// 0084b8f9  81bb8400000091250000 cmp dword ptr [ebx + 0x84], 0x2591
// 0084b903  750c                 jne 0x84b911
// 0084b905  6888250000           push 0x2588
// 0084b90a  8bcb                 mov ecx, ebx
// 0084b90c  e81fe6f5ff           call 0x7a9f30
// 0084b911  81bb8400000092250000 cmp dword ptr [ebx + 0x84], 0x2592
// 0084b91b  750c                 jne 0x84b929
// 0084b91d  688a250000           push 0x258a
// 0084b922  8bcb                 mov ecx, ebx
// 0084b924  e807e6f5ff           call 0x7a9f30
// 0084b929  8b8384000000         mov eax, dword ptr [ebx + 0x84]
// 0084b92f  057bdaffff           add eax, 0xffffda7b
// 0084b934  83f809               cmp eax, 9
// 0084b937  0f8777020000         ja 0x84bbb4
// 0084b93d  ff248514bc8400       jmp dword ptr [eax*4 + 0x84bc14]
// 0084b944  837c242000           cmp dword ptr [esp + 0x20], 0
// 0084b949  7429                 je 0x84b974
// 0084b94b  837c241800           cmp dword ptr [esp + 0x18], 0
// 0084b950  7522                 jne 0x84b974
// 0084b952  83bd5402000000       cmp dword ptr [ebp + 0x254], 0
// 0084b959  7419                 je 0x84b974
// 0084b95b  b801000000           mov eax, 1
// 0084b960  50                   push eax
// 0084b961  8bcb                 mov ecx, ebx
// 0084b963  e878ebf5ff           call 0x7aa4e0
// 0084b968  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0084b96c  894b7c               mov dword ptr [ebx + 0x7c], ecx
// 0084b96f  e937020000           jmp 0x84bbab
// 0084b974  33c0                 xor eax, eax
// 0084b976  50                   push eax
// 0084b977  8bcb                 mov ecx, ebx
// 0084b979  e862ebf5ff           call 0x7aa4e0
// 0084b97e  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0084b982  894b7c               mov dword ptr [ebx + 0x7c], ecx
// 0084b985  e921020000           jmp 0x84bbab
// 0084b98a  837c242000           cmp dword ptr [esp + 0x20], 0
// 0084b98f  7517                 jne 0x84b9a8
// 0084b991  837c241800           cmp dword ptr [esp + 0x18], 0
// 0084b996  7510                 jne 0x84b9a8
// 0084b998  83bd5402000000       cmp dword ptr [ebp + 0x254], 0
// 0084b99f  7407                 je 0x84b9a8
// 0084b9a1  b801000000           mov eax, 1
// 0084b9a6  eb02                 jmp 0x84b9aa
// 0084b9a8  33c0                 xor eax, eax
// 0084b9aa  50                   push eax
// 0084b9ab  8bcb                 mov ecx, ebx
// 0084b9ad  e82eebf5ff           call 0x7aa4e0
// 0084b9b2  8b13                 mov edx, dword ptr [ebx]
// 0084b9b4  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0084b9b8  8b5268               mov edx, dword ptr [edx + 0x68]
// 0084b9bb  50                   push eax
// 0084b9bc  8bcb                 mov ecx, ebx
// 0084b9be  ffd2                 call edx
// 0084b9c0  8b442450             mov eax, dword ptr [esp + 0x50]
// 0084b9c4  89437c               mov dword ptr [ebx + 0x7c], eax
// 0084b9c7  e9df010000           jmp 0x84bbab
// 0084b9cc  83bd5402000000       cmp dword ptr [ebp + 0x254], 0
// 0084b9d3  0f85d2010000         jne 0x84bbab
// 0084b9d9  68c9230000           push 0x23c9
// 0084b9de  8bcb                 mov ecx, ebx
// 0084b9e0  e8db09f6ff           call 0x7ac3c0
// 0084b9e5  e9c1010000           jmp 0x84bbab
// 0084b9ea  83bd4c02000000       cmp dword ptr [ebp + 0x24c], 0
// 0084b9f1  741b                 je 0x84ba0e
// 0084b9f3  83bd4802000000       cmp dword ptr [ebp + 0x248], 0
// 0084b9fa  7512                 jne 0x84ba0e
// 0084b9fc  b801000000           mov eax, 1
// 0084ba01  50                   push eax
// 0084ba02  8bcb                 mov ecx, ebx
// 0084ba04  e8d7eaf5ff           call 0x7aa4e0
// 0084ba09  e99d010000           jmp 0x84bbab
// 0084ba0e  33c0                 xor eax, eax
// 0084ba10  50                   push eax
// 0084ba11  8bcb                 mov ecx, ebx
// 0084ba13  e8c8eaf5ff           call 0x7aa4e0
// 0084ba18  e98e010000           jmp 0x84bbab
// 0084ba1d  83bd4c02000000       cmp dword ptr [ebp + 0x24c], 0
// 0084ba24  74e8                 je 0x84ba0e
// 0084ba26  83bd4802000000       cmp dword ptr [ebp + 0x248], 0
// 0084ba2d  74df                 je 0x84ba0e
// 0084ba2f  b801000000           mov eax, 1
// 0084ba34  50                   push eax
// 0084ba35  8bcb                 mov ecx, ebx
// 0084ba37  e8a4eaf5ff           call 0x7aa4e0
// 0084ba3c  e96a010000           jmp 0x84bbab
// 0084ba41  8b8ffc000000         mov ecx, dword ptr [edi + 0xfc]
// 0084ba47  6a08                 push 8
// 0084ba49  56                   push esi
// 0084ba4a  e8810bfbff           call 0x7fc5d0
// 0084ba4f  8bd8                 mov ebx, eax
// 0084ba51  6a01                 push 1
// 0084ba53  8bcb                 mov ecx, ebx
// 0084ba55  e826e7f5ff           call 0x7aa180
// 0084ba5a  83bd5402000000       cmp dword ptr [ebp + 0x254], 0
// 0084ba61  74ab                 je 0x84ba0e
// 0084ba63  8b8564020000         mov eax, dword ptr [ebp + 0x264]
// 0084ba69  83783c00             cmp dword ptr [eax + 0x3c], 0
// 0084ba6d  749f                 je 0x84ba0e
// 0084ba6f  b801000000           mov eax, 1
// 0084ba74  50                   push eax
// 0084ba75  8bcb                 mov ecx, ebx
// 0084ba77  e864eaf5ff           call 0x7aa4e0
// 0084ba7c  e92a010000           jmp 0x84bbab
// 0084ba81  8b8d60020000         mov ecx, dword ptr [ebp + 0x260]
// 0084ba87  51                   push ecx
// 0084ba88  8bcb                 mov ecx, ebx
// 0084ba8a  e851eaf5ff           call 0x7aa4e0
// 0084ba8f  8b958c020000         mov edx, dword ptr [ebp + 0x28c]
// 0084ba95  52                   push edx
// 0084ba96  8bcb                 mov ecx, ebx
// 0084ba98  e873c7f6ff           call 0x7b8210
// 0084ba9d  e909010000           jmp 0x84bbab
// 0084baa2  8b03                 mov eax, dword ptr [ebx]
// 0084baa4  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 0084baaa  6a01                 push 1
// 0084baac  8bcb                 mov ecx, ebx
// 0084baae  ffd2                 call edx
// 0084bab0  8b8564020000         mov eax, dword ptr [ebp + 0x264]
// 0084bab6  8b483c               mov ecx, dword ptr [eax + 0x3c]
// 0084bab9  894c2424             mov dword ptr [esp + 0x24], ecx
// 0084babd  85c9                 test ecx, ecx
// 0084babf  0f84ef000000         je 0x84bbb4
// 0084bac5  83bd5402000000       cmp dword ptr [ebp + 0x254], 0
// 0084bacc  0f84e2000000         je 0x84bbb4
// 0084bad2  83792c00             cmp dword ptr [ecx + 0x2c], 0
// 0084bad6  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0084bade  0f8ec7000000         jle 0x84bbab
// 0084bae4  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0084bae8  50                   push eax
// 0084bae9  e862d5bdff           call 0x429050
// 0084baee  6880010000           push 0x180
// 0084baf3  8bf0                 mov esi, eax
// 0084baf5  e8a6bef5ff           call 0x7a79a0
// 0084bafa  83c404               add esp, 4
// 0084bafd  89442434             mov dword ptr [esp + 0x34], eax
// 0084bb01  c644244802           mov byte ptr [esp + 0x48], 2
// 0084bb06  85c0                 test eax, eax
// 0084bb08  7413                 je 0x84bb1d
// 0084bb0a  8b8d64020000         mov ecx, dword ptr [ebp + 0x264]
// 0084bb10  56                   push esi
// 0084bb11  51                   push ecx
// 0084bb12  8bc8                 mov ecx, eax
// 0084bb14  e807d0ffff           call 0x848b20
// 0084bb19  8bf8                 mov edi, eax
// 0084bb1b  eb02                 jmp 0x84bb1f
// 0084bb1d  33ff                 xor edi, edi
// 0084bb1f  8b542414             mov edx, dword ptr [esp + 0x14]
// 0084bb23  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0084bb27  8b89fc000000         mov ecx, dword ptr [ecx + 0xfc]
// 0084bb2d  6a01                 push 1
// 0084bb2f  52                   push edx
// 0084bb30  6a00                 push 0
// 0084bb32  6a00                 push 0
// 0084bb34  57                   push edi
// 0084bb35  c644245c00           mov byte ptr [esp + 0x5c], 0
// 0084bb3a  e87105fbff           call 0x7fc0b0
// 0084bb3f  8b06                 mov eax, dword ptr [esi]
// 0084bb41  8b5058               mov edx, dword ptr [eax + 0x58]
// 0084bb44  8d4c2430             lea ecx, [esp + 0x30]
// 0084bb48  51                   push ecx
// 0084bb49  8bce                 mov ecx, esi
// 0084bb4b  ffd2                 call edx
// 0084bb4d  8bc8                 mov ecx, eax
// 0084bb4f  c644244803           mov byte ptr [esp + 0x48], 3
// 0084bb54  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 0084bb5a  50                   push eax
// 0084bb5b  8bcf                 mov ecx, edi
// 0084bb5d  e8aeecf5ff           call 0x7aa810
// 0084bb62  8d4c2430             lea ecx, [esp + 0x30]
// 0084bb66  c644244800           mov byte ptr [esp + 0x48], 0
// 0084bb6b  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 0084bb71  8b8d64020000         mov ecx, dword ptr [ebp + 0x264]
// 0084bb77  56                   push esi
// 0084bb78  e8138a0500           call 0x8a4590
// 0084bb7d  85c0                 test eax, eax
// 0084bb7f  7408                 je 0x84bb89
// 0084bb81  50                   push eax
// 0084bb82  8bcf                 mov ecx, edi
// 0084bb84  e8d7cfffff           call 0x848b60
// 0084bb89  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0084bb8d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0084bb91  ff442414             inc dword ptr [esp + 0x14]
// 0084bb95  40                   inc eax
// 0084bb96  3b412c               cmp eax, dword ptr [ecx + 0x2c]
// 0084bb99  8944241c             mov dword ptr [esp + 0x1c], eax
// 0084bb9d  0f8c41ffffff         jl 0x84bae4
// 0084bba3  8b742414             mov esi, dword ptr [esp + 0x14]
// 0084bba7  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0084bbab  6a08                 push 8
// 0084bbad  8bcb                 mov ecx, ebx
// 0084bbaf  e8ece5f5ff           call 0x7aa1a0
// 0084bbb4  46                   inc esi
// 0084bbb5  8bcf                 mov ecx, edi
// 0084bbb7  89742414             mov dword ptr [esp + 0x14], esi
// 0084bbbb  e800d8f6ff           call 0x7b93c0
// 0084bbc0  3bf0                 cmp esi, eax
// 0084bbc2  0f8c0ffdffff         jl 0x84b8d7
// 0084bbc8  8bcd                 mov ecx, ebp
// 0084bbca  e831f6f6ff           call 0x7bb200
// 0084bbcf  8b5020               mov edx, dword ptr [eax + 0x20]
// 0084bbd2  57                   push edi
// 0084bbd3  55                   push ebp
// 0084bbd4  685c280000           push 0x285c
// 0084bbd9  52                   push edx
// 0084bbda  ff1554ba9e00         call dword ptr [0x9eba54]
// 0084bbe0  8d4c2438             lea ecx, [esp + 0x38]
// 0084bbe4  c7442448ffffffff     mov dword ptr [esp + 0x48], 0xffffffff
// 0084bbec  c74424383c3da000     mov dword ptr [esp + 0x38], 0xa03d3c
// 0084bbf4  e819c7f5ff           call 0x7a8312
// 0084bbf9  8bc7                 mov eax, edi
// 0084bbfb  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0084bbff  64890d00000000       mov dword ptr fs:[0], ecx
// 0084bc06  59                   pop ecx
// 0084bc07  5f                   pop edi
// 0084bc08  5e                   pop esi
// 0084bc09  5d                   pop ebp
// 0084bc0a  5b                   pop ebx
// 0084bc0b  83c438               add esp, 0x38
// 0084bc0e  c20400               ret 4
// 0084bc11  8d4900               lea ecx, [ecx]
// 0084bc14  44                   inc esp
// 0084bc15  b984008ab9           mov ecx, 0xb98a0084
// 0084bc1a  8400                 test byte ptr [eax], al
// 0084bc1c  cc                   int3 
// 0084bc1d  b98400eab9           mov ecx, 0xb9ea0084
// 0084bc22  8400                 test byte ptr [eax], al
// 0084bc24  b4bb                 mov ah, 0xbb
// 0084bc26  8400                 test byte ptr [eax], al
// 0084bc28  1dba8400b4           sbb eax, 0xb40084ba
// 0084bc2d  bb840081ba           mov ebx, 0xba810084
// 0084bc32  8400                 test byte ptr [eax], al
// 0084bc34  a2ba840041           mov byte ptr [0x410084ba], al
// copied from an identical function in another client (function ?CreateContextMenu@CXTPRibbonBar@@MAEPAVCXTPPopupBar@@PAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Ribbon\XTPRibbonBar.cpp