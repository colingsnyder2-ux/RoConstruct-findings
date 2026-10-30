// roc 2010-06 007c77c0  unit: CXTPToolBar  size: 1172 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007c77c0
//
// 007c77c0  6aff                 push -1
// 007c77c2  6810019b00           push 0x9b0110
// 007c77c7  64a100000000         mov eax, dword ptr fs:[0]
// 007c77cd  50                   push eax
// 007c77ce  83ec20               sub esp, 0x20
// 007c77d1  53                   push ebx
// 007c77d2  55                   push ebp
// 007c77d3  56                   push esi
// 007c77d4  57                   push edi
// 007c77d5  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 007c77da  33c4                 xor eax, esp
// 007c77dc  50                   push eax
// 007c77dd  8d442434             lea eax, [esp + 0x34]
// 007c77e1  64a300000000         mov dword ptr fs:[0], eax
// 007c77e7  8bd9                 mov ebx, ecx
// 007c77e9  e8e20dffff           call 0x7b85d0
// 007c77ee  33f6                 xor esi, esi
// 007c77f0  8944242c             mov dword ptr [esp + 0x2c], eax
// 007c77f4  3bc6                 cmp eax, esi
// 007c77f6  0f8442040000         je 0x7c7c3e
// 007c77fc  8b83fc000000         mov eax, dword ptr [ebx + 0xfc]
// 007c7802  8b483c               mov ecx, dword ptr [eax + 0x3c]
// 007c7805  3bce                 cmp ecx, esi
// 007c7807  7408                 je 0x7c7811
// 007c7809  56                   push esi
// 007c780a  e841460300           call 0x7fbe50
// 007c780f  eb29                 jmp 0x7c783a
// 007c7811  6a44                 push 0x44
// 007c7813  e88801feff           call 0x7a79a0
// 007c7818  83c404               add esp, 4
// 007c781b  89442428             mov dword ptr [esp + 0x28], eax
// 007c781f  8974243c             mov dword ptr [esp + 0x3c], esi
// 007c7823  3bc6                 cmp eax, esi
// 007c7825  7409                 je 0x7c7830
// 007c7827  8bc8                 mov ecx, eax
// 007c7829  e8e2330300           call 0x7fac10
// 007c782e  eb02                 jmp 0x7c7832
// 007c7830  33c0                 xor eax, eax
// 007c7832  c744243cffffffff     mov dword ptr [esp + 0x3c], 0xffffffff
// 007c783a  33ed                 xor ebp, ebp
// 007c783c  8bcb                 mov ecx, ebx
// 007c783e  8944241c             mov dword ptr [esp + 0x1c], eax
// 007c7842  896c2418             mov dword ptr [esp + 0x18], ebp
// 007c7846  e8751bffff           call 0x7b93c0
// 007c784b  85c0                 test eax, eax
// 007c784d  7e63                 jle 0x7c78b2
// 007c784f  90                   nop 
// 007c7850  56                   push esi
// 007c7851  8bcb                 mov ecx, ebx
// 007c7853  e8781bffff           call 0x7b93d0
// 007c7858  f680d000000010       test byte ptr [eax + 0xd0], 0x10
// 007c785f  7459                 je 0x7c78ba
// 007c7861  8b8bfc000000         mov ecx, dword ptr [ebx + 0xfc]
// 007c7867  8babcc000000         mov ebp, dword ptr [ebx + 0xcc]
// 007c786d  8bbbd0000000         mov edi, dword ptr [ebx + 0xd0]
// 007c7873  56                   push esi
// 007c7874  e8c71c0300           call 0x7f9540
// 007c7879  83ffff               cmp edi, -1
// 007c787c  7410                 je 0x7c788e
// 007c787e  33c9                 xor ecx, ecx
// 007c7880  3bf7                 cmp esi, edi
// 007c7882  0f9dc1               setge cl
// 007c7885  49                   dec ecx
// 007c7886  03cf                 add ecx, edi
// 007c7888  898bd0000000         mov dword ptr [ebx + 0xd0], ecx
// 007c788e  83fdff               cmp ebp, -1
// 007c7891  7410                 je 0x7c78a3
// 007c7893  33d2                 xor edx, edx
// 007c7895  3bf5                 cmp esi, ebp
// 007c7897  0f9dc2               setge dl
// 007c789a  4a                   dec edx
// 007c789b  03d5                 add edx, ebp
// 007c789d  8993cc000000         mov dword ptr [ebx + 0xcc], edx
// 007c78a3  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 007c78a7  8bcb                 mov ecx, ebx
// 007c78a9  e8121bffff           call 0x7b93c0
// 007c78ae  3bf0                 cmp esi, eax
// 007c78b0  7c9e                 jl 0x7c7850
// 007c78b2  33ff                 xor edi, edi
// 007c78b4  897c2414             mov dword ptr [esp + 0x14], edi
// 007c78b8  eb0e                 jmp 0x7c78c8
// 007c78ba  46                   inc esi
// 007c78bb  ebea                 jmp 0x7c78a7
// 007c78bd  8d4900               lea ecx, [ecx]
// 007c78c0  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 007c78c4  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 007c78c8  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 007c78cc  3b6e2c               cmp ebp, dword ptr [esi + 0x2c]
// 007c78cf  7c0f                 jl 0x7c78e0
// 007c78d1  8bcb                 mov ecx, ebx
// 007c78d3  e8e81affff           call 0x7b93c0
// 007c78d8  3bf8                 cmp edi, eax
// 007c78da  0f8dd2020000         jge 0x7c7bb2
// 007c78e0  8b462c               mov eax, dword ptr [esi + 0x2c]
// 007c78e3  3be8                 cmp ebp, eax
// 007c78e5  7d13                 jge 0x7c78fa
// 007c78e7  85ed                 test ebp, ebp
// 007c78e9  7c0f                 jl 0x7c78fa
// 007c78eb  3be8                 cmp ebp, eax
// 007c78ed  7d0b                 jge 0x7c78fa
// 007c78ef  8b4628               mov eax, dword ptr [esi + 0x28]
// 007c78f2  8d2ca8               lea ebp, [eax + ebp*4]
// 007c78f5  8b6d00               mov ebp, dword ptr [ebp]
// 007c78f8  eb02                 jmp 0x7c78fc
// 007c78fa  33ed                 xor ebp, ebp
// 007c78fc  8bcb                 mov ecx, ebx
// 007c78fe  e8bd1affff           call 0x7b93c0
// 007c7903  3bf8                 cmp edi, eax
// 007c7905  7d1a                 jge 0x7c7921
// 007c7907  8b83fc000000         mov eax, dword ptr [ebx + 0xfc]
// 007c790d  85ff                 test edi, edi
// 007c790f  7c10                 jl 0x7c7921
// 007c7911  3b782c               cmp edi, dword ptr [eax + 0x2c]
// 007c7914  7d0b                 jge 0x7c7921
// 007c7916  8b4828               mov ecx, dword ptr [eax + 0x28]
// 007c7919  8b34b9               mov esi, dword ptr [ecx + edi*4]
// 007c791c  8d04b9               lea eax, [ecx + edi*4]
// 007c791f  eb02                 jmp 0x7c7923
// 007c7921  33f6                 xor esi, esi
// 007c7923  8b93fc000000         mov edx, dword ptr [ebx + 0xfc]
// 007c7929  6a01                 push 1
// 007c792b  57                   push edi
// 007c792c  55                   push ebp
// 007c792d  52                   push edx
// 007c792e  8bcb                 mov ecx, ebx
// 007c7930  e8ebfbffff           call 0x7c7520
// 007c7935  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007c7939  6a00                 push 0
// 007c793b  8bf8                 mov edi, eax
// 007c793d  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007c7941  50                   push eax
// 007c7942  56                   push esi
// 007c7943  51                   push ecx
// 007c7944  8bcb                 mov ecx, ebx
// 007c7946  e8d5fbffff           call 0x7c7520
// 007c794b  89442424             mov dword ptr [esp + 0x24], eax
// 007c794f  83ffff               cmp edi, -1
// 007c7952  0f857e000000         jne 0x7c79d6
// 007c7958  85ed                 test ebp, ebp
// 007c795a  747a                 je 0x7c79d6
// 007c795c  8b442414             mov eax, dword ptr [esp + 0x14]
// 007c7960  8b93cc000000         mov edx, dword ptr [ebx + 0xcc]
// 007c7966  8b8bfc000000         mov ecx, dword ptr [ebx + 0xfc]
// 007c796c  8bbbd0000000         mov edi, dword ptr [ebx + 0xd0]
// 007c7972  6a00                 push 0
// 007c7974  50                   push eax
// 007c7975  55                   push ebp
// 007c7976  89542430             mov dword ptr [esp + 0x30], edx
// 007c797a  e8d1390300           call 0x7fb350
// 007c797f  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 007c7983  8bf0                 mov esi, eax
// 007c7985  83ffff               cmp edi, -1
// 007c7988  740f                 je 0x7c7999
// 007c798a  33c9                 xor ecx, ecx
// 007c798c  3bef                 cmp ebp, edi
// 007c798e  0f9ec1               setle cl
// 007c7991  03cf                 add ecx, edi
// 007c7993  898bd0000000         mov dword ptr [ebx + 0xd0], ecx
// 007c7999  8b442424             mov eax, dword ptr [esp + 0x24]
// 007c799d  83f8ff               cmp eax, -1
// 007c79a0  740f                 je 0x7c79b1
// 007c79a2  33d2                 xor edx, edx
// 007c79a4  3be8                 cmp ebp, eax
// 007c79a6  0f9ec2               setle dl
// 007c79a9  03d0                 add edx, eax
// 007c79ab  8993cc000000         mov dword ptr [ebx + 0xcc], edx
// 007c79b1  8b8ed0000000         mov ecx, dword ptr [esi + 0xd0]
// 007c79b7  8b06                 mov eax, dword ptr [esi]
// 007c79b9  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 007c79bf  83c910               or ecx, 0x10
// 007c79c2  51                   push ecx
// 007c79c3  8bce                 mov ecx, esi
// 007c79c5  896c2428             mov dword ptr [esp + 0x28], ebp
// 007c79c9  ffd2                 call edx
// 007c79cb  ff442418             inc dword ptr [esp + 0x18]
// 007c79cf  45                   inc ebp
// 007c79d0  896c2414             mov dword ptr [esp + 0x14], ebp
// 007c79d4  eb1f                 jmp 0x7c79f5
// 007c79d6  3b7c2414             cmp edi, dword ptr [esp + 0x14]
// 007c79da  7506                 jne 0x7c79e2
// 007c79dc  ff442418             inc dword ptr [esp + 0x18]
// 007c79e0  eb0f                 jmp 0x7c79f1
// 007c79e2  83f8ff               cmp eax, -1
// 007c79e5  740a                 je 0x7c79f1
// 007c79e7  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007c79eb  50                   push eax
// 007c79ec  e84f1b0300           call 0x7f9540
// 007c79f1  ff442414             inc dword ptr [esp + 0x14]
// 007c79f5  85f6                 test esi, esi
// 007c79f7  0f84c3feffff         je 0x7c78c0
// 007c79fd  8b8684000000         mov eax, dword ptr [esi + 0x84]
// 007c7a03  3dbd230000           cmp eax, 0x23bd
// 007c7a08  0f84b2feffff         je 0x7c78c0
// 007c7a0e  3dbc230000           cmp eax, 0x23bc
// 007c7a13  0f84a7feffff         je 0x7c78c0
// 007c7a19  8b865c010000         mov eax, dword ptr [esi + 0x15c]
// 007c7a1f  85c0                 test eax, eax
// 007c7a21  740a                 je 0x7c7a2d
// 007c7a23  83783c00             cmp dword ptr [eax + 0x3c], 0
// 007c7a27  0f8493feffff         je 0x7c78c0
// 007c7a2d  f686d0000000c1       test byte ptr [esi + 0xd0], 0xc1
// 007c7a34  0f8586feffff         jne 0x7c78c0
// 007c7a3a  8b06                 mov eax, dword ptr [esi]
// 007c7a3c  8b9030010000         mov edx, dword ptr [eax + 0x130]
// 007c7a42  8bce                 mov ecx, esi
// 007c7a44  ffd2                 call edx
// 007c7a46  85c0                 test eax, eax
// 007c7a48  0f8472feffff         je 0x7c78c0
// 007c7a4e  687c010000           push 0x17c
// 007c7a53  e848fffdff           call 0x7a79a0
// 007c7a58  83c404               add esp, 4
// 007c7a5b  89442430             mov dword ptr [esp + 0x30], eax
// 007c7a5f  c744243c01000000     mov dword ptr [esp + 0x3c], 1
// 007c7a67  85c0                 test eax, eax
// 007c7a69  7409                 je 0x7c7a74
// 007c7a6b  8bc8                 mov ecx, eax
// 007c7a6d  e8aed7ffff           call 0x7c5220
// 007c7a72  eb02                 jmp 0x7c7a76
// 007c7a74  33c0                 xor eax, eax
// 007c7a76  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 007c7a7a  8b89fc000000         mov ecx, dword ptr [ecx + 0xfc]
// 007c7a80  6a00                 push 0
// 007c7a82  83cdff               or ebp, 0xffffffff
// 007c7a85  55                   push ebp
// 007c7a86  6a00                 push 0
// 007c7a88  6a00                 push 0
// 007c7a8a  50                   push eax
// 007c7a8b  896c2450             mov dword ptr [esp + 0x50], ebp
// 007c7a8f  e81c460300           call 0x7fc0b0
// 007c7a94  8b16                 mov edx, dword ptr [esi]
// 007c7a96  8b5258               mov edx, dword ptr [edx + 0x58]
// 007c7a99  8bf8                 mov edi, eax
// 007c7a9b  8d442428             lea eax, [esp + 0x28]
// 007c7a9f  50                   push eax
// 007c7aa0  8bce                 mov ecx, esi
// 007c7aa2  ffd2                 call edx
// 007c7aa4  8bc8                 mov ecx, eax
// 007c7aa6  c744243c02000000     mov dword ptr [esp + 0x3c], 2
// 007c7aae  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 007c7ab4  50                   push eax
// 007c7ab5  8bcf                 mov ecx, edi
// 007c7ab7  e8542dfeff           call 0x7aa810
// 007c7abc  8d4c2428             lea ecx, [esp + 0x28]
// 007c7ac0  896c243c             mov dword ptr [esp + 0x3c], ebp
// 007c7ac4  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 007c7aca  8b86fc000000         mov eax, dword ptr [esi + 0xfc]
// 007c7ad0  83f802               cmp eax, 2
// 007c7ad3  740f                 je 0x7c7ae4
// 007c7ad5  83f803               cmp eax, 3
// 007c7ad8  740a                 je 0x7c7ae4
// 007c7ada  83f804               cmp eax, 4
// 007c7add  7405                 je 0x7c7ae4
// 007c7adf  83f801               cmp eax, 1
// 007c7ae2  751e                 jne 0x7c7b02
// 007c7ae4  8bce                 mov ecx, esi
// 007c7ae6  e8b521feff           call 0x7a9ca0
// 007c7aeb  398788000000         cmp dword ptr [edi + 0x88], eax
// 007c7af1  740f                 je 0x7c7b02
// 007c7af3  6a01                 push 1
// 007c7af5  8bcf                 mov ecx, edi
// 007c7af7  898788000000         mov dword ptr [edi + 0x88], eax
// 007c7afd  e89e2cfeff           call 0x7aa7a0
// 007c7b02  8d86e0000000         lea eax, [esi + 0xe0]
// 007c7b08  50                   push eax
// 007c7b09  8d4c2424             lea ecx, [esp + 0x24]
// 007c7b0d  ff15c4ce9e00         call dword ptr [0x9ecec4]
// 007c7b13  8d4c2420             lea ecx, [esp + 0x20]
// 007c7b17  c744243c03000000     mov dword ptr [esp + 0x3c], 3
// 007c7b1f  ff15eccd9e00         call dword ptr [0x9ecdec]
// 007c7b25  84c0                 test al, al
// 007c7b27  7421                 je 0x7c7b4a
// 007c7b29  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007c7b2d  e87e060000           call 0x7c81b0
// 007c7b32  8b8e84000000         mov ecx, dword ptr [esi + 0x84]
// 007c7b38  8b10                 mov edx, dword ptr [eax]
// 007c7b3a  8d6c2420             lea ebp, [esp + 0x20]
// 007c7b3e  55                   push ebp
// 007c7b3f  51                   push ecx
// 007c7b40  8bc8                 mov ecx, eax
// 007c7b42  8b4258               mov eax, dword ptr [edx + 0x58]
// 007c7b45  ffd0                 call eax
// 007c7b47  83cdff               or ebp, 0xffffffff
// 007c7b4a  8d4c2420             lea ecx, [esp + 0x20]
// 007c7b4e  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 007c7b54  50                   push eax
// 007c7b55  8d8fe0000000         lea ecx, [edi + 0xe0]
// 007c7b5b  ff158cce9e00         call dword ptr [0x9ece8c]
// 007c7b61  8b17                 mov edx, dword ptr [edi]
// 007c7b63  8b5268               mov edx, dword ptr [edx + 0x68]
// 007c7b66  33c0                 xor eax, eax
// 007c7b68  396c2424             cmp dword ptr [esp + 0x24], ebp
// 007c7b6c  8bcf                 mov ecx, edi
// 007c7b6e  0f95c0               setne al
// 007c7b71  50                   push eax
// 007c7b72  ffd2                 call edx
// 007c7b74  8b86d0000000         mov eax, dword ptr [esi + 0xd0]
// 007c7b7a  c1e804               shr eax, 4
// 007c7b7d  f7d0                 not eax
// 007c7b7f  83e001               and eax, 1
// 007c7b82  3987a0000000         cmp dword ptr [edi + 0xa0], eax
// 007c7b88  740f                 je 0x7c7b99
// 007c7b8a  6a01                 push 1
// 007c7b8c  8bcf                 mov ecx, edi
// 007c7b8e  8987a0000000         mov dword ptr [edi + 0xa0], eax
// 007c7b94  e8072cfeff           call 0x7aa7a0
// 007c7b99  8d4c2420             lea ecx, [esp + 0x20]
// 007c7b9d  89b774010000         mov dword ptr [edi + 0x174], esi
// 007c7ba3  896c243c             mov dword ptr [esp + 0x3c], ebp
// 007c7ba7  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 007c7bad  e90efdffff           jmp 0x7c78c0
// 007c7bb2  8bce                 mov ecx, esi
// 007c7bb4  e86303feff           call 0x7a7f1c
// 007c7bb9  8b83fc000000         mov eax, dword ptr [ebx + 0xfc]
// 007c7bbf  83783c00             cmp dword ptr [eax + 0x3c], 0
// 007c7bc3  7479                 je 0x7c7c3e
// 007c7bc5  83bb8c01000000       cmp dword ptr [ebx + 0x18c], 0
// 007c7bcc  7570                 jne 0x7c7c3e
// 007c7bce  83bb8801000000       cmp dword ptr [ebx + 0x188], 0
// 007c7bd5  7467                 je 0x7c7c3e
// 007c7bd7  687c010000           push 0x17c
// 007c7bdc  e8bffdfdff           call 0x7a79a0
// 007c7be1  83c404               add esp, 4
// 007c7be4  89442430             mov dword ptr [esp + 0x30], eax
// 007c7be8  c744243c04000000     mov dword ptr [esp + 0x3c], 4
// 007c7bf0  85c0                 test eax, eax
// 007c7bf2  7409                 je 0x7c7bfd
// 007c7bf4  8bc8                 mov ecx, eax
// 007c7bf6  e825d6ffff           call 0x7c5220
// 007c7bfb  eb02                 jmp 0x7c7bff
// 007c7bfd  33c0                 xor eax, eax
// 007c7bff  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 007c7c03  8b89fc000000         mov ecx, dword ptr [ecx + 0xfc]
// 007c7c09  6a00                 push 0
// 007c7c0b  6aff                 push -1
// 007c7c0d  6a00                 push 0
// 007c7c0f  68a3230000           push 0x23a3
// 007c7c14  50                   push eax
// 007c7c15  c7442450ffffffff     mov dword ptr [esp + 0x50], 0xffffffff
// 007c7c1d  e88e440300           call 0x7fc0b0
// 007c7c22  8bf0                 mov esi, eax
// 007c7c24  6a08                 push 8
// 007c7c26  8bce                 mov ecx, esi
// 007c7c28  e87325feff           call 0x7aa1a0
// 007c7c2d  8b16                 mov edx, dword ptr [esi]
// 007c7c2f  8b4264               mov eax, dword ptr [edx + 0x64]
// 007c7c32  6a01                 push 1
// 007c7c34  8bce                 mov ecx, esi
// 007c7c36  ffd0                 call eax
// 007c7c38  899e78010000         mov dword ptr [esi + 0x178], ebx
// 007c7c3e  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 007c7c42  64890d00000000       mov dword ptr fs:[0], ecx
// 007c7c49  59                   pop ecx
// 007c7c4a  5f                   pop edi
// 007c7c4b  5e                   pop esi
// 007c7c4c  5d                   pop ebp
// 007c7c4d  5b                   pop ebx
// 007c7c4e  83c42c               add esp, 0x2c
// 007c7c51  c20400               ret 4
// copied from an identical function in another client (function ?BuildCustomizePopup@CXTPToolBar@@AAEXPAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPToolBar.cpp