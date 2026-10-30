// roc 2009-06 0073c610  unit: CXTPToolBar  size: 1172 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0073c610
//
// 0073c610  6aff                 push -1
// 0073c612  6880648700           push 0x876480
// 0073c617  64a100000000         mov eax, dword ptr fs:[0]
// 0073c61d  50                   push eax
// 0073c61e  83ec20               sub esp, 0x20
// 0073c621  53                   push ebx
// 0073c622  55                   push ebp
// 0073c623  56                   push esi
// 0073c624  57                   push edi
// 0073c625  a1304fa200           mov eax, dword ptr [0xa24f30]
// 0073c62a  33c4                 xor eax, esp
// 0073c62c  50                   push eax
// 0073c62d  8d442434             lea eax, [esp + 0x34]
// 0073c631  64a300000000         mov dword ptr fs:[0], eax
// 0073c637  8bd9                 mov ebx, ecx
// 0073c639  e8520dffff           call 0x72d390
// 0073c63e  33f6                 xor esi, esi
// 0073c640  8944242c             mov dword ptr [esp + 0x2c], eax
// 0073c644  3bc6                 cmp eax, esi
// 0073c646  0f8442040000         je 0x73ca8e
// 0073c64c  8b83fc000000         mov eax, dword ptr [ebx + 0xfc]
// 0073c652  8b483c               mov ecx, dword ptr [eax + 0x3c]
// 0073c655  3bce                 cmp ecx, esi
// 0073c657  7408                 je 0x73c661
// 0073c659  56                   push esi
// 0073c65a  e871090300           call 0x76cfd0
// 0073c65f  eb29                 jmp 0x73c68a
// 0073c661  6a44                 push 0x44
// 0073c663  e8d0c3fdff           call 0x718a38
// 0073c668  83c404               add esp, 4
// 0073c66b  89442428             mov dword ptr [esp + 0x28], eax
// 0073c66f  8974243c             mov dword ptr [esp + 0x3c], esi
// 0073c673  3bc6                 cmp eax, esi
// 0073c675  7409                 je 0x73c680
// 0073c677  8bc8                 mov ecx, eax
// 0073c679  e812f70200           call 0x76bd90
// 0073c67e  eb02                 jmp 0x73c682
// 0073c680  33c0                 xor eax, eax
// 0073c682  c744243cffffffff     mov dword ptr [esp + 0x3c], 0xffffffff
// 0073c68a  33ed                 xor ebp, ebp
// 0073c68c  8bcb                 mov ecx, ebx
// 0073c68e  8944241c             mov dword ptr [esp + 0x1c], eax
// 0073c692  896c2418             mov dword ptr [esp + 0x18], ebp
// 0073c696  e8751affff           call 0x72e110
// 0073c69b  85c0                 test eax, eax
// 0073c69d  7e63                 jle 0x73c702
// 0073c69f  90                   nop 
// 0073c6a0  56                   push esi
// 0073c6a1  8bcb                 mov ecx, ebx
// 0073c6a3  e8781affff           call 0x72e120
// 0073c6a8  f680d000000010       test byte ptr [eax + 0xd0], 0x10
// 0073c6af  7459                 je 0x73c70a
// 0073c6b1  8b8bfc000000         mov ecx, dword ptr [ebx + 0xfc]
// 0073c6b7  8babcc000000         mov ebp, dword ptr [ebx + 0xcc]
// 0073c6bd  8bbbd0000000         mov edi, dword ptr [ebx + 0xd0]
// 0073c6c3  56                   push esi
// 0073c6c4  e8f7df0200           call 0x76a6c0
// 0073c6c9  83ffff               cmp edi, -1
// 0073c6cc  7410                 je 0x73c6de
// 0073c6ce  33c9                 xor ecx, ecx
// 0073c6d0  3bf7                 cmp esi, edi
// 0073c6d2  0f9dc1               setge cl
// 0073c6d5  49                   dec ecx
// 0073c6d6  03cf                 add ecx, edi
// 0073c6d8  898bd0000000         mov dword ptr [ebx + 0xd0], ecx
// 0073c6de  83fdff               cmp ebp, -1
// 0073c6e1  7410                 je 0x73c6f3
// 0073c6e3  33d2                 xor edx, edx
// 0073c6e5  3bf5                 cmp esi, ebp
// 0073c6e7  0f9dc2               setge dl
// 0073c6ea  4a                   dec edx
// 0073c6eb  03d5                 add edx, ebp
// 0073c6ed  8993cc000000         mov dword ptr [ebx + 0xcc], edx
// 0073c6f3  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0073c6f7  8bcb                 mov ecx, ebx
// 0073c6f9  e8121affff           call 0x72e110
// 0073c6fe  3bf0                 cmp esi, eax
// 0073c700  7c9e                 jl 0x73c6a0
// 0073c702  33ff                 xor edi, edi
// 0073c704  897c2414             mov dword ptr [esp + 0x14], edi
// 0073c708  eb0e                 jmp 0x73c718
// 0073c70a  46                   inc esi
// 0073c70b  ebea                 jmp 0x73c6f7
// 0073c70d  8d4900               lea ecx, [ecx]
// 0073c710  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0073c714  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0073c718  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0073c71c  3b6e2c               cmp ebp, dword ptr [esi + 0x2c]
// 0073c71f  7c0f                 jl 0x73c730
// 0073c721  8bcb                 mov ecx, ebx
// 0073c723  e8e819ffff           call 0x72e110
// 0073c728  3bf8                 cmp edi, eax
// 0073c72a  0f8dd2020000         jge 0x73ca02
// 0073c730  8b462c               mov eax, dword ptr [esi + 0x2c]
// 0073c733  3be8                 cmp ebp, eax
// 0073c735  7d13                 jge 0x73c74a
// 0073c737  85ed                 test ebp, ebp
// 0073c739  7c0f                 jl 0x73c74a
// 0073c73b  3be8                 cmp ebp, eax
// 0073c73d  7d0b                 jge 0x73c74a
// 0073c73f  8b4628               mov eax, dword ptr [esi + 0x28]
// 0073c742  8d2ca8               lea ebp, [eax + ebp*4]
// 0073c745  8b6d00               mov ebp, dword ptr [ebp]
// 0073c748  eb02                 jmp 0x73c74c
// 0073c74a  33ed                 xor ebp, ebp
// 0073c74c  8bcb                 mov ecx, ebx
// 0073c74e  e8bd19ffff           call 0x72e110
// 0073c753  3bf8                 cmp edi, eax
// 0073c755  7d1a                 jge 0x73c771
// 0073c757  8b83fc000000         mov eax, dword ptr [ebx + 0xfc]
// 0073c75d  85ff                 test edi, edi
// 0073c75f  7c10                 jl 0x73c771
// 0073c761  3b782c               cmp edi, dword ptr [eax + 0x2c]
// 0073c764  7d0b                 jge 0x73c771
// 0073c766  8b4828               mov ecx, dword ptr [eax + 0x28]
// 0073c769  8b34b9               mov esi, dword ptr [ecx + edi*4]
// 0073c76c  8d04b9               lea eax, [ecx + edi*4]
// 0073c76f  eb02                 jmp 0x73c773
// 0073c771  33f6                 xor esi, esi
// 0073c773  8b93fc000000         mov edx, dword ptr [ebx + 0xfc]
// 0073c779  6a01                 push 1
// 0073c77b  57                   push edi
// 0073c77c  55                   push ebp
// 0073c77d  52                   push edx
// 0073c77e  8bcb                 mov ecx, ebx
// 0073c780  e8ebfbffff           call 0x73c370
// 0073c785  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0073c789  6a00                 push 0
// 0073c78b  8bf8                 mov edi, eax
// 0073c78d  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0073c791  50                   push eax
// 0073c792  56                   push esi
// 0073c793  51                   push ecx
// 0073c794  8bcb                 mov ecx, ebx
// 0073c796  e8d5fbffff           call 0x73c370
// 0073c79b  89442424             mov dword ptr [esp + 0x24], eax
// 0073c79f  83ffff               cmp edi, -1
// 0073c7a2  0f857e000000         jne 0x73c826
// 0073c7a8  85ed                 test ebp, ebp
// 0073c7aa  747a                 je 0x73c826
// 0073c7ac  8b442414             mov eax, dword ptr [esp + 0x14]
// 0073c7b0  8b93cc000000         mov edx, dword ptr [ebx + 0xcc]
// 0073c7b6  8b8bfc000000         mov ecx, dword ptr [ebx + 0xfc]
// 0073c7bc  8bbbd0000000         mov edi, dword ptr [ebx + 0xd0]
// 0073c7c2  6a00                 push 0
// 0073c7c4  50                   push eax
// 0073c7c5  55                   push ebp
// 0073c7c6  89542430             mov dword ptr [esp + 0x30], edx
// 0073c7ca  e801fd0200           call 0x76c4d0
// 0073c7cf  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0073c7d3  8bf0                 mov esi, eax
// 0073c7d5  83ffff               cmp edi, -1
// 0073c7d8  740f                 je 0x73c7e9
// 0073c7da  33c9                 xor ecx, ecx
// 0073c7dc  3bef                 cmp ebp, edi
// 0073c7de  0f9ec1               setle cl
// 0073c7e1  03cf                 add ecx, edi
// 0073c7e3  898bd0000000         mov dword ptr [ebx + 0xd0], ecx
// 0073c7e9  8b442424             mov eax, dword ptr [esp + 0x24]
// 0073c7ed  83f8ff               cmp eax, -1
// 0073c7f0  740f                 je 0x73c801
// 0073c7f2  33d2                 xor edx, edx
// 0073c7f4  3be8                 cmp ebp, eax
// 0073c7f6  0f9ec2               setle dl
// 0073c7f9  03d0                 add edx, eax
// 0073c7fb  8993cc000000         mov dword ptr [ebx + 0xcc], edx
// 0073c801  8b8ed0000000         mov ecx, dword ptr [esi + 0xd0]
// 0073c807  8b06                 mov eax, dword ptr [esi]
// 0073c809  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 0073c80f  83c910               or ecx, 0x10
// 0073c812  51                   push ecx
// 0073c813  8bce                 mov ecx, esi
// 0073c815  896c2428             mov dword ptr [esp + 0x28], ebp
// 0073c819  ffd2                 call edx
// 0073c81b  ff442418             inc dword ptr [esp + 0x18]
// 0073c81f  45                   inc ebp
// 0073c820  896c2414             mov dword ptr [esp + 0x14], ebp
// 0073c824  eb1f                 jmp 0x73c845
// 0073c826  3b7c2414             cmp edi, dword ptr [esp + 0x14]
// 0073c82a  7506                 jne 0x73c832
// 0073c82c  ff442418             inc dword ptr [esp + 0x18]
// 0073c830  eb0f                 jmp 0x73c841
// 0073c832  83f8ff               cmp eax, -1
// 0073c835  740a                 je 0x73c841
// 0073c837  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0073c83b  50                   push eax
// 0073c83c  e87fde0200           call 0x76a6c0
// 0073c841  ff442414             inc dword ptr [esp + 0x14]
// 0073c845  85f6                 test esi, esi
// 0073c847  0f84c3feffff         je 0x73c710
// 0073c84d  8b8684000000         mov eax, dword ptr [esi + 0x84]
// 0073c853  3dbd230000           cmp eax, 0x23bd
// 0073c858  0f84b2feffff         je 0x73c710
// 0073c85e  3dbc230000           cmp eax, 0x23bc
// 0073c863  0f84a7feffff         je 0x73c710
// 0073c869  8b865c010000         mov eax, dword ptr [esi + 0x15c]
// 0073c86f  85c0                 test eax, eax
// 0073c871  740a                 je 0x73c87d
// 0073c873  83783c00             cmp dword ptr [eax + 0x3c], 0
// 0073c877  0f8493feffff         je 0x73c710
// 0073c87d  f686d0000000c1       test byte ptr [esi + 0xd0], 0xc1
// 0073c884  0f8586feffff         jne 0x73c710
// 0073c88a  8b06                 mov eax, dword ptr [esi]
// 0073c88c  8b9030010000         mov edx, dword ptr [eax + 0x130]
// 0073c892  8bce                 mov ecx, esi
// 0073c894  ffd2                 call edx
// 0073c896  85c0                 test eax, eax
// 0073c898  0f8472feffff         je 0x73c710
// 0073c89e  687c010000           push 0x17c
// 0073c8a3  e890c1fdff           call 0x718a38
// 0073c8a8  83c404               add esp, 4
// 0073c8ab  89442430             mov dword ptr [esp + 0x30], eax
// 0073c8af  c744243c01000000     mov dword ptr [esp + 0x3c], 1
// 0073c8b7  85c0                 test eax, eax
// 0073c8b9  7409                 je 0x73c8c4
// 0073c8bb  8bc8                 mov ecx, eax
// 0073c8bd  e8ded7ffff           call 0x73a0a0
// 0073c8c2  eb02                 jmp 0x73c8c6
// 0073c8c4  33c0                 xor eax, eax
// 0073c8c6  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0073c8ca  8b89fc000000         mov ecx, dword ptr [ecx + 0xfc]
// 0073c8d0  6a00                 push 0
// 0073c8d2  83cdff               or ebp, 0xffffffff
// 0073c8d5  55                   push ebp
// 0073c8d6  6a00                 push 0
// 0073c8d8  6a00                 push 0
// 0073c8da  50                   push eax
// 0073c8db  896c2450             mov dword ptr [esp + 0x50], ebp
// 0073c8df  e84c090300           call 0x76d230
// 0073c8e4  8b16                 mov edx, dword ptr [esi]
// 0073c8e6  8b5258               mov edx, dword ptr [edx + 0x58]
// 0073c8e9  8bf8                 mov edi, eax
// 0073c8eb  8d442428             lea eax, [esp + 0x28]
// 0073c8ef  50                   push eax
// 0073c8f0  8bce                 mov ecx, esi
// 0073c8f2  ffd2                 call edx
// 0073c8f4  8bc8                 mov ecx, eax
// 0073c8f6  c744243c02000000     mov dword ptr [esp + 0x3c], 2
// 0073c8fe  ff15d0fc8900         call dword ptr [0x89fcd0]
// 0073c904  50                   push eax
// 0073c905  8bcf                 mov ecx, edi
// 0073c907  e81437feff           call 0x720020
// 0073c90c  8d4c2428             lea ecx, [esp + 0x28]
// 0073c910  896c243c             mov dword ptr [esp + 0x3c], ebp
// 0073c914  ff1510fd8900         call dword ptr [0x89fd10]
// 0073c91a  8b86fc000000         mov eax, dword ptr [esi + 0xfc]
// 0073c920  83f802               cmp eax, 2
// 0073c923  740f                 je 0x73c934
// 0073c925  83f803               cmp eax, 3
// 0073c928  740a                 je 0x73c934
// 0073c92a  83f804               cmp eax, 4
// 0073c92d  7405                 je 0x73c934
// 0073c92f  83f801               cmp eax, 1
// 0073c932  751e                 jne 0x73c952
// 0073c934  8bce                 mov ecx, esi
// 0073c936  e8352cfeff           call 0x71f570
// 0073c93b  398788000000         cmp dword ptr [edi + 0x88], eax
// 0073c941  740f                 je 0x73c952
// 0073c943  6a01                 push 1
// 0073c945  8bcf                 mov ecx, edi
// 0073c947  898788000000         mov dword ptr [edi + 0x88], eax
// 0073c94d  e85e36feff           call 0x71ffb0
// 0073c952  8d86e0000000         lea eax, [esi + 0xe0]
// 0073c958  50                   push eax
// 0073c959  8d4c2424             lea ecx, [esp + 0x24]
// 0073c95d  ff15e4fc8900         call dword ptr [0x89fce4]
// 0073c963  8d4c2420             lea ecx, [esp + 0x20]
// 0073c967  c744243c03000000     mov dword ptr [esp + 0x3c], 3
// 0073c96f  ff155cfb8900         call dword ptr [0x89fb5c]
// 0073c975  84c0                 test al, al
// 0073c977  7421                 je 0x73c99a
// 0073c979  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0073c97d  e82e1df4ff           call 0x67e6b0
// 0073c982  8b8e84000000         mov ecx, dword ptr [esi + 0x84]
// 0073c988  8b10                 mov edx, dword ptr [eax]
// 0073c98a  8d6c2420             lea ebp, [esp + 0x20]
// 0073c98e  55                   push ebp
// 0073c98f  51                   push ecx
// 0073c990  8bc8                 mov ecx, eax
// 0073c992  8b4258               mov eax, dword ptr [edx + 0x58]
// 0073c995  ffd0                 call eax
// 0073c997  83cdff               or ebp, 0xffffffff
// 0073c99a  8d4c2420             lea ecx, [esp + 0x20]
// 0073c99e  ff15d0fc8900         call dword ptr [0x89fcd0]
// 0073c9a4  50                   push eax
// 0073c9a5  8d8fe0000000         lea ecx, [edi + 0xe0]
// 0073c9ab  ff15acfc8900         call dword ptr [0x89fcac]
// 0073c9b1  8b17                 mov edx, dword ptr [edi]
// 0073c9b3  8b5268               mov edx, dword ptr [edx + 0x68]
// 0073c9b6  33c0                 xor eax, eax
// 0073c9b8  396c2424             cmp dword ptr [esp + 0x24], ebp
// 0073c9bc  8bcf                 mov ecx, edi
// 0073c9be  0f95c0               setne al
// 0073c9c1  50                   push eax
// 0073c9c2  ffd2                 call edx
// 0073c9c4  8b86d0000000         mov eax, dword ptr [esi + 0xd0]
// 0073c9ca  c1e804               shr eax, 4
// 0073c9cd  f7d0                 not eax
// 0073c9cf  83e001               and eax, 1
// 0073c9d2  3987a0000000         cmp dword ptr [edi + 0xa0], eax
// 0073c9d8  740f                 je 0x73c9e9
// 0073c9da  6a01                 push 1
// 0073c9dc  8bcf                 mov ecx, edi
// 0073c9de  8987a0000000         mov dword ptr [edi + 0xa0], eax
// 0073c9e4  e8c735feff           call 0x71ffb0
// 0073c9e9  8d4c2420             lea ecx, [esp + 0x20]
// 0073c9ed  89b774010000         mov dword ptr [edi + 0x174], esi
// 0073c9f3  896c243c             mov dword ptr [esp + 0x3c], ebp
// 0073c9f7  ff1510fd8900         call dword ptr [0x89fd10]
// 0073c9fd  e90efdffff           jmp 0x73c710
// 0073ca02  8bce                 mov ecx, esi
// 0073ca04  e89fc5fdff           call 0x718fa8
// 0073ca09  8b83fc000000         mov eax, dword ptr [ebx + 0xfc]
// 0073ca0f  83783c00             cmp dword ptr [eax + 0x3c], 0
// 0073ca13  7479                 je 0x73ca8e
// 0073ca15  83bb8c01000000       cmp dword ptr [ebx + 0x18c], 0
// 0073ca1c  7570                 jne 0x73ca8e
// 0073ca1e  83bb8801000000       cmp dword ptr [ebx + 0x188], 0
// 0073ca25  7467                 je 0x73ca8e
// 0073ca27  687c010000           push 0x17c
// 0073ca2c  e807c0fdff           call 0x718a38
// 0073ca31  83c404               add esp, 4
// 0073ca34  89442430             mov dword ptr [esp + 0x30], eax
// 0073ca38  c744243c04000000     mov dword ptr [esp + 0x3c], 4
// 0073ca40  85c0                 test eax, eax
// 0073ca42  7409                 je 0x73ca4d
// 0073ca44  8bc8                 mov ecx, eax
// 0073ca46  e855d6ffff           call 0x73a0a0
// 0073ca4b  eb02                 jmp 0x73ca4f
// 0073ca4d  33c0                 xor eax, eax
// 0073ca4f  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0073ca53  8b89fc000000         mov ecx, dword ptr [ecx + 0xfc]
// 0073ca59  6a00                 push 0
// 0073ca5b  6aff                 push -1
// 0073ca5d  6a00                 push 0
// 0073ca5f  68a3230000           push 0x23a3
// 0073ca64  50                   push eax
// 0073ca65  c7442450ffffffff     mov dword ptr [esp + 0x50], 0xffffffff
// 0073ca6d  e8be070300           call 0x76d230
// 0073ca72  8bf0                 mov esi, eax
// 0073ca74  6a08                 push 8
// 0073ca76  8bce                 mov ecx, esi
// 0073ca78  e8c32ffeff           call 0x71fa40
// 0073ca7d  8b16                 mov edx, dword ptr [esi]
// 0073ca7f  8b4264               mov eax, dword ptr [edx + 0x64]
// 0073ca82  6a01                 push 1
// 0073ca84  8bce                 mov ecx, esi
// 0073ca86  ffd0                 call eax
// 0073ca88  899e78010000         mov dword ptr [esi + 0x178], ebx
// 0073ca8e  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0073ca92  64890d00000000       mov dword ptr fs:[0], ecx
// 0073ca99  59                   pop ecx
// 0073ca9a  5f                   pop edi
// 0073ca9b  5e                   pop esi
// 0073ca9c  5d                   pop ebp
// 0073ca9d  5b                   pop ebx
// 0073ca9e  83c42c               add esp, 0x2c
// 0073caa1  c20400               ret 4
// copied from an identical function in another client (function ?BuildCustomizePopup@CXTPToolBar@@AAEXPAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPToolBar.cpp