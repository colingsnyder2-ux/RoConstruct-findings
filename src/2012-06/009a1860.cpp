// roc 2012-06 009a1860  unit: CXTPToolBar  size: 1172 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009a1860
//
// 009a1860  6aff                 push -1
// 009a1862  68a0d6ad00           push 0xadd6a0
// 009a1867  64a100000000         mov eax, dword ptr fs:[0]
// 009a186d  50                   push eax
// 009a186e  83ec20               sub esp, 0x20
// 009a1871  53                   push ebx
// 009a1872  55                   push ebp
// 009a1873  56                   push esi
// 009a1874  57                   push edi
// 009a1875  a1d027e000           mov eax, dword ptr [0xe027d0]
// 009a187a  33c4                 xor eax, esp
// 009a187c  50                   push eax
// 009a187d  8d442434             lea eax, [esp + 0x34]
// 009a1881  64a300000000         mov dword ptr fs:[0], eax
// 009a1887  8bd9                 mov ebx, ecx
// 009a1889  e86214ffff           call 0x992cf0
// 009a188e  33f6                 xor esi, esi
// 009a1890  8944242c             mov dword ptr [esp + 0x2c], eax
// 009a1894  3bc6                 cmp eax, esi
// 009a1896  0f8442040000         je 0x9a1cde
// 009a189c  8b83fc000000         mov eax, dword ptr [ebx + 0xfc]
// 009a18a2  8b483c               mov ecx, dword ptr [eax + 0x3c]
// 009a18a5  3bce                 cmp ecx, esi
// 009a18a7  7408                 je 0x9a18b1
// 009a18a9  56                   push esi
// 009a18aa  e8b1030300           call 0x9d1c60
// 009a18af  eb29                 jmp 0x9a18da
// 009a18b1  6a44                 push 0x44
// 009a18b3  e86208feff           call 0x98211a
// 009a18b8  83c404               add esp, 4
// 009a18bb  89442428             mov dword ptr [esp + 0x28], eax
// 009a18bf  8974243c             mov dword ptr [esp + 0x3c], esi
// 009a18c3  3bc6                 cmp eax, esi
// 009a18c5  7409                 je 0x9a18d0
// 009a18c7  8bc8                 mov ecx, eax
// 009a18c9  e852f10200           call 0x9d0a20
// 009a18ce  eb02                 jmp 0x9a18d2
// 009a18d0  33c0                 xor eax, eax
// 009a18d2  c744243cffffffff     mov dword ptr [esp + 0x3c], 0xffffffff
// 009a18da  33ed                 xor ebp, ebp
// 009a18dc  8bcb                 mov ecx, ebx
// 009a18de  8944241c             mov dword ptr [esp + 0x1c], eax
// 009a18e2  896c2418             mov dword ptr [esp + 0x18], ebp
// 009a18e6  e81522ffff           call 0x993b00
// 009a18eb  85c0                 test eax, eax
// 009a18ed  7e63                 jle 0x9a1952
// 009a18ef  90                   nop 
// 009a18f0  56                   push esi
// 009a18f1  8bcb                 mov ecx, ebx
// 009a18f3  e81822ffff           call 0x993b10
// 009a18f8  f680d000000010       test byte ptr [eax + 0xd0], 0x10
// 009a18ff  7459                 je 0x9a195a
// 009a1901  8b8bfc000000         mov ecx, dword ptr [ebx + 0xfc]
// 009a1907  8babcc000000         mov ebp, dword ptr [ebx + 0xcc]
// 009a190d  8bbbd0000000         mov edi, dword ptr [ebx + 0xd0]
// 009a1913  56                   push esi
// 009a1914  e837da0200           call 0x9cf350
// 009a1919  83ffff               cmp edi, -1
// 009a191c  7410                 je 0x9a192e
// 009a191e  33c9                 xor ecx, ecx
// 009a1920  3bf7                 cmp esi, edi
// 009a1922  0f9dc1               setge cl
// 009a1925  49                   dec ecx
// 009a1926  03cf                 add ecx, edi
// 009a1928  898bd0000000         mov dword ptr [ebx + 0xd0], ecx
// 009a192e  83fdff               cmp ebp, -1
// 009a1931  7410                 je 0x9a1943
// 009a1933  33d2                 xor edx, edx
// 009a1935  3bf5                 cmp esi, ebp
// 009a1937  0f9dc2               setge dl
// 009a193a  4a                   dec edx
// 009a193b  03d5                 add edx, ebp
// 009a193d  8993cc000000         mov dword ptr [ebx + 0xcc], edx
// 009a1943  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 009a1947  8bcb                 mov ecx, ebx
// 009a1949  e8b221ffff           call 0x993b00
// 009a194e  3bf0                 cmp esi, eax
// 009a1950  7c9e                 jl 0x9a18f0
// 009a1952  33ff                 xor edi, edi
// 009a1954  897c2414             mov dword ptr [esp + 0x14], edi
// 009a1958  eb0e                 jmp 0x9a1968
// 009a195a  46                   inc esi
// 009a195b  ebea                 jmp 0x9a1947
// 009a195d  8d4900               lea ecx, [ecx]
// 009a1960  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 009a1964  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 009a1968  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 009a196c  3b6e2c               cmp ebp, dword ptr [esi + 0x2c]
// 009a196f  7c0f                 jl 0x9a1980
// 009a1971  8bcb                 mov ecx, ebx
// 009a1973  e88821ffff           call 0x993b00
// 009a1978  3bf8                 cmp edi, eax
// 009a197a  0f8dd2020000         jge 0x9a1c52
// 009a1980  8b462c               mov eax, dword ptr [esi + 0x2c]
// 009a1983  3be8                 cmp ebp, eax
// 009a1985  7d13                 jge 0x9a199a
// 009a1987  85ed                 test ebp, ebp
// 009a1989  7c0f                 jl 0x9a199a
// 009a198b  3be8                 cmp ebp, eax
// 009a198d  7d0b                 jge 0x9a199a
// 009a198f  8b4628               mov eax, dword ptr [esi + 0x28]
// 009a1992  8d2ca8               lea ebp, [eax + ebp*4]
// 009a1995  8b6d00               mov ebp, dword ptr [ebp]
// 009a1998  eb02                 jmp 0x9a199c
// 009a199a  33ed                 xor ebp, ebp
// 009a199c  8bcb                 mov ecx, ebx
// 009a199e  e85d21ffff           call 0x993b00
// 009a19a3  3bf8                 cmp edi, eax
// 009a19a5  7d1a                 jge 0x9a19c1
// 009a19a7  8b83fc000000         mov eax, dword ptr [ebx + 0xfc]
// 009a19ad  85ff                 test edi, edi
// 009a19af  7c10                 jl 0x9a19c1
// 009a19b1  3b782c               cmp edi, dword ptr [eax + 0x2c]
// 009a19b4  7d0b                 jge 0x9a19c1
// 009a19b6  8b4828               mov ecx, dword ptr [eax + 0x28]
// 009a19b9  8b34b9               mov esi, dword ptr [ecx + edi*4]
// 009a19bc  8d04b9               lea eax, [ecx + edi*4]
// 009a19bf  eb02                 jmp 0x9a19c3
// 009a19c1  33f6                 xor esi, esi
// 009a19c3  8b93fc000000         mov edx, dword ptr [ebx + 0xfc]
// 009a19c9  6a01                 push 1
// 009a19cb  57                   push edi
// 009a19cc  55                   push ebp
// 009a19cd  52                   push edx
// 009a19ce  8bcb                 mov ecx, ebx
// 009a19d0  e8ebfbffff           call 0x9a15c0
// 009a19d5  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 009a19d9  6a00                 push 0
// 009a19db  8bf8                 mov edi, eax
// 009a19dd  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 009a19e1  50                   push eax
// 009a19e2  56                   push esi
// 009a19e3  51                   push ecx
// 009a19e4  8bcb                 mov ecx, ebx
// 009a19e6  e8d5fbffff           call 0x9a15c0
// 009a19eb  89442424             mov dword ptr [esp + 0x24], eax
// 009a19ef  83ffff               cmp edi, -1
// 009a19f2  0f857e000000         jne 0x9a1a76
// 009a19f8  85ed                 test ebp, ebp
// 009a19fa  747a                 je 0x9a1a76
// 009a19fc  8b442414             mov eax, dword ptr [esp + 0x14]
// 009a1a00  8b93cc000000         mov edx, dword ptr [ebx + 0xcc]
// 009a1a06  8b8bfc000000         mov ecx, dword ptr [ebx + 0xfc]
// 009a1a0c  8bbbd0000000         mov edi, dword ptr [ebx + 0xd0]
// 009a1a12  6a00                 push 0
// 009a1a14  50                   push eax
// 009a1a15  55                   push ebp
// 009a1a16  89542430             mov dword ptr [esp + 0x30], edx
// 009a1a1a  e841f70200           call 0x9d1160
// 009a1a1f  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 009a1a23  8bf0                 mov esi, eax
// 009a1a25  83ffff               cmp edi, -1
// 009a1a28  740f                 je 0x9a1a39
// 009a1a2a  33c9                 xor ecx, ecx
// 009a1a2c  3bef                 cmp ebp, edi
// 009a1a2e  0f9ec1               setle cl
// 009a1a31  03cf                 add ecx, edi
// 009a1a33  898bd0000000         mov dword ptr [ebx + 0xd0], ecx
// 009a1a39  8b442424             mov eax, dword ptr [esp + 0x24]
// 009a1a3d  83f8ff               cmp eax, -1
// 009a1a40  740f                 je 0x9a1a51
// 009a1a42  33d2                 xor edx, edx
// 009a1a44  3be8                 cmp ebp, eax
// 009a1a46  0f9ec2               setle dl
// 009a1a49  03d0                 add edx, eax
// 009a1a4b  8993cc000000         mov dword ptr [ebx + 0xcc], edx
// 009a1a51  8b8ed0000000         mov ecx, dword ptr [esi + 0xd0]
// 009a1a57  8b06                 mov eax, dword ptr [esi]
// 009a1a59  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 009a1a5f  83c910               or ecx, 0x10
// 009a1a62  51                   push ecx
// 009a1a63  8bce                 mov ecx, esi
// 009a1a65  896c2428             mov dword ptr [esp + 0x28], ebp
// 009a1a69  ffd2                 call edx
// 009a1a6b  ff442418             inc dword ptr [esp + 0x18]
// 009a1a6f  45                   inc ebp
// 009a1a70  896c2414             mov dword ptr [esp + 0x14], ebp
// 009a1a74  eb1f                 jmp 0x9a1a95
// 009a1a76  3b7c2414             cmp edi, dword ptr [esp + 0x14]
// 009a1a7a  7506                 jne 0x9a1a82
// 009a1a7c  ff442418             inc dword ptr [esp + 0x18]
// 009a1a80  eb0f                 jmp 0x9a1a91
// 009a1a82  83f8ff               cmp eax, -1
// 009a1a85  740a                 je 0x9a1a91
// 009a1a87  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 009a1a8b  50                   push eax
// 009a1a8c  e8bfd80200           call 0x9cf350
// 009a1a91  ff442414             inc dword ptr [esp + 0x14]
// 009a1a95  85f6                 test esi, esi
// 009a1a97  0f84c3feffff         je 0x9a1960
// 009a1a9d  8b8684000000         mov eax, dword ptr [esi + 0x84]
// 009a1aa3  3dbd230000           cmp eax, 0x23bd
// 009a1aa8  0f84b2feffff         je 0x9a1960
// 009a1aae  3dbc230000           cmp eax, 0x23bc
// 009a1ab3  0f84a7feffff         je 0x9a1960
// 009a1ab9  8b865c010000         mov eax, dword ptr [esi + 0x15c]
// 009a1abf  85c0                 test eax, eax
// 009a1ac1  740a                 je 0x9a1acd
// 009a1ac3  83783c00             cmp dword ptr [eax + 0x3c], 0
// 009a1ac7  0f8493feffff         je 0x9a1960
// 009a1acd  f686d0000000c1       test byte ptr [esi + 0xd0], 0xc1
// 009a1ad4  0f8586feffff         jne 0x9a1960
// 009a1ada  8b06                 mov eax, dword ptr [esi]
// 009a1adc  8b9030010000         mov edx, dword ptr [eax + 0x130]
// 009a1ae2  8bce                 mov ecx, esi
// 009a1ae4  ffd2                 call edx
// 009a1ae6  85c0                 test eax, eax
// 009a1ae8  0f8472feffff         je 0x9a1960
// 009a1aee  687c010000           push 0x17c
// 009a1af3  e82206feff           call 0x98211a
// 009a1af8  83c404               add esp, 4
// 009a1afb  89442430             mov dword ptr [esp + 0x30], eax
// 009a1aff  c744243c01000000     mov dword ptr [esp + 0x3c], 1
// 009a1b07  85c0                 test eax, eax
// 009a1b09  7409                 je 0x9a1b14
// 009a1b0b  8bc8                 mov ecx, eax
// 009a1b0d  e87ed8ffff           call 0x99f390
// 009a1b12  eb02                 jmp 0x9a1b16
// 009a1b14  33c0                 xor eax, eax
// 009a1b16  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 009a1b1a  8b89fc000000         mov ecx, dword ptr [ecx + 0xfc]
// 009a1b20  6a00                 push 0
// 009a1b22  83cdff               or ebp, 0xffffffff
// 009a1b25  55                   push ebp
// 009a1b26  6a00                 push 0
// 009a1b28  6a00                 push 0
// 009a1b2a  50                   push eax
// 009a1b2b  896c2450             mov dword ptr [esp + 0x50], ebp
// 009a1b2f  e86c030300           call 0x9d1ea0
// 009a1b34  8b16                 mov edx, dword ptr [esi]
// 009a1b36  8b5258               mov edx, dword ptr [edx + 0x58]
// 009a1b39  8bf8                 mov edi, eax
// 009a1b3b  8d442428             lea eax, [esp + 0x28]
// 009a1b3f  50                   push eax
// 009a1b40  8bce                 mov ecx, esi
// 009a1b42  ffd2                 call edx
// 009a1b44  8bc8                 mov ecx, eax
// 009a1b46  c744243c02000000     mov dword ptr [esp + 0x3c], 2
// 009a1b4e  ff159847b200         call dword ptr [0xb24798]
// 009a1b54  50                   push eax
// 009a1b55  8bcf                 mov ecx, edi
// 009a1b57  e84435feff           call 0x9850a0
// 009a1b5c  8d4c2428             lea ecx, [esp + 0x28]
// 009a1b60  896c243c             mov dword ptr [esp + 0x3c], ebp
// 009a1b64  ff15d047b200         call dword ptr [0xb247d0]
// 009a1b6a  8b86fc000000         mov eax, dword ptr [esi + 0xfc]
// 009a1b70  83f802               cmp eax, 2
// 009a1b73  740f                 je 0x9a1b84
// 009a1b75  83f803               cmp eax, 3
// 009a1b78  740a                 je 0x9a1b84
// 009a1b7a  83f804               cmp eax, 4
// 009a1b7d  7405                 je 0x9a1b84
// 009a1b7f  83f801               cmp eax, 1
// 009a1b82  751e                 jne 0x9a1ba2
// 009a1b84  8bce                 mov ecx, esi
// 009a1b86  e8952afeff           call 0x984620
// 009a1b8b  398788000000         cmp dword ptr [edi + 0x88], eax
// 009a1b91  740f                 je 0x9a1ba2
// 009a1b93  6a01                 push 1
// 009a1b95  8bcf                 mov ecx, edi
// 009a1b97  898788000000         mov dword ptr [edi + 0x88], eax
// 009a1b9d  e88e34feff           call 0x985030
// 009a1ba2  8d86e0000000         lea eax, [esi + 0xe0]
// 009a1ba8  50                   push eax
// 009a1ba9  8d4c2424             lea ecx, [esp + 0x24]
// 009a1bad  ff158047b200         call dword ptr [0xb24780]
// 009a1bb3  8d4c2420             lea ecx, [esp + 0x20]
// 009a1bb7  c744243c03000000     mov dword ptr [esp + 0x3c], 3
// 009a1bbf  ff156046b200         call dword ptr [0xb24660]
// 009a1bc5  84c0                 test al, al
// 009a1bc7  7421                 je 0x9a1bea
// 009a1bc9  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 009a1bcd  e87e060000           call 0x9a2250
// 009a1bd2  8b8e84000000         mov ecx, dword ptr [esi + 0x84]
// 009a1bd8  8b10                 mov edx, dword ptr [eax]
// 009a1bda  8d6c2420             lea ebp, [esp + 0x20]
// 009a1bde  55                   push ebp
// 009a1bdf  51                   push ecx
// 009a1be0  8bc8                 mov ecx, eax
// 009a1be2  8b4258               mov eax, dword ptr [edx + 0x58]
// 009a1be5  ffd0                 call eax
// 009a1be7  83cdff               or ebp, 0xffffffff
// 009a1bea  8d4c2420             lea ecx, [esp + 0x20]
// 009a1bee  ff159847b200         call dword ptr [0xb24798]
// 009a1bf4  50                   push eax
// 009a1bf5  8d8fe0000000         lea ecx, [edi + 0xe0]
// 009a1bfb  ff157847b200         call dword ptr [0xb24778]
// 009a1c01  8b17                 mov edx, dword ptr [edi]
// 009a1c03  8b5268               mov edx, dword ptr [edx + 0x68]
// 009a1c06  33c0                 xor eax, eax
// 009a1c08  396c2424             cmp dword ptr [esp + 0x24], ebp
// 009a1c0c  8bcf                 mov ecx, edi
// 009a1c0e  0f95c0               setne al
// 009a1c11  50                   push eax
// 009a1c12  ffd2                 call edx
// 009a1c14  8b86d0000000         mov eax, dword ptr [esi + 0xd0]
// 009a1c1a  c1e804               shr eax, 4
// 009a1c1d  f7d0                 not eax
// 009a1c1f  83e001               and eax, 1
// 009a1c22  3987a0000000         cmp dword ptr [edi + 0xa0], eax
// 009a1c28  740f                 je 0x9a1c39
// 009a1c2a  6a01                 push 1
// 009a1c2c  8bcf                 mov ecx, edi
// 009a1c2e  8987a0000000         mov dword ptr [edi + 0xa0], eax
// 009a1c34  e8f733feff           call 0x985030
// 009a1c39  8d4c2420             lea ecx, [esp + 0x20]
// 009a1c3d  89b774010000         mov dword ptr [edi + 0x174], esi
// 009a1c43  896c243c             mov dword ptr [esp + 0x3c], ebp
// 009a1c47  ff15d047b200         call dword ptr [0xb247d0]
// 009a1c4d  e90efdffff           jmp 0x9a1960
// 009a1c52  8bce                 mov ecx, esi
// 009a1c54  e8310afeff           call 0x98268a
// 009a1c59  8b83fc000000         mov eax, dword ptr [ebx + 0xfc]
// 009a1c5f  83783c00             cmp dword ptr [eax + 0x3c], 0
// 009a1c63  7479                 je 0x9a1cde
// 009a1c65  83bb8c01000000       cmp dword ptr [ebx + 0x18c], 0
// 009a1c6c  7570                 jne 0x9a1cde
// 009a1c6e  83bb8801000000       cmp dword ptr [ebx + 0x188], 0
// 009a1c75  7467                 je 0x9a1cde
// 009a1c77  687c010000           push 0x17c
// 009a1c7c  e89904feff           call 0x98211a
// 009a1c81  83c404               add esp, 4
// 009a1c84  89442430             mov dword ptr [esp + 0x30], eax
// 009a1c88  c744243c04000000     mov dword ptr [esp + 0x3c], 4
// 009a1c90  85c0                 test eax, eax
// 009a1c92  7409                 je 0x9a1c9d
// 009a1c94  8bc8                 mov ecx, eax
// 009a1c96  e8f5d6ffff           call 0x99f390
// 009a1c9b  eb02                 jmp 0x9a1c9f
// 009a1c9d  33c0                 xor eax, eax
// 009a1c9f  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 009a1ca3  8b89fc000000         mov ecx, dword ptr [ecx + 0xfc]
// 009a1ca9  6a00                 push 0
// 009a1cab  6aff                 push -1
// 009a1cad  6a00                 push 0
// 009a1caf  68a3230000           push 0x23a3
// 009a1cb4  50                   push eax
// 009a1cb5  c7442450ffffffff     mov dword ptr [esp + 0x50], 0xffffffff
// 009a1cbd  e8de010300           call 0x9d1ea0
// 009a1cc2  8bf0                 mov esi, eax
// 009a1cc4  6a08                 push 8
// 009a1cc6  8bce                 mov ecx, esi
// 009a1cc8  e8532efeff           call 0x984b20
// 009a1ccd  8b16                 mov edx, dword ptr [esi]
// 009a1ccf  8b4264               mov eax, dword ptr [edx + 0x64]
// 009a1cd2  6a01                 push 1
// 009a1cd4  8bce                 mov ecx, esi
// 009a1cd6  ffd0                 call eax
// 009a1cd8  899e78010000         mov dword ptr [esi + 0x178], ebx
// 009a1cde  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 009a1ce2  64890d00000000       mov dword ptr fs:[0], ecx
// 009a1ce9  59                   pop ecx
// 009a1cea  5f                   pop edi
// 009a1ceb  5e                   pop esi
// 009a1cec  5d                   pop ebp
// 009a1ced  5b                   pop ebx
// 009a1cee  83c42c               add esp, 0x2c
// 009a1cf1  c20400               ret 4
// copied from an identical function in another client (function ?BuildCustomizePopup@CXTPToolBar@@AAEXPAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPToolBar.cpp