// roc 2008-06 00451b60  unit: CRobloxDoc  size: 3108 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00451b60
//
// 00451b60  6aff                 push -1
// 00451b62  64a100000000         mov eax, dword ptr fs:[0]
// 00451b68  68691e7c00           push 0x7c1e69
// 00451b6d  50                   push eax
// 00451b6e  64892500000000       mov dword ptr fs:[0], esp
// 00451b75  83ec64               sub esp, 0x64
// 00451b78  53                   push ebx
// 00451b79  55                   push ebp
// 00451b7a  56                   push esi
// 00451b7b  57                   push edi
// 00451b7c  8bf1                 mov esi, ecx
// 00451b7e  8dbe94000000         lea edi, [esi + 0x94]
// 00451b84  57                   push edi
// 00451b85  e8e6e7ffff           call 0x450370
// 00451b8a  33ed                 xor ebp, ebp
// 00451b8c  3bc5                 cmp eax, ebp
// 00451b8e  0f85bd0b0000         jne 0x452751
// 00451b94  8b07                 mov eax, dword ptr [edi]
// 00451b96  8b08                 mov ecx, dword ptr [eax]
// 00451b98  8b5104               mov edx, dword ptr [ecx + 4]
// 00451b9b  50                   push eax
// 00451b9c  ffd2                 call edx
// 00451b9e  8b0f                 mov ecx, dword ptr [edi]
// 00451ba0  8d44241c             lea eax, [esp + 0x1c]
// 00451ba4  50                   push eax
// 00451ba5  e8968d0100           call 0x46a940
// 00451baa  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00451bae  83ec08               sub esp, 8
// 00451bb1  8bc4                 mov eax, esp
// 00451bb3  8908                 mov dword ptr [eax], ecx
// 00451bb5  8b542428             mov edx, dword ptr [esp + 0x28]
// 00451bb9  895004               mov dword ptr [eax + 4], edx
// 00451bbc  8b442428             mov eax, dword ptr [esp + 0x28]
// 00451bc0  c784248400000001000000 mov dword ptr [esp + 0x84], 1
// 00451bcb  89642418             mov dword ptr [esp + 0x18], esp
// 00451bcf  3bc5                 cmp eax, ebp
// 00451bd1  740c                 je 0x451bdf
// 00451bd3  83c004               add eax, 4
// 00451bd6  b901000000           mov ecx, 1
// 00451bdb  f00fc108             lock xadd dword ptr [eax], ecx
// 00451bdf  8d4c242c             lea ecx, [esp + 0x2c]
// 00451be3  e858fffbff           call 0x411b40
// 00451be8  b302                 mov bl, 2
// 00451bea  8d4e20               lea ecx, [esi + 0x20]
// 00451bed  885c247c             mov byte ptr [esp + 0x7c], bl
// 00451bf1  ff15e03e8000         call dword ptr [0x803ee0]
// 00451bf7  50                   push eax
// 00451bf8  8d4c2434             lea ecx, [esp + 0x34]
// 00451bfc  ff1558248000         call dword ptr [0x802458]
// 00451c02  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00451c06  8b11                 mov edx, dword ptr [ecx]
// 00451c08  8b5204               mov edx, dword ptr [edx + 4]
// 00451c0b  8d442430             lea eax, [esp + 0x30]
// 00451c0f  50                   push eax
// 00451c10  c684248000000003     mov byte ptr [esp + 0x80], 3
// 00451c18  ffd2                 call edx
// 00451c1a  8d4c2430             lea ecx, [esp + 0x30]
// 00451c1e  885c247c             mov byte ptr [esp + 0x7c], bl
// 00451c22  ff1568248000         call dword ptr [0x802468]
// 00451c28  6804070000           push 0x704
// 00451c2d  e8eeec2400           call 0x6a0920
// 00451c32  83c404               add esp, 4
// 00451c35  89442410             mov dword ptr [esp + 0x10], eax
// 00451c39  c644247c04           mov byte ptr [esp + 0x7c], 4
// 00451c3e  3bc5                 cmp eax, ebp
// 00451c40  740e                 je 0x451c50
// 00451c42  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00451c46  51                   push ecx
// 00451c47  8bc8                 mov ecx, eax
// 00451c49  e852621700           call 0x5c7ea0
// 00451c4e  eb02                 jmp 0x451c52
// 00451c50  33c0                 xor eax, eax
// 00451c52  8bbe90000000         mov edi, dword ptr [esi + 0x90]
// 00451c58  885c247c             mov byte ptr [esp + 0x7c], bl
// 00451c5c  898690000000         mov dword ptr [esi + 0x90], eax
// 00451c62  3bfd                 cmp edi, ebp
// 00451c64  7410                 je 0x451c76
// 00451c66  8bcf                 mov ecx, edi
// 00451c68  e8e3e7ffff           call 0x450450
// 00451c6d  57                   push edi
// 00451c6e  e807ea2400           call 0x6a067a
// 00451c73  83c404               add esp, 4
// 00451c76  6a10                 push 0x10
// 00451c78  e8a3ec2400           call 0x6a0920
// 00451c7d  8bf8                 mov edi, eax
// 00451c7f  83c404               add esp, 4
// 00451c82  897c2410             mov dword ptr [esp + 0x10], edi
// 00451c86  c644247c05           mov byte ptr [esp + 0x7c], 5
// 00451c8b  3bfd                 cmp edi, ebp
// 00451c8d  7435                 je 0x451cc4
// 00451c8f  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00451c93  3bc5                 cmp eax, ebp
// 00451c95  7406                 je 0x451c9d
// 00451c97  8da8c8010000         lea ebp, [eax + 0x1c8]
// 00451c9d  83ec1c               sub esp, 0x1c
// 00451ca0  8bcc                 mov ecx, esp
// 00451ca2  89642430             mov dword ptr [esp + 0x30], esp
// 00451ca6  68f4728100           push 0x8172f4
// 00451cab  ff1558248000         call dword ptr [0x802458]
// 00451cb1  55                   push ebp
// 00451cb2  8bcf                 mov ecx, edi
// 00451cb4  e827171300           call 0x5833e0
// 00451cb9  c707e0728100         mov dword ptr [edi], 0x8172e0
// 00451cbf  89770c               mov dword ptr [edi + 0xc], esi
// 00451cc2  eb02                 jmp 0x451cc6
// 00451cc4  33ff                 xor edi, edi
// 00451cc6  897c2410             mov dword ptr [esp + 0x10], edi
// 00451cca  8d542410             lea edx, [esp + 0x10]
// 00451cce  8d7e78               lea edi, [esi + 0x78]
// 00451cd1  52                   push edx
// 00451cd2  8bcf                 mov ecx, edi
// 00451cd4  889c2480000000       mov byte ptr [esp + 0x80], bl
// 00451cdb  e8c0f6fcff           call 0x4213a0
// 00451ce0  6a10                 push 0x10
// 00451ce2  e839ec2400           call 0x6a0920
// 00451ce7  8be8                 mov ebp, eax
// 00451ce9  83c404               add esp, 4
// 00451cec  896c2414             mov dword ptr [esp + 0x14], ebp
// 00451cf0  c644247c06           mov byte ptr [esp + 0x7c], 6
// 00451cf5  85ed                 test ebp, ebp
// 00451cf7  7447                 je 0x451d40
// 00451cf9  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00451cfd  85c0                 test eax, eax
// 00451cff  740b                 je 0x451d0c
// 00451d01  05c8010000           add eax, 0x1c8
// 00451d06  89442410             mov dword ptr [esp + 0x10], eax
// 00451d0a  eb08                 jmp 0x451d14
// 00451d0c  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00451d14  83ec1c               sub esp, 0x1c
// 00451d17  8bcc                 mov ecx, esp
// 00451d19  89642434             mov dword ptr [esp + 0x34], esp
// 00451d1d  6818738100           push 0x817318
// 00451d22  ff1558248000         call dword ptr [0x802458]
// 00451d28  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00451d2c  50                   push eax
// 00451d2d  8bcd                 mov ecx, ebp
// 00451d2f  e8ac161300           call 0x5833e0
// 00451d34  c7450004738100       mov dword ptr [ebp], 0x817304
// 00451d3b  89750c               mov dword ptr [ebp + 0xc], esi
// 00451d3e  eb02                 jmp 0x451d42
// 00451d40  33ed                 xor ebp, ebp
// 00451d42  8d4c2410             lea ecx, [esp + 0x10]
// 00451d46  51                   push ecx
// 00451d47  8bcf                 mov ecx, edi
// 00451d49  889c2480000000       mov byte ptr [esp + 0x80], bl
// 00451d50  896c2414             mov dword ptr [esp + 0x14], ebp
// 00451d54  e847f6fcff           call 0x4213a0
// 00451d59  6a1c                 push 0x1c
// 00451d5b  e8c0eb2400           call 0x6a0920
// 00451d60  8be8                 mov ebp, eax
// 00451d62  83c404               add esp, 4
// 00451d65  896c2418             mov dword ptr [esp + 0x18], ebp
// 00451d69  c644247c07           mov byte ptr [esp + 0x7c], 7
// 00451d6e  85ed                 test ebp, ebp
// 00451d70  7430                 je 0x451da2
// 00451d72  8b8e94000000         mov ecx, dword ptr [esi + 0x94]
// 00451d78  e8f38b0100           call 0x46a970
// 00451d7d  50                   push eax
// 00451d7e  83ec1c               sub esp, 0x1c
// 00451d81  8bcc                 mov ecx, esp
// 00451d83  89642434             mov dword ptr [esp + 0x34], esp
// 00451d87  68147c8100           push 0x817c14
// 00451d8c  ff1558248000         call dword ptr [0x802458]
// 00451d92  8bcd                 mov ecx, ebp
// 00451d94  e837c61200           call 0x57e3d0
// 00451d99  c74500007c8100       mov dword ptr [ebp], 0x817c00
// 00451da0  eb02                 jmp 0x451da4
// 00451da2  33ed                 xor ebp, ebp
// 00451da4  8d542410             lea edx, [esp + 0x10]
// 00451da8  52                   push edx
// 00451da9  8bcf                 mov ecx, edi
// 00451dab  889c2480000000       mov byte ptr [esp + 0x80], bl
// 00451db2  896c2414             mov dword ptr [esp + 0x14], ebp
// 00451db6  e8e5f5fcff           call 0x4213a0
// 00451dbb  6a1c                 push 0x1c
// 00451dbd  e85eeb2400           call 0x6a0920
// 00451dc2  8be8                 mov ebp, eax
// 00451dc4  83c404               add esp, 4
// 00451dc7  896c2418             mov dword ptr [esp + 0x18], ebp
// 00451dcb  c644247c08           mov byte ptr [esp + 0x7c], 8
// 00451dd0  85ed                 test ebp, ebp
// 00451dd2  7430                 je 0x451e04
// 00451dd4  8b8e94000000         mov ecx, dword ptr [esi + 0x94]
// 00451dda  e8918b0100           call 0x46a970
// 00451ddf  50                   push eax
// 00451de0  83ec1c               sub esp, 0x1c
// 00451de3  8bcc                 mov ecx, esp
// 00451de5  89642434             mov dword ptr [esp + 0x34], esp
// 00451de9  68f87a8100           push 0x817af8
// 00451dee  ff1558248000         call dword ptr [0x802458]
// 00451df4  8bcd                 mov ecx, ebp
// 00451df6  e8d5c51200           call 0x57e3d0
// 00451dfb  c74500e47a8100       mov dword ptr [ebp], 0x817ae4
// 00451e02  eb02                 jmp 0x451e06
// 00451e04  33ed                 xor ebp, ebp
// 00451e06  8d442410             lea eax, [esp + 0x10]
// 00451e0a  50                   push eax
// 00451e0b  8bcf                 mov ecx, edi
// 00451e0d  889c2480000000       mov byte ptr [esp + 0x80], bl
// 00451e14  896c2414             mov dword ptr [esp + 0x14], ebp
// 00451e18  e883f5fcff           call 0x4213a0
// 00451e1d  6a1c                 push 0x1c
// 00451e1f  e8fcea2400           call 0x6a0920
// 00451e24  8be8                 mov ebp, eax
// 00451e26  83c404               add esp, 4
// 00451e29  896c2418             mov dword ptr [esp + 0x18], ebp
// 00451e2d  c644247c09           mov byte ptr [esp + 0x7c], 9
// 00451e32  85ed                 test ebp, ebp
// 00451e34  7430                 je 0x451e66
// 00451e36  8b8e94000000         mov ecx, dword ptr [esi + 0x94]
// 00451e3c  e82f8b0100           call 0x46a970
// 00451e41  50                   push eax
// 00451e42  83ec1c               sub esp, 0x1c
// 00451e45  8bcc                 mov ecx, esp
// 00451e47  89642434             mov dword ptr [esp + 0x34], esp
// 00451e4b  68207b8100           push 0x817b20
// 00451e50  ff1558248000         call dword ptr [0x802458]
// 00451e56  8bcd                 mov ecx, ebp
// 00451e58  e873c51200           call 0x57e3d0
// 00451e5d  c745000c7b8100       mov dword ptr [ebp], 0x817b0c
// 00451e64  eb02                 jmp 0x451e68
// 00451e66  33ed                 xor ebp, ebp
// 00451e68  8d4c2410             lea ecx, [esp + 0x10]
// 00451e6c  51                   push ecx
// 00451e6d  8bcf                 mov ecx, edi
// 00451e6f  889c2480000000       mov byte ptr [esp + 0x80], bl
// 00451e76  896c2414             mov dword ptr [esp + 0x14], ebp
// 00451e7a  e821f5fcff           call 0x4213a0
// 00451e7f  6a1c                 push 0x1c
// 00451e81  e89aea2400           call 0x6a0920
// 00451e86  8be8                 mov ebp, eax
// 00451e88  83c404               add esp, 4
// 00451e8b  896c2418             mov dword ptr [esp + 0x18], ebp
// 00451e8f  c644247c0a           mov byte ptr [esp + 0x7c], 0xa
// 00451e94  85ed                 test ebp, ebp
// 00451e96  7430                 je 0x451ec8
// 00451e98  8b8e94000000         mov ecx, dword ptr [esi + 0x94]
// 00451e9e  e8cd8a0100           call 0x46a970
// 00451ea3  50                   push eax
// 00451ea4  83ec1c               sub esp, 0x1c
// 00451ea7  8bcc                 mov ecx, esp
// 00451ea9  89642434             mov dword ptr [esp + 0x34], esp
// 00451ead  68a87a8100           push 0x817aa8
// 00451eb2  ff1558248000         call dword ptr [0x802458]
// 00451eb8  8bcd                 mov ecx, ebp
// 00451eba  e811c51200           call 0x57e3d0
// 00451ebf  c74500947a8100       mov dword ptr [ebp], 0x817a94
// 00451ec6  eb02                 jmp 0x451eca
// 00451ec8  33ed                 xor ebp, ebp
// 00451eca  8d542410             lea edx, [esp + 0x10]
// 00451ece  52                   push edx
// 00451ecf  8bcf                 mov ecx, edi
// 00451ed1  889c2480000000       mov byte ptr [esp + 0x80], bl
// 00451ed8  896c2414             mov dword ptr [esp + 0x14], ebp
// 00451edc  e8bff4fcff           call 0x4213a0
// 00451ee1  6a1c                 push 0x1c
// 00451ee3  e838ea2400           call 0x6a0920
// 00451ee8  8be8                 mov ebp, eax
// 00451eea  83c404               add esp, 4
// 00451eed  896c2418             mov dword ptr [esp + 0x18], ebp
// 00451ef1  c644247c0b           mov byte ptr [esp + 0x7c], 0xb
// 00451ef6  85ed                 test ebp, ebp
// 00451ef8  7430                 je 0x451f2a
// 00451efa  8b8e94000000         mov ecx, dword ptr [esi + 0x94]
// 00451f00  e86b8a0100           call 0x46a970
// 00451f05  50                   push eax
// 00451f06  83ec1c               sub esp, 0x1c
// 00451f09  8bcc                 mov ecx, esp
// 00451f0b  89642434             mov dword ptr [esp + 0x34], esp
// 00451f0f  68d07a8100           push 0x817ad0
// 00451f14  ff1558248000         call dword ptr [0x802458]
// 00451f1a  8bcd                 mov ecx, ebp
// 00451f1c  e8afc41200           call 0x57e3d0
// 00451f21  c74500bc7a8100       mov dword ptr [ebp], 0x817abc
// 00451f28  eb02                 jmp 0x451f2c
// 00451f2a  33ed                 xor ebp, ebp
// 00451f2c  8d442410             lea eax, [esp + 0x10]
// 00451f30  50                   push eax
// 00451f31  8bcf                 mov ecx, edi
// 00451f33  889c2480000000       mov byte ptr [esp + 0x80], bl
// 00451f3a  896c2414             mov dword ptr [esp + 0x14], ebp
// 00451f3e  e85df4fcff           call 0x4213a0
// 00451f43  6a1c                 push 0x1c
// 00451f45  e8d6e92400           call 0x6a0920
// 00451f4a  8be8                 mov ebp, eax
// 00451f4c  83c404               add esp, 4
// 00451f4f  896c2418             mov dword ptr [esp + 0x18], ebp
// 00451f53  c644247c0c           mov byte ptr [esp + 0x7c], 0xc
// 00451f58  85ed                 test ebp, ebp
// 00451f5a  7430                 je 0x451f8c
// 00451f5c  8b8e94000000         mov ecx, dword ptr [esi + 0x94]
// 00451f62  e8098a0100           call 0x46a970
// 00451f67  50                   push eax
// 00451f68  83ec1c               sub esp, 0x1c
// 00451f6b  8bcc                 mov ecx, esp
// 00451f6d  89642434             mov dword ptr [esp + 0x34], esp
// 00451f71  68487b8100           push 0x817b48
// 00451f76  ff1558248000         call dword ptr [0x802458]
// 00451f7c  8bcd                 mov ecx, ebp
// 00451f7e  e84dc41200           call 0x57e3d0
// 00451f83  c74500347b8100       mov dword ptr [ebp], 0x817b34
// 00451f8a  eb02                 jmp 0x451f8e
// 00451f8c  33ed                 xor ebp, ebp
// 00451f8e  8d4c2410             lea ecx, [esp + 0x10]
// 00451f92  51                   push ecx
// 00451f93  8bcf                 mov ecx, edi
// 00451f95  889c2480000000       mov byte ptr [esp + 0x80], bl
// 00451f9c  896c2414             mov dword ptr [esp + 0x14], ebp
// 00451fa0  e8fbf3fcff           call 0x4213a0
// 00451fa5  6a1c                 push 0x1c
// 00451fa7  e874e92400           call 0x6a0920
// 00451fac  8be8                 mov ebp, eax
// 00451fae  83c404               add esp, 4
// 00451fb1  896c2418             mov dword ptr [esp + 0x18], ebp
// 00451fb5  c644247c0d           mov byte ptr [esp + 0x7c], 0xd
// 00451fba  85ed                 test ebp, ebp
// 00451fbc  7430                 je 0x451fee
// 00451fbe  8b8e94000000         mov ecx, dword ptr [esi + 0x94]
// 00451fc4  e8a7890100           call 0x46a970
// 00451fc9  50                   push eax
// 00451fca  83ec1c               sub esp, 0x1c
// 00451fcd  8bcc                 mov ecx, esp
// 00451fcf  89642434             mov dword ptr [esp + 0x34], esp
// 00451fd3  68707b8100           push 0x817b70
// 00451fd8  ff1558248000         call dword ptr [0x802458]
// 00451fde  8bcd                 mov ecx, ebp
// 00451fe0  e8ebc31200           call 0x57e3d0
// 00451fe5  c745005c7b8100       mov dword ptr [ebp], 0x817b5c
// 00451fec  eb02                 jmp 0x451ff0
// 00451fee  33ed                 xor ebp, ebp
// 00451ff0  8d542410             lea edx, [esp + 0x10]
// 00451ff4  52                   push edx
// 00451ff5  8bcf                 mov ecx, edi
// 00451ff7  889c2480000000       mov byte ptr [esp + 0x80], bl
// 00451ffe  896c2414             mov dword ptr [esp + 0x14], ebp
// 00452002  e899f3fcff           call 0x4213a0
// 00452007  6a1c                 push 0x1c
// 00452009  e812e92400           call 0x6a0920
// 0045200e  8be8                 mov ebp, eax
// 00452010  83c404               add esp, 4
// 00452013  896c2418             mov dword ptr [esp + 0x18], ebp
// 00452017  c644247c0e           mov byte ptr [esp + 0x7c], 0xe
// 0045201c  85ed                 test ebp, ebp
// 0045201e  7430                 je 0x452050
// 00452020  8b8e94000000         mov ecx, dword ptr [esi + 0x94]
// 00452026  e845890100           call 0x46a970
// 0045202b  50                   push eax
// 0045202c  83ec1c               sub esp, 0x1c
// 0045202f  8bcc                 mov ecx, esp
// 00452031  89642434             mov dword ptr [esp + 0x34], esp
// 00452035  68c47b8100           push 0x817bc4
// 0045203a  ff1558248000         call dword ptr [0x802458]
// 00452040  8bcd                 mov ecx, ebp
// 00452042  e889c31200           call 0x57e3d0
// 00452047  c74500b07b8100       mov dword ptr [ebp], 0x817bb0
// 0045204e  eb02                 jmp 0x452052
// 00452050  33ed                 xor ebp, ebp
// 00452052  8d442410             lea eax, [esp + 0x10]
// 00452056  50                   push eax
// 00452057  8bcf                 mov ecx, edi
// 00452059  889c2480000000       mov byte ptr [esp + 0x80], bl
// 00452060  896c2414             mov dword ptr [esp + 0x14], ebp
// 00452064  e837f3fcff           call 0x4213a0
// 00452069  6a1c                 push 0x1c
// 0045206b  e8b0e82400           call 0x6a0920
// 00452070  8be8                 mov ebp, eax
// 00452072  83c404               add esp, 4
// 00452075  896c2418             mov dword ptr [esp + 0x18], ebp
// 00452079  c644247c0f           mov byte ptr [esp + 0x7c], 0xf
// 0045207e  85ed                 test ebp, ebp
// 00452080  7430                 je 0x4520b2
// 00452082  8b8e94000000         mov ecx, dword ptr [esi + 0x94]
// 00452088  e8e3880100           call 0x46a970
// 0045208d  50                   push eax
// 0045208e  83ec1c               sub esp, 0x1c
// 00452091  8bcc                 mov ecx, esp
// 00452093  89642434             mov dword ptr [esp + 0x34], esp
// 00452097  68987b8100           push 0x817b98
// 0045209c  ff1558248000         call dword ptr [0x802458]
// 004520a2  8bcd                 mov ecx, ebp
// 004520a4  e827c31200           call 0x57e3d0
// 004520a9  c74500847b8100       mov dword ptr [ebp], 0x817b84
// 004520b0  eb02                 jmp 0x4520b4
// 004520b2  33ed                 xor ebp, ebp
// 004520b4  8d4c2410             lea ecx, [esp + 0x10]
// 004520b8  51                   push ecx
// 004520b9  8bcf                 mov ecx, edi
// 004520bb  889c2480000000       mov byte ptr [esp + 0x80], bl
// 004520c2  896c2414             mov dword ptr [esp + 0x14], ebp
// 004520c6  e8d5f2fcff           call 0x4213a0
// 004520cb  6a1c                 push 0x1c
// 004520cd  e84ee82400           call 0x6a0920
// 004520d2  8be8                 mov ebp, eax
// 004520d4  83c404               add esp, 4
// 004520d7  896c2418             mov dword ptr [esp + 0x18], ebp
// 004520db  c644247c10           mov byte ptr [esp + 0x7c], 0x10
// 004520e0  85ed                 test ebp, ebp
// 004520e2  7432                 je 0x452116
// 004520e4  8b8e94000000         mov ecx, dword ptr [esi + 0x94]
// 004520ea  e881880100           call 0x46a970
// 004520ef  50                   push eax
// 004520f0  83ec1c               sub esp, 0x1c
// 004520f3  8bcc                 mov ecx, esp
// 004520f5  89642434             mov dword ptr [esp + 0x34], esp
// 004520f9  68ec7b8100           push 0x817bec
// 004520fe  ff1558248000         call dword ptr [0x802458]
// 00452104  8bcd                 mov ecx, ebp
// 00452106  e8c5c21200           call 0x57e3d0
// 0045210b  c74500d87b8100       mov dword ptr [ebp], 0x817bd8
// 00452112  8bc5                 mov eax, ebp
// 00452114  eb02                 jmp 0x452118
// 00452116  33c0                 xor eax, eax
// 00452118  8d542410             lea edx, [esp + 0x10]
// 0045211c  52                   push edx
// 0045211d  8bcf                 mov ecx, edi
// 0045211f  889c2480000000       mov byte ptr [esp + 0x80], bl
// 00452126  89442414             mov dword ptr [esp + 0x14], eax
// 0045212a  e871f2fcff           call 0x4213a0
// 0045212f  8b8690000000         mov eax, dword ptr [esi + 0x90]
// 00452135  83c028               add eax, 0x28
// 00452138  50                   push eax
// 00452139  6820e10000           push 0xe120
// 0045213e  8bce                 mov ecx, esi
// 00452140  e8cbf8ffff           call 0x451a10
// 00452145  8b8690000000         mov eax, dword ptr [esi + 0x90]
// 0045214b  83c050               add eax, 0x50
// 0045214e  50                   push eax
// 0045214f  682ae10000           push 0xe12a
// 00452154  8bce                 mov ecx, esi
// 00452156  e8b5f8ffff           call 0x451a10
// 0045215b  8b8690000000         mov eax, dword ptr [esi + 0x90]
// 00452161  05fc000000           add eax, 0xfc
// 00452166  50                   push eax
// 00452167  6805800000           push 0x8005
// 0045216c  8bce                 mov ecx, esi
// 0045216e  e89df8ffff           call 0x451a10
// 00452173  8b8690000000         mov eax, dword ptr [esi + 0x90]
// 00452179  054c020000           add eax, 0x24c
// 0045217e  50                   push eax
// 0045217f  6811800000           push 0x8011
// 00452184  8bce                 mov ecx, esi
// 00452186  e885f8ffff           call 0x451a10
// 0045218b  8b8690000000         mov eax, dword ptr [esi + 0x90]
// 00452191  0528020000           add eax, 0x228
// 00452196  50                   push eax
// 00452197  6810800000           push 0x8010
// 0045219c  8bce                 mov ecx, esi
// 0045219e  e86df8ffff           call 0x451a10
// 004521a3  8b8690000000         mov eax, dword ptr [esi + 0x90]
// 004521a9  051c040000           add eax, 0x41c
// 004521ae  50                   push eax
// 004521af  68d8800000           push 0x80d8
// 004521b4  8bce                 mov ecx, esi
// 004521b6  e855f8ffff           call 0x451a10
// 004521bb  8b8690000000         mov eax, dword ptr [esi + 0x90]
// 004521c1  0500040000           add eax, 0x400
// 004521c6  50                   push eax
// 004521c7  68d4800000           push 0x80d4
// 004521cc  8bce                 mov ecx, esi
// 004521ce  e83df8ffff           call 0x451a10
// 004521d3  8b8690000000         mov eax, dword ptr [esi + 0x90]
// 004521d9  050c040000           add eax, 0x40c
// 004521de  50                   push eax
// 004521df  68d5800000           push 0x80d5
// 004521e4  8bce                 mov ecx, esi
// 004521e6  e825f8ffff           call 0x451a10
// 004521eb  68507e8100           push 0x817e50
// 004521f0  e89b201000           call 0x554290
// 004521f5  8be8                 mov ebp, eax
// 004521f7  83c404               add esp, 4
// 004521fa  8d442410             lea eax, [esp + 0x10]
// 004521fe  8d7e54               lea edi, [esi + 0x54]
// 00452201  50                   push eax
// 00452202  8bcf                 mov ecx, edi
// 00452204  c744241439800000     mov dword ptr [esp + 0x14], 0x8039
// 0045220c  e88f221100           call 0x5644a0
// 00452211  68487e8100           push 0x817e48
// 00452216  8928                 mov dword ptr [eax], ebp
// 00452218  e873201000           call 0x554290
// 0045221d  83c404               add esp, 4
// 00452220  8d4c2410             lea ecx, [esp + 0x10]
// 00452224  51                   push ecx
// 00452225  8bcf                 mov ecx, edi
// 00452227  8be8                 mov ebp, eax
// 00452229  c74424143a800000     mov dword ptr [esp + 0x14], 0x803a
// 00452231  e86a221100           call 0x5644a0
// 00452236  68387e8100           push 0x817e38
// 0045223b  8928                 mov dword ptr [eax], ebp
// 0045223d  e84e201000           call 0x554290
// 00452242  83c404               add esp, 4
// 00452245  8be8                 mov ebp, eax
// 00452247  c744241061800000     mov dword ptr [esp + 0x10], 0x8061
// 0045224f  8d542410             lea edx, [esp + 0x10]
// 00452253  52                   push edx
// 00452254  8bcf                 mov ecx, edi
// 00452256  e845221100           call 0x5644a0
// 0045225b  68287e8100           push 0x817e28
// 00452260  8928                 mov dword ptr [eax], ebp
// 00452262  e829201000           call 0x554290
// 00452267  8be8                 mov ebp, eax
// 00452269  83c404               add esp, 4
// 0045226c  8d442410             lea eax, [esp + 0x10]
// 00452270  50                   push eax
// 00452271  8bcf                 mov ecx, edi
// 00452273  c7442414a5800000     mov dword ptr [esp + 0x14], 0x80a5
// 0045227b  e820221100           call 0x5644a0
// 00452280  68187e8100           push 0x817e18
// 00452285  8928                 mov dword ptr [eax], ebp
// 00452287  e804201000           call 0x554290
// 0045228c  83c404               add esp, 4
// 0045228f  8d4c2410             lea ecx, [esp + 0x10]
// 00452293  51                   push ecx
// 00452294  8bcf                 mov ecx, edi
// 00452296  8be8                 mov ebp, eax
// 00452298  c744241443800000     mov dword ptr [esp + 0x14], 0x8043
// 004522a0  e8fb211100           call 0x5644a0
// 004522a5  68087e8100           push 0x817e08
// 004522aa  8928                 mov dword ptr [eax], ebp
// 004522ac  e8df1f1000           call 0x554290
// 004522b1  83c404               add esp, 4
// 004522b4  8d542410             lea edx, [esp + 0x10]
// 004522b8  52                   push edx
// 004522b9  8bcf                 mov ecx, edi
// 004522bb  8be8                 mov ebp, eax
// 004522bd  c744241444800000     mov dword ptr [esp + 0x14], 0x8044
// 004522c5  e8d6211100           call 0x5644a0
// 004522ca  68f47d8100           push 0x817df4
// 004522cf  8928                 mov dword ptr [eax], ebp
// 004522d1  e8ba1f1000           call 0x554290
// 004522d6  8be8                 mov ebp, eax
// 004522d8  83c404               add esp, 4
// 004522db  8d442410             lea eax, [esp + 0x10]
// 004522df  50                   push eax
// 004522e0  8bcf                 mov ecx, edi
// 004522e2  c744241457800000     mov dword ptr [esp + 0x14], 0x8057
// 004522ea  e8b1211100           call 0x5644a0
// 004522ef  68e07d8100           push 0x817de0
// 004522f4  8928                 mov dword ptr [eax], ebp
// 004522f6  e8951f1000           call 0x554290
// 004522fb  83c404               add esp, 4
// 004522fe  8d4c2410             lea ecx, [esp + 0x10]
// 00452302  51                   push ecx
// 00452303  8bcf                 mov ecx, edi
// 00452305  8be8                 mov ebp, eax
// 00452307  c744241459800000     mov dword ptr [esp + 0x14], 0x8059
// 0045230f  e88c211100           call 0x5644a0
// 00452314  68d07d8100           push 0x817dd0
// 00452319  8928                 mov dword ptr [eax], ebp
// 0045231b  e8701f1000           call 0x554290
// 00452320  83c404               add esp, 4
// 00452323  8d542410             lea edx, [esp + 0x10]
// 00452327  52                   push edx
// 00452328  8bcf                 mov ecx, edi
// 0045232a  8be8                 mov ebp, eax
// 0045232c  c744241458800000     mov dword ptr [esp + 0x14], 0x8058
// 00452334  e867211100           call 0x5644a0
// 00452339  8928                 mov dword ptr [eax], ebp
// 0045233b  8b8690000000         mov eax, dword ptr [esi + 0x90]
// 00452341  057c050000           add eax, 0x57c
// 00452346  50                   push eax
// 00452347  68aa800000           push 0x80aa
// 0045234c  8bce                 mov ecx, esi
// 0045234e  e8bdf6ffff           call 0x451a10
// 00452353  8b8690000000         mov eax, dword ptr [esi + 0x90]
// 00452359  0598050000           add eax, 0x598
// 0045235e  50                   push eax
// 0045235f  68ab800000           push 0x80ab
// 00452364  8bce                 mov ecx, esi
// 00452366  e8a5f6ffff           call 0x451a10
// 0045236b  6a28                 push 0x28
// 0045236d  e8aee52400           call 0x6a0920
// 00452372  83c404               add esp, 4
// 00452375  89442418             mov dword ptr [esp + 0x18], eax
// 00452379  c644247c11           mov byte ptr [esp + 0x7c], 0x11
// 0045237e  85c0                 test eax, eax
// 00452380  740e                 je 0x452390
// 00452382  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00452386  51                   push ecx
// 00452387  8bc8                 mov ecx, eax
// 00452389  e89215fcff           call 0x413920
// 0045238e  eb02                 jmp 0x452392
// 00452390  33c0                 xor eax, eax
// 00452392  50                   push eax
// 00452393  6823e10000           push 0xe123
// 00452398  8bce                 mov ecx, esi
// 0045239a  889c2484000000       mov byte ptr [esp + 0x84], bl
// 004523a1  e8baf6ffff           call 0x451a60
// 004523a6  6a24                 push 0x24
// 004523a8  e873e52400           call 0x6a0920
// 004523ad  83c404               add esp, 4
// 004523b0  89442418             mov dword ptr [esp + 0x18], eax
// 004523b4  c644247c12           mov byte ptr [esp + 0x7c], 0x12
// 004523b9  85c0                 test eax, eax
// 004523bb  740e                 je 0x4523cb
// 004523bd  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 004523c1  52                   push edx
// 004523c2  8bc8                 mov ecx, eax
// 004523c4  e86711fcff           call 0x413530
// 004523c9  eb02                 jmp 0x4523cd
// 004523cb  33c0                 xor eax, eax
// 004523cd  50                   push eax
// 004523ce  6822e10000           push 0xe122
// 004523d3  8bce                 mov ecx, esi
// 004523d5  889c2484000000       mov byte ptr [esp + 0x84], bl
// 004523dc  e87ff6ffff           call 0x451a60
// 004523e1  6a14                 push 0x14
// 004523e3  e838e52400           call 0x6a0920
// 004523e8  83c404               add esp, 4
// 004523eb  89442418             mov dword ptr [esp + 0x18], eax
// 004523ef  c644247c13           mov byte ptr [esp + 0x7c], 0x13
// 004523f4  85c0                 test eax, eax
// 004523f6  7410                 je 0x452408
// 004523f8  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004523fc  6a00                 push 0
// 004523fe  51                   push ecx
// 004523ff  8bc8                 mov ecx, eax
// 00452401  e8ca10fcff           call 0x4134d0
// 00452406  eb02                 jmp 0x45240a
// 00452408  33c0                 xor eax, eax
// 0045240a  50                   push eax
// 0045240b  6825e10000           push 0xe125
// 00452410  8bce                 mov ecx, esi
// 00452412  889c2484000000       mov byte ptr [esp + 0x84], bl
// 00452419  e842f6ffff           call 0x451a60
// 0045241e  6a14                 push 0x14
// 00452420  e8fbe42400           call 0x6a0920
// 00452425  83c404               add esp, 4
// 00452428  89442418             mov dword ptr [esp + 0x18], eax
// 0045242c  c644247c14           mov byte ptr [esp + 0x7c], 0x14
// 00452431  85c0                 test eax, eax
// 00452433  7410                 je 0x452445
// 00452435  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00452439  6a01                 push 1
// 0045243b  52                   push edx
// 0045243c  8bc8                 mov ecx, eax
// 0045243e  e88d10fcff           call 0x4134d0
// 00452443  eb02                 jmp 0x452447
// 00452445  33c0                 xor eax, eax
// 00452447  50                   push eax
// 00452448  68f7800000           push 0x80f7
// 0045244d  8bce                 mov ecx, esi
// 0045244f  889c2484000000       mov byte ptr [esp + 0x84], bl
// 00452456  e805f6ffff           call 0x451a60
// 0045245b  6a24                 push 0x24
// 0045245d  e8bee42400           call 0x6a0920
// 00452462  83c404               add esp, 4
// 00452465  89442418             mov dword ptr [esp + 0x18], eax
// 00452469  c644247c15           mov byte ptr [esp + 0x7c], 0x15
// 0045246e  85c0                 test eax, eax
// 00452470  7413                 je 0x452485
// 00452472  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00452476  68c47d8100           push 0x817dc4
// 0045247b  51                   push ecx
// 0045247c  8bc8                 mov ecx, eax
// 0045247e  e8ddb8fcff           call 0x41dd60
// 00452483  eb02                 jmp 0x452487
// 00452485  33c0                 xor eax, eax
// 00452487  50                   push eax
// 00452488  6862800000           push 0x8062
// 0045248d  8bce                 mov ecx, esi
// 0045248f  889c2484000000       mov byte ptr [esp + 0x84], bl
// 00452496  e8c5f5ffff           call 0x451a60
// 0045249b  6a24                 push 0x24
// 0045249d  e87ee42400           call 0x6a0920
// 004524a2  8be8                 mov ebp, eax
// 004524a4  83c404               add esp, 4
// 004524a7  896c2418             mov dword ptr [esp + 0x18], ebp
// 004524ab  c644247c16           mov byte ptr [esp + 0x7c], 0x16
// 004524b0  85ed                 test ebp, ebp
// 004524b2  741a                 je 0x4524ce
// 004524b4  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 004524b8  683c738100           push 0x81733c
// 004524bd  52                   push edx
// 004524be  8bcd                 mov ecx, ebp
// 004524c0  e89bb8fcff           call 0x41dd60
// 004524c5  c7450024738100       mov dword ptr [ebp], 0x817324
// 004524cc  eb02                 jmp 0x4524d0
// 004524ce  33ed                 xor ebp, ebp
// 004524d0  55                   push ebp
// 004524d1  68ee800000           push 0x80ee
// 004524d6  8bce                 mov ecx, esi
// 004524d8  889c2484000000       mov byte ptr [esp + 0x84], bl
// 004524df  e87cf5ffff           call 0x451a60
// 004524e4  6a1c                 push 0x1c
// 004524e6  e835e42400           call 0x6a0920
// 004524eb  83c404               add esp, 4
// 004524ee  89442418             mov dword ptr [esp + 0x18], eax
// 004524f2  c644247c17           mov byte ptr [esp + 0x7c], 0x17
// 004524f7  85c0                 test eax, eax
// 004524f9  740e                 je 0x452509
// 004524fb  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004524ff  51                   push ecx
// 00452500  8bc8                 mov ecx, eax
// 00452502  e8d9cdfcff           call 0x41f2e0
// 00452507  eb02                 jmp 0x45250b
// 00452509  33c0                 xor eax, eax
// 0045250b  50                   push eax
// 0045250c  687f800000           push 0x807f
// 00452511  8bce                 mov ecx, esi
// 00452513  889c2484000000       mov byte ptr [esp + 0x84], bl
// 0045251a  e841f5ffff           call 0x451a60
// 0045251f  6a1c                 push 0x1c
// 00452521  e8fae32400           call 0x6a0920
// 00452526  83c404               add esp, 4
// 00452529  89442418             mov dword ptr [esp + 0x18], eax
// 0045252d  c644247c18           mov byte ptr [esp + 0x7c], 0x18
// 00452532  85c0                 test eax, eax
// 00452534  740e                 je 0x452544
// 00452536  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0045253a  52                   push edx
// 0045253b  8bc8                 mov ecx, eax
// 0045253d  e8cecdfcff           call 0x41f310
// 00452542  eb02                 jmp 0x452546
// 00452544  33c0                 xor eax, eax
// 00452546  50                   push eax
// 00452547  6807810000           push 0x8107
// 0045254c  8bce                 mov ecx, esi
// 0045254e  889c2484000000       mov byte ptr [esp + 0x84], bl
// 00452555  e806f5ffff           call 0x451a60
// 0045255a  8b8690000000         mov eax, dword ptr [esi + 0x90]
// 00452560  056c030000           add eax, 0x36c
// 00452565  50                   push eax
// 00452566  680d800000           push 0x800d
// 0045256b  8bce                 mov ecx, esi
// 0045256d  e89ef4ffff           call 0x451a10
// 00452572  8b8690000000         mov eax, dword ptr [esi + 0x90]
// 00452578  057c030000           add eax, 0x37c
// 0045257d  50                   push eax
// 0045257e  680e800000           push 0x800e
// 00452583  8bce                 mov ecx, esi
// 00452585  e886f4ffff           call 0x451a10
// 0045258a  68bc158100           push 0x8115bc
// 0045258f  e8fc1c1000           call 0x554290
// 00452594  8be8                 mov ebp, eax
// 00452596  83c404               add esp, 4
// 00452599  8d442410             lea eax, [esp + 0x10]
// 0045259d  50                   push eax
// 0045259e  8bcf                 mov ecx, edi
// 004525a0  c744241440800000     mov dword ptr [esp + 0x14], 0x8040
// 004525a8  e8f31e1100           call 0x5644a0
// 004525ad  68b87d8100           push 0x817db8
// 004525b2  8928                 mov dword ptr [eax], ebp
// 004525b4  e8d71c1000           call 0x554290
// 004525b9  83c404               add esp, 4
// 004525bc  8d4c2410             lea ecx, [esp + 0x10]
// 004525c0  51                   push ecx
// 004525c1  8bcf                 mov ecx, edi
// 004525c3  8be8                 mov ebp, eax
// 004525c5  c744241441800000     mov dword ptr [esp + 0x14], 0x8041
// 004525cd  e8ce1e1100           call 0x5644a0
// 004525d2  8928                 mov dword ptr [eax], ebp
// 004525d4  8b8690000000         mov eax, dword ptr [esi + 0x90]
// 004525da  052c040000           add eax, 0x42c
// 004525df  50                   push eax
// 004525e0  6863800000           push 0x8063
// 004525e5  8bce                 mov ecx, esi
// 004525e7  e824f4ffff           call 0x451a10
// 004525ec  8b8690000000         mov eax, dword ptr [esi + 0x90]
// 004525f2  0548040000           add eax, 0x448
// 004525f7  50                   push eax
// 004525f8  6865800000           push 0x8065
// 004525fd  8bce                 mov ecx, esi
// 004525ff  e80cf4ffff           call 0x451a10
// 00452604  8b8690000000         mov eax, dword ptr [esi + 0x90]
// 0045260a  0564040000           add eax, 0x464
// 0045260f  50                   push eax
// 00452610  6867800000           push 0x8067
// 00452615  8bce                 mov ecx, esi
// 00452617  e8f4f3ffff           call 0x451a10
// 0045261c  8b8690000000         mov eax, dword ptr [esi + 0x90]
// 00452622  05d0050000           add eax, 0x5d0
// 00452627  50                   push eax
// 00452628  6873800000           push 0x8073
// 0045262d  8bce                 mov ecx, esi
// 0045262f  e8dcf3ffff           call 0x451a10
// 00452634  8b8690000000         mov eax, dword ptr [esi + 0x90]
// 0045263a  05b4050000           add eax, 0x5b4
// 0045263f  50                   push eax
// 00452640  6874800000           push 0x8074
// 00452645  8bce                 mov ecx, esi
// 00452647  e8c4f3ffff           call 0x451a10
// 0045264c  8b8690000000         mov eax, dword ptr [esi + 0x90]
// 00452652  059c040000           add eax, 0x49c
// 00452657  50                   push eax
// 00452658  6877800000           push 0x8077
// 0045265d  8bce                 mov ecx, esi
// 0045265f  e8acf3ffff           call 0x451a10
// 00452664  8b8690000000         mov eax, dword ptr [esi + 0x90]
// 0045266a  0580040000           add eax, 0x480
// 0045266f  50                   push eax
// 00452670  6878800000           push 0x8078
// 00452675  8bce                 mov ecx, esi
// 00452677  e894f3ffff           call 0x451a10
// 0045267c  8b8690000000         mov eax, dword ptr [esi + 0x90]
// 00452682  05b8040000           add eax, 0x4b8
// 00452687  50                   push eax
// 00452688  6879800000           push 0x8079
// 0045268d  8bce                 mov ecx, esi
// 0045268f  e87cf3ffff           call 0x451a10
// 00452694  8b8690000000         mov eax, dword ptr [esi + 0x90]
// 0045269a  05d4040000           add eax, 0x4d4
// 0045269f  50                   push eax
// 004526a0  68a7800000           push 0x80a7
// 004526a5  8bce                 mov ecx, esi
// 004526a7  e864f3ffff           call 0x451a10
// 004526ac  8b8690000000         mov eax, dword ptr [esi + 0x90]
// 004526b2  05f0040000           add eax, 0x4f0
// 004526b7  50                   push eax
// 004526b8  68a8800000           push 0x80a8
// 004526bd  8bce                 mov ecx, esi
// 004526bf  e84cf3ffff           call 0x451a10
// 004526c4  8b8690000000         mov eax, dword ptr [esi + 0x90]
// 004526ca  0528050000           add eax, 0x528
// 004526cf  50                   push eax
// 004526d0  687b800000           push 0x807b
// 004526d5  8bce                 mov ecx, esi
// 004526d7  e834f3ffff           call 0x451a10
// 004526dc  8b8690000000         mov eax, dword ptr [esi + 0x90]
// 004526e2  050c050000           add eax, 0x50c
// 004526e7  50                   push eax
// 004526e8  687c800000           push 0x807c
// 004526ed  8bce                 mov ecx, esi
// 004526ef  e81cf3ffff           call 0x451a10
// 004526f4  8d4c2424             lea ecx, [esp + 0x24]
// 004526f8  c644247c01           mov byte ptr [esp + 0x7c], 1
// 004526fd  e8be4c1200           call 0x5773c0
// 00452702  8b442420             mov eax, dword ptr [esp + 0x20]
// 00452706  c744247cffffffff     mov dword ptr [esp + 0x7c], 0xffffffff
// 0045270e  85c0                 test eax, eax
// 00452710  742c                 je 0x45273e
// 00452712  8bf0                 mov esi, eax
// 00452714  83c004               add eax, 4
// 00452717  83caff               or edx, 0xffffffff
// 0045271a  f00fc110             lock xadd dword ptr [eax], edx
// 0045271e  751e                 jne 0x45273e
// 00452720  8b06                 mov eax, dword ptr [esi]
// 00452722  8b5004               mov edx, dword ptr [eax + 4]
// 00452725  8bce                 mov ecx, esi
// 00452727  ffd2                 call edx
// 00452729  8d4608               lea eax, [esi + 8]
// 0045272c  83c9ff               or ecx, 0xffffffff
// 0045272f  f00fc108             lock xadd dword ptr [eax], ecx
// 00452733  7509                 jne 0x45273e
// 00452735  8b16                 mov edx, dword ptr [esi]
// 00452737  8b4208               mov eax, dword ptr [edx + 8]
// 0045273a  8bce                 mov ecx, esi
// 0045273c  ffd0                 call eax
// 0045273e  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 00452742  5f                   pop edi
// 00452743  5e                   pop esi
// 00452744  5d                   pop ebp
// 00452745  64890d00000000       mov dword ptr fs:[0], ecx
// 0045274c  5b                   pop ebx
// 0045274d  83c470               add esp, 0x70
// 00452750  c3                   ret 
// 00452751  689c7d8100           push 0x817d9c
// 00452756  8d4c2434             lea ecx, [esp + 0x34]
// 0045275a  ff1558248000         call dword ptr [0x802458]
// 00452760  8d4c2430             lea ecx, [esp + 0x30]
// 00452764  51                   push ecx
// 00452765  8d4c2450             lea ecx, [esp + 0x50]
// 00452769  89ac2480000000       mov dword ptr [esp + 0x80], ebp
// 00452770  e8db75fbff           call 0x409d50
// 00452775  68c81b8d00           push 0x8d1bc8
// 0045277a  8d542450             lea edx, [esp + 0x50]
// 0045277e  52                   push edx
// 0045277f  e808ee2400           call 0x6a158c

void func_00451b60()
{
}
