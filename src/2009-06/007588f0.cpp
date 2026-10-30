// roc 2009-06 007588f0  unit: CRobloxTreeCtrl  size: 1231 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007588f0
//
// 007588f0  6aff                 push -1
// 007588f2  68007c8700           push 0x877c00
// 007588f7  64a100000000         mov eax, dword ptr fs:[0]
// 007588fd  50                   push eax
// 007588fe  81ec90000000         sub esp, 0x90
// 00758904  53                   push ebx
// 00758905  55                   push ebp
// 00758906  56                   push esi
// 00758907  57                   push edi
// 00758908  a1304fa200           mov eax, dword ptr [0xa24f30]
// 0075890d  33c4                 xor eax, esp
// 0075890f  50                   push eax
// 00758910  8d8424a4000000       lea eax, [esp + 0xa4]
// 00758917  64a300000000         mov dword ptr fs:[0], eax
// 0075891d  8bf1                 mov esi, ecx
// 0075891f  8b4634               mov eax, dword ptr [esi + 0x34]
// 00758922  8b7820               mov edi, dword ptr [eax + 0x20]
// 00758925  ff1578ee8900         call dword ptr [0x89ee78]
// 0075892b  3bc7                 cmp eax, edi
// 0075892d  7407                 je 0x758936
// 0075892f  57                   push edi
// 00758930  ff158cee8900         call dword ptr [0x89ee8c]
// 00758936  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00758939  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0075893c  52                   push edx
// 0075893d  ff1538ee8900         call dword ptr [0x89ee38]
// 00758943  6a0a                 push 0xa
// 00758945  8d8c248c000000       lea ecx, [esp + 0x8c]
// 0075894c  e85b380f00           call 0x84c1ac
// 00758951  c7842488000000d0608f00 mov dword ptr [esp + 0x88], 0x8f60d0
// 0075895c  8b8424b4000000       mov eax, dword ptr [esp + 0xb4]
// 00758963  33ed                 xor ebp, ebp
// 00758965  83e00c               and eax, 0xc
// 00758968  89ac24ac000000       mov dword ptr [esp + 0xac], ebp
// 0075896f  89442434             mov dword ptr [esp + 0x34], eax
// 00758973  740f                 je 0x758984
// 00758975  8d842488000000       lea eax, [esp + 0x88]
// 0075897c  50                   push eax
// 0075897d  8bce                 mov ecx, esi
// 0075897f  e81cf5ffff           call 0x757ea0
// 00758984  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00758987  51                   push ecx
// 00758988  8d4c2470             lea ecx, [esp + 0x70]
// 0075898c  e8110ffcff           call 0x7198a2
// 00758991  8b4634               mov eax, dword ptr [esi + 0x34]
// 00758994  8b4020               mov eax, dword ptr [eax + 0x20]
// 00758997  8d542440             lea edx, [esp + 0x40]
// 0075899b  52                   push edx
// 0075899c  bb01000000           mov ebx, 1
// 007589a1  50                   push eax
// 007589a2  889c24b4000000       mov byte ptr [esp + 0xb4], bl
// 007589a9  ff1514ee8900         call dword ptr [0x89ee14]
// 007589af  8b3ddced8900         mov edi, dword ptr [0x89eddc]
// 007589b5  6a45                 push 0x45
// 007589b7  ffd7                 call edi
// 007589b9  6a44                 push 0x44
// 007589bb  8944243c             mov dword ptr [esp + 0x3c], eax
// 007589bf  ffd7                 call edi
// 007589c1  55                   push ebp
// 007589c2  89842484000000       mov dword ptr [esp + 0x84], eax
// 007589c9  8b4634               mov eax, dword ptr [esi + 0x34]
// 007589cc  8b4820               mov ecx, dword ptr [eax + 0x20]
// 007589cf  6a4b                 push 0x4b
// 007589d1  53                   push ebx
// 007589d2  51                   push ecx
// 007589d3  896c243c             mov dword ptr [esp + 0x3c], ebp
// 007589d7  ff150cee8900         call dword ptr [0x89ee0c]
// 007589dd  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 007589e0  53                   push ebx
// 007589e1  89442440             mov dword ptr [esp + 0x40], eax
// 007589e5  e8f2370f00           call 0x84c1dc
// 007589ea  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 007589ed  55                   push ebp
// 007589ee  8bf8                 mov edi, eax
// 007589f0  e8e7370f00           call 0x84c1dc
// 007589f5  33c9                 xor ecx, ecx
// 007589f7  51                   push ecx
// 007589f8  8be8                 mov ebp, eax
// 007589fa  8b4634               mov eax, dword ptr [esi + 0x34]
// 007589fd  51                   push ecx
// 007589fe  894c2424             mov dword ptr [esp + 0x24], ecx
// 00758a02  894c2428             mov dword ptr [esp + 0x28], ecx
// 00758a06  894c242c             mov dword ptr [esp + 0x2c], ecx
// 00758a0a  894c2430             mov dword ptr [esp + 0x30], ecx
// 00758a0e  8b5020               mov edx, dword ptr [eax + 0x20]
// 00758a11  680a110000           push 0x110a
// 00758a16  52                   push edx
// 00758a17  894c2440             mov dword ptr [esp + 0x40], ecx
// 00758a1b  ff1590ee8900         call dword ptr [0x89ee90]
// 00758a21  85c0                 test eax, eax
// 00758a23  741f                 je 0x758a44
// 00758a25  6a00                 push 0
// 00758a27  8d4c2420             lea ecx, [esp + 0x20]
// 00758a2b  51                   push ecx
// 00758a2c  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00758a2f  50                   push eax
// 00758a30  e89909fcff           call 0x7193ce
// 00758a35  8b442428             mov eax, dword ptr [esp + 0x28]
// 00758a39  2b442420             sub eax, dword ptr [esp + 0x20]
// 00758a3d  89442430             mov dword ptr [esp + 0x30], eax
// 00758a41  0faff8               imul edi, eax
// 00758a44  01ac24b8000000       add dword ptr [esp + 0xb8], ebp
// 00758a4b  01bc24bc000000       add dword ptr [esp + 0xbc], edi
// 00758a52  6a00                 push 0
// 00758a54  6a00                 push 0
// 00758a56  6a00                 push 0
// 00758a58  8d54245c             lea edx, [esp + 0x5c]
// 00758a5c  52                   push edx
// 00758a5d  ff15d8ee8900         call dword ptr [0x89eed8]
// 00758a63  85c0                 test eax, eax
// 00758a65  0f84b2000000         je 0x758b1d
// 00758a6b  8b7e34               mov edi, dword ptr [esi + 0x34]
// 00758a6e  ff153cee8900         call dword ptr [0x89ee3c]
// 00758a74  3b4720               cmp eax, dword ptr [edi + 0x20]
// 00758a77  0f85a0000000         jne 0x758b1d
// 00758a7d  8b442454             mov eax, dword ptr [esp + 0x54]
// 00758a81  3d00020000           cmp eax, 0x200
// 00758a86  0f87b9020000         ja 0x758d45
// 00758a8c  0f84d0000000         je 0x758b62
// 00758a92  2d00010000           sub eax, 0x100
// 00758a97  746d                 je 0x758b06
// 00758a99  83e813               sub eax, 0x13
// 00758a9c  0f85b7020000         jne 0x758d59
// 00758aa2  837c24584b           cmp dword ptr [esp + 0x58], 0x4b
// 00758aa7  75a9                 jne 0x758a52
// 00758aa9  8b442464             mov eax, dword ptr [esp + 0x64]
// 00758aad  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 00758ab1  8d542414             lea edx, [esp + 0x14]
// 00758ab5  89442414             mov dword ptr [esp + 0x14], eax
// 00758ab9  894c2418             mov dword ptr [esp + 0x18], ecx
// 00758abd  8b4720               mov eax, dword ptr [edi + 0x20]
// 00758ac0  52                   push edx
// 00758ac1  50                   push eax
// 00758ac2  ff1530ee8900         call dword ptr [0x89ee30]
// 00758ac8  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00758acc  8b542414             mov edx, dword ptr [esp + 0x14]
// 00758ad0  51                   push ecx
// 00758ad1  52                   push edx
// 00758ad2  8d442448             lea eax, [esp + 0x48]
// 00758ad6  50                   push eax
// 00758ad7  ff15c0ed8900         call dword ptr [0x89edc0]
// 00758add  85c0                 test eax, eax
// 00758adf  7410                 je 0x758af1
// 00758ae1  8d4c2450             lea ecx, [esp + 0x50]
// 00758ae5  51                   push ecx
// 00758ae6  ff154ced8900         call dword ptr [0x89ed4c]
// 00758aec  e961ffffff           jmp 0x758a52
// 00758af1  0fb7442418           movzx eax, word ptr [esp + 0x18]
// 00758af6  0fb7542414           movzx edx, word ptr [esp + 0x14]
// 00758afb  c1e010               shl eax, 0x10
// 00758afe  0bc2                 or eax, edx
// 00758b00  8944245c             mov dword ptr [esp + 0x5c], eax
// 00758b04  eb60                 jmp 0x758b66
// 00758b06  66837c24581b         cmp word ptr [esp + 0x58], 0x1b
// 00758b0c  0f8547020000         jne 0x758d59
// 00758b12  6a00                 push 0
// 00758b14  6a00                 push 0
// 00758b16  8bce                 mov ecx, esi
// 00758b18  e873ecffff           call 0x757790
// 00758b1d  8b4634               mov eax, dword ptr [esi + 0x34]
// 00758b20  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00758b24  8b4020               mov eax, dword ptr [eax + 0x20]
// 00758b27  52                   push edx
// 00758b28  50                   push eax
// 00758b29  ff1584ee8900         call dword ptr [0x89ee84]
// 00758b2f  ff1544ee8900         call dword ptr [0x89ee44]
// 00758b35  837c242c00           cmp dword ptr [esp + 0x2c], 0
// 00758b3a  0f8429020000         je 0x758d69
// 00758b40  6a00                 push 0
// 00758b42  6a00                 push 0
// 00758b44  8bc3                 mov eax, ebx
// 00758b46  50                   push eax
// 00758b47  53                   push ebx
// 00758b48  6a00                 push 0
// 00758b4a  50                   push eax
// 00758b4b  53                   push ebx
// 00758b4c  8d4c2438             lea ecx, [esp + 0x38]
// 00758b50  51                   push ecx
// 00758b51  8d8c248c000000       lea ecx, [esp + 0x8c]
// 00758b58  e879360f00           call 0x84c1d6
// 00758b5d  e919020000           jmp 0x758d7b
// 00758b62  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 00758b66  0fbfc8               movsx ecx, ax
// 00758b69  c1e810               shr eax, 0x10
// 00758b6c  837c242c00           cmp dword ptr [esp + 0x2c], 0
// 00758b71  0fbff8               movsx edi, ax
// 00758b74  894c2414             mov dword ptr [esp + 0x14], ecx
// 00758b78  897c2418             mov dword ptr [esp + 0x18], edi
// 00758b7c  0f858c000000         jne 0x758c0e
// 00758b82  2b8c24b8000000       sub ecx, dword ptr [esp + 0xb8]
// 00758b89  8bc1                 mov eax, ecx
// 00758b8b  99                   cdq 
// 00758b8c  33c2                 xor eax, edx
// 00758b8e  2bc2                 sub eax, edx
// 00758b90  3b842480000000       cmp eax, dword ptr [esp + 0x80]
// 00758b97  7f18                 jg 0x758bb1
// 00758b99  2bbc24bc000000       sub edi, dword ptr [esp + 0xbc]
// 00758ba0  8bc7                 mov eax, edi
// 00758ba2  99                   cdq 
// 00758ba3  33c2                 xor eax, edx
// 00758ba5  2bc2                 sub eax, edx
// 00758ba7  3b442438             cmp eax, dword ptr [esp + 0x38]
// 00758bab  0f8ea1feffff         jle 0x758a52
// 00758bb1  837c243400           cmp dword ptr [esp + 0x34], 0
// 00758bb6  895c242c             mov dword ptr [esp + 0x2c], ebx
// 00758bba  750b                 jne 0x758bc7
// 00758bbc  6a00                 push 0
// 00758bbe  6a00                 push 0
// 00758bc0  8bce                 mov ecx, esi
// 00758bc2  e8c9ebffff           call 0x757790
// 00758bc7  8b4634               mov eax, dword ptr [esi + 0x34]
// 00758bca  8b4020               mov eax, dword ptr [eax + 0x20]
// 00758bcd  50                   push eax
// 00758bce  ff15b4ee8900         call dword ptr [0x89eeb4]
// 00758bd4  8b8424bc000000       mov eax, dword ptr [esp + 0xbc]
// 00758bdb  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 00758be2  50                   push eax
// 00758be3  51                   push ecx
// 00758be4  50                   push eax
// 00758be5  51                   push ecx
// 00758be6  8d4c242c             lea ecx, [esp + 0x2c]
// 00758bea  51                   push ecx
// 00758beb  ff15a4ed8900         call dword ptr [0x89eda4]
// 00758bf1  6a00                 push 0
// 00758bf3  6a00                 push 0
// 00758bf5  8bc3                 mov eax, ebx
// 00758bf7  50                   push eax
// 00758bf8  53                   push ebx
// 00758bf9  6a00                 push 0
// 00758bfb  50                   push eax
// 00758bfc  53                   push ebx
// 00758bfd  8d542438             lea edx, [esp + 0x38]
// 00758c01  52                   push edx
// 00758c02  8d8c248c000000       lea ecx, [esp + 0x8c]
// 00758c09  e8c8350f00           call 0x84c1d6
// 00758c0e  6a00                 push 0
// 00758c10  6a00                 push 0
// 00758c12  8bc3                 mov eax, ebx
// 00758c14  50                   push eax
// 00758c15  53                   push ebx
// 00758c16  6a00                 push 0
// 00758c18  50                   push eax
// 00758c19  53                   push ebx
// 00758c1a  8d442438             lea eax, [esp + 0x38]
// 00758c1e  50                   push eax
// 00758c1f  8d8c248c000000       lea ecx, [esp + 0x8c]
// 00758c26  e8ab350f00           call 0x84c1d6
// 00758c2b  8b442418             mov eax, dword ptr [esp + 0x18]
// 00758c2f  3b442444             cmp eax, dword ptr [esp + 0x44]
// 00758c33  7d12                 jge 0x758c47
// 00758c35  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00758c38  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00758c3b  6a00                 push 0
// 00758c3d  6a00                 push 0
// 00758c3f  6815010000           push 0x115
// 00758c44  52                   push edx
// 00758c45  eb16                 jmp 0x758c5d
// 00758c47  3b44244c             cmp eax, dword ptr [esp + 0x4c]
// 00758c4b  7c16                 jl 0x758c63
// 00758c4d  8b4634               mov eax, dword ptr [esi + 0x34]
// 00758c50  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00758c53  6a00                 push 0
// 00758c55  6a01                 push 1
// 00758c57  6815010000           push 0x115
// 00758c5c  51                   push ecx
// 00758c5d  ff1590ee8900         call dword ptr [0x89ee90]
// 00758c63  8b442414             mov eax, dword ptr [esp + 0x14]
// 00758c67  3b442440             cmp eax, dword ptr [esp + 0x40]
// 00758c6b  7d12                 jge 0x758c7f
// 00758c6d  8b5634               mov edx, dword ptr [esi + 0x34]
// 00758c70  8b4220               mov eax, dword ptr [edx + 0x20]
// 00758c73  6a00                 push 0
// 00758c75  6a00                 push 0
// 00758c77  6814010000           push 0x114
// 00758c7c  50                   push eax
// 00758c7d  eb16                 jmp 0x758c95
// 00758c7f  3b442448             cmp eax, dword ptr [esp + 0x48]
// 00758c83  7c16                 jl 0x758c9b
// 00758c85  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00758c88  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00758c8b  6a00                 push 0
// 00758c8d  6a01                 push 1
// 00758c8f  6814010000           push 0x114
// 00758c94  52                   push edx
// 00758c95  ff1590ee8900         call dword ptr [0x89ee90]
// 00758c9b  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00758c9e  8bbc24b8000000       mov edi, dword ptr [esp + 0xb8]
// 00758ca5  8bac24bc000000       mov ebp, dword ptr [esp + 0xbc]
// 00758cac  6a00                 push 0
// 00758cae  e829350f00           call 0x84c1dc
// 00758cb3  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00758cb6  6a01                 push 1
// 00758cb8  2bf8                 sub edi, eax
// 00758cba  e81d350f00           call 0x84c1dc
// 00758cbf  0faf442430           imul eax, dword ptr [esp + 0x30]
// 00758cc4  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00758cc8  2be8                 sub ebp, eax
// 00758cca  8b442418             mov eax, dword ptr [esp + 0x18]
// 00758cce  50                   push eax
// 00758ccf  51                   push ecx
// 00758cd0  55                   push ebp
// 00758cd1  57                   push edi
// 00758cd2  8d54242c             lea edx, [esp + 0x2c]
// 00758cd6  52                   push edx
// 00758cd7  ff15a4ed8900         call dword ptr [0x89eda4]
// 00758cdd  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00758ce1  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00758ce5  3bc1                 cmp eax, ecx
// 00758ce7  7e08                 jle 0x758cf1
// 00758ce9  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00758ced  89442424             mov dword ptr [esp + 0x24], eax
// 00758cf1  8b442420             mov eax, dword ptr [esp + 0x20]
// 00758cf5  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00758cf9  3bc1                 cmp eax, ecx
// 00758cfb  7e08                 jle 0x758d05
// 00758cfd  894c2420             mov dword ptr [esp + 0x20], ecx
// 00758d01  89442428             mov dword ptr [esp + 0x28], eax
// 00758d05  8b9424b4000000       mov edx, dword ptr [esp + 0xb4]
// 00758d0c  8b06                 mov eax, dword ptr [esi]
// 00758d0e  8d8c2488000000       lea ecx, [esp + 0x88]
// 00758d15  51                   push ecx
// 00758d16  52                   push edx
// 00758d17  8b5064               mov edx, dword ptr [eax + 0x64]
// 00758d1a  8d4c2424             lea ecx, [esp + 0x24]
// 00758d1e  51                   push ecx
// 00758d1f  8bce                 mov ecx, esi
// 00758d21  ffd2                 call edx
// 00758d23  6a00                 push 0
// 00758d25  6a00                 push 0
// 00758d27  8bc3                 mov eax, ebx
// 00758d29  50                   push eax
// 00758d2a  53                   push ebx
// 00758d2b  6a00                 push 0
// 00758d2d  50                   push eax
// 00758d2e  53                   push ebx
// 00758d2f  8d442438             lea eax, [esp + 0x38]
// 00758d33  50                   push eax
// 00758d34  8d8c248c000000       lea ecx, [esp + 0x8c]
// 00758d3b  e896340f00           call 0x84c1d6
// 00758d40  e90dfdffff           jmp 0x758a52
// 00758d45  2d02020000           sub eax, 0x202
// 00758d4a  0f84cdfdffff         je 0x758b1d
// 00758d50  83e803               sub eax, 3
// 00758d53  0f84c4fdffff         je 0x758b1d
// 00758d59  8d4c2450             lea ecx, [esp + 0x50]
// 00758d5d  51                   push ecx
// 00758d5e  ff154ced8900         call dword ptr [0x89ed4c]
// 00758d64  e9e9fcffff           jmp 0x758a52
// 00758d69  837c243400           cmp dword ptr [esp + 0x34], 0
// 00758d6e  750b                 jne 0x758d7b
// 00758d70  6a00                 push 0
// 00758d72  6a00                 push 0
// 00758d74  8bce                 mov ecx, esi
// 00758d76  e815eaffff           call 0x757790
// 00758d7b  8d4c246c             lea ecx, [esp + 0x6c]
// 00758d7f  c68424ac00000000     mov byte ptr [esp + 0xac], 0
// 00758d87  e8100bfcff           call 0x71989c
// 00758d8c  8d8c2488000000       lea ecx, [esp + 0x88]
// 00758d93  c78424ac000000ffffffff mov dword ptr [esp + 0xac], 0xffffffff
// 00758d9e  e8fd330f00           call 0x84c1a0
// 00758da3  8b8c24a4000000       mov ecx, dword ptr [esp + 0xa4]
// 00758daa  64890d00000000       mov dword ptr fs:[0], ecx
// 00758db1  59                   pop ecx
// 00758db2  5f                   pop edi
// 00758db3  5e                   pop esi
// 00758db4  5d                   pop ebp
// 00758db5  5b                   pop ebx
// 00758db6  81c49c000000         add esp, 0x9c
// 00758dbc  c20c00               ret 0xc
// copied from an identical function in another client (function ?DoBanding@CXTTreeBase@@MAEXIVCPoint@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTTreeBase.cpp