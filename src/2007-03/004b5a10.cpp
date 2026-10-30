// from server: 100% by auto
// roc 2007-03 004b5a10  unit: seg_004b0000  size: 1284 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004b5a10
//
// 004b5a10  81eca0000000         sub esp, 0xa0
// 004b5a16  56                   push esi
// 004b5a17  57                   push edi
// 004b5a18  8bbc24ac000000       mov edi, dword ptr [esp + 0xac]
// 004b5a1f  33f6                 xor esi, esi
// 004b5a21  0fb786b0e07900       movzx eax, word ptr [esi + 0x79e0b0]
// 004b5a28  8d4c2438             lea ecx, [esp + 0x38]
// 004b5a2c  51                   push ecx
// 004b5a2d  8bd1                 mov edx, ecx
// 004b5a2f  8944243c             mov dword ptr [esp + 0x3c], eax
// 004b5a33  33c0                 xor eax, eax
// 004b5a35  52                   push edx
// 004b5a36  57                   push edi
// 004b5a37  89442448             mov dword ptr [esp + 0x48], eax
// 004b5a3b  8944244c             mov dword ptr [esp + 0x4c], eax
// 004b5a3f  89442450             mov dword ptr [esp + 0x50], eax
// 004b5a43  83c602               add esi, 2
// 004b5a46  e815b8ffff           call 0x4b1260
// 004b5a4b  83c40c               add esp, 0xc
// 004b5a4e  33c0                 xor eax, eax
// 004b5a50  837c843800           cmp dword ptr [esp + eax*4 + 0x38], 0
// 004b5a55  7513                 jne 0x4b5a6a
// 004b5a57  83c001               add eax, 1
// 004b5a5a  83f804               cmp eax, 4
// 004b5a5d  72f1                 jb 0x4b5a50
// 004b5a5f  5f                   pop edi
// 004b5a60  32c0                 xor al, al
// 004b5a62  5e                   pop esi
// 004b5a63  81c4a0000000         add esp, 0xa0
// 004b5a69  c3                   ret 
// 004b5a6a  83c602               add esi, 2
// 004b5a6d  81fe00020000         cmp esi, 0x200
// 004b5a73  72ac                 jb 0x4b5a21
// 004b5a75  8b07                 mov eax, dword ptr [edi]
// 004b5a77  8b4f04               mov ecx, dword ptr [edi + 4]
// 004b5a7a  8b5708               mov edx, dword ptr [edi + 8]
// 004b5a7d  89442408             mov dword ptr [esp + 8], eax
// 004b5a81  8b470c               mov eax, dword ptr [edi + 0xc]
// 004b5a84  894c240c             mov dword ptr [esp + 0xc], ecx
// 004b5a88  89542410             mov dword ptr [esp + 0x10], edx
// 004b5a8c  89442414             mov dword ptr [esp + 0x14], eax
// 004b5a90  33c9                 xor ecx, ecx
// 004b5a92  8b448c08             mov eax, dword ptr [esp + ecx*4 + 8]
// 004b5a96  85c0                 test eax, eax
// 004b5a98  8d50ff               lea edx, [eax - 1]
// 004b5a9b  89548c08             mov dword ptr [esp + ecx*4 + 8], edx
// 004b5a9f  7508                 jne 0x4b5aa9
// 004b5aa1  83c101               add ecx, 1
// 004b5aa4  83f904               cmp ecx, 4
// 004b5aa7  72e9                 jb 0x4b5a92
// 004b5aa9  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004b5aad  8b542410             mov edx, dword ptr [esp + 0x10]
// 004b5ab1  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 004b5ab5  53                   push ebx
// 004b5ab6  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 004b5aba  55                   push ebp
// 004b5abb  33ed                 xor ebp, ebp
// 004b5abd  f6c301               test bl, 1
// 004b5ac0  895c2430             mov dword ptr [esp + 0x30], ebx
// 004b5ac4  89742434             mov dword ptr [esp + 0x34], esi
// 004b5ac8  89542438             mov dword ptr [esp + 0x38], edx
// 004b5acc  897c243c             mov dword ptr [esp + 0x3c], edi
// 004b5ad0  7535                 jne 0x4b5b07
// 004b5ad2  8bc7                 mov eax, edi
// 004b5ad4  c1e01f               shl eax, 0x1f
// 004b5ad7  8bca                 mov ecx, edx
// 004b5ad9  d1ea                 shr edx, 1
// 004b5adb  0bd0                 or edx, eax
// 004b5add  8bc6                 mov eax, esi
// 004b5adf  c1e01f               shl eax, 0x1f
// 004b5ae2  d1eb                 shr ebx, 1
// 004b5ae4  c1e11f               shl ecx, 0x1f
// 004b5ae7  d1ee                 shr esi, 1
// 004b5ae9  0bd8                 or ebx, eax
// 004b5aeb  d1ef                 shr edi, 1
// 004b5aed  0bf1                 or esi, ecx
// 004b5aef  83c501               add ebp, 1
// 004b5af2  f6c301               test bl, 1
// 004b5af5  74db                 je 0x4b5ad2
// 004b5af7  895c2430             mov dword ptr [esp + 0x30], ebx
// 004b5afb  89742434             mov dword ptr [esp + 0x34], esi
// 004b5aff  89542438             mov dword ptr [esp + 0x38], edx
// 004b5b03  897c243c             mov dword ptr [esp + 0x3c], edi
// 004b5b07  8b9c24b4000000       mov ebx, dword ptr [esp + 0xb4]
// 004b5b0e  8b4b04               mov ecx, dword ptr [ebx + 4]
// 004b5b11  8b5308               mov edx, dword ptr [ebx + 8]
// 004b5b14  33c0                 xor eax, eax
// 004b5b16  89442454             mov dword ptr [esp + 0x54], eax
// 004b5b1a  89442458             mov dword ptr [esp + 0x58], eax
// 004b5b1e  8944245c             mov dword ptr [esp + 0x5c], eax
// 004b5b22  8b03                 mov eax, dword ptr [ebx]
// 004b5b24  89442460             mov dword ptr [esp + 0x60], eax
// 004b5b28  8b430c               mov eax, dword ptr [ebx + 0xc]
// 004b5b2b  8944246c             mov dword ptr [esp + 0x6c], eax
// 004b5b2f  33c0                 xor eax, eax
// 004b5b31  398424b8000000       cmp dword ptr [esp + 0xb8], eax
// 004b5b38  c744245001000000     mov dword ptr [esp + 0x50], 1
// 004b5b40  894c2464             mov dword ptr [esp + 0x64], ecx
// 004b5b44  89542468             mov dword ptr [esp + 0x68], edx
// 004b5b48  89442470             mov dword ptr [esp + 0x70], eax
// 004b5b4c  89442474             mov dword ptr [esp + 0x74], eax
// 004b5b50  89442478             mov dword ptr [esp + 0x78], eax
// 004b5b54  8944247c             mov dword ptr [esp + 0x7c], eax
// 004b5b58  0f849c030000         je 0x4b5efa
// 004b5b5e  8bff                 mov edi, edi
// 004b5b60  83ac24b800000001     sub dword ptr [esp + 0xb8], 1
// 004b5b68  33f6                 xor esi, esi
// 004b5b6a  8d9b00000000         lea ebx, [ebx]
// 004b5b70  e8ab3d0000           call 0x4b9920
// 004b5b75  8984b480000000       mov dword ptr [esp + esi*4 + 0x80], eax
// 004b5b7c  83c601               add esi, 1
// 004b5b7f  83fe04               cmp esi, 4
// 004b5b82  7cec                 jl 0x4b5b70
// 004b5b84  8d8c2480000000       lea ecx, [esp + 0x80]
// 004b5b8b  51                   push ecx
// 004b5b8c  8d542414             lea edx, [esp + 0x14]
// 004b5b90  52                   push edx
// 004b5b91  8bc1                 mov eax, ecx
// 004b5b93  50                   push eax
// 004b5b94  e8c7b6ffff           call 0x4b1260
// 004b5b99  8d4c242c             lea ecx, [esp + 0x2c]
// 004b5b9d  51                   push ecx
// 004b5b9e  53                   push ebx
// 004b5b9f  8d542444             lea edx, [esp + 0x44]
// 004b5ba3  52                   push edx
// 004b5ba4  8d842498000000       lea eax, [esp + 0x98]
// 004b5bab  50                   push eax
// 004b5bac  e8bfd4ffff           call 0x4b3070
// 004b5bb1  83c41c               add esp, 0x1c
// 004b5bb4  b810000000           mov eax, 0x10
// 004b5bb9  8d4c2450             lea ecx, [esp + 0x50]
// 004b5bbd  8d542420             lea edx, [esp + 0x20]
// 004b5bc1  8b32                 mov esi, dword ptr [edx]
// 004b5bc3  3b31                 cmp esi, dword ptr [ecx]
// 004b5bc5  7512                 jne 0x4b5bd9
// 004b5bc7  83e804               sub eax, 4
// 004b5bca  83c104               add ecx, 4
// 004b5bcd  83c204               add edx, 4
// 004b5bd0  83f804               cmp eax, 4
// 004b5bd3  73ec                 jae 0x4b5bc1
// 004b5bd5  85c0                 test eax, eax
// 004b5bd7  745d                 je 0x4b5c36
// 004b5bd9  0fb632               movzx esi, byte ptr [edx]
// 004b5bdc  0fb639               movzx edi, byte ptr [ecx]
// 004b5bdf  2bf7                 sub esi, edi
// 004b5be1  7545                 jne 0x4b5c28
// 004b5be3  83e801               sub eax, 1
// 004b5be6  83c101               add ecx, 1
// 004b5be9  83c201               add edx, 1
// 004b5bec  85c0                 test eax, eax
// 004b5bee  7446                 je 0x4b5c36
// 004b5bf0  0fb632               movzx esi, byte ptr [edx]
// 004b5bf3  0fb639               movzx edi, byte ptr [ecx]
// 004b5bf6  2bf7                 sub esi, edi
// 004b5bf8  752e                 jne 0x4b5c28
// 004b5bfa  83e801               sub eax, 1
// 004b5bfd  83c101               add ecx, 1
// 004b5c00  83c201               add edx, 1
// 004b5c03  85c0                 test eax, eax
// 004b5c05  742f                 je 0x4b5c36
// 004b5c07  0fb632               movzx esi, byte ptr [edx]
// 004b5c0a  0fb639               movzx edi, byte ptr [ecx]
// 004b5c0d  2bf7                 sub esi, edi
// 004b5c0f  7517                 jne 0x4b5c28
// 004b5c11  83e801               sub eax, 1
// 004b5c14  83c101               add ecx, 1
// 004b5c17  83c201               add edx, 1
// 004b5c1a  85c0                 test eax, eax
// 004b5c1c  7418                 je 0x4b5c36
// 004b5c1e  0fb632               movzx esi, byte ptr [edx]
// 004b5c21  0fb609               movzx ecx, byte ptr [ecx]
// 004b5c24  2bf1                 sub esi, ecx
// 004b5c26  740e                 je 0x4b5c36
// 004b5c28  85f6                 test esi, esi
// 004b5c2a  b801000000           mov eax, 1
// 004b5c2f  7f07                 jg 0x4b5c38
// 004b5c31  83c8ff               or eax, 0xffffffff
// 004b5c34  eb02                 jmp 0x4b5c38
// 004b5c36  33c0                 xor eax, eax
// 004b5c38  85c0                 test eax, eax
// 004b5c3a  0f84ac020000         je 0x4b5eec
// 004b5c40  b810000000           mov eax, 0x10
// 004b5c45  8d4c2410             lea ecx, [esp + 0x10]
// 004b5c49  8d542420             lea edx, [esp + 0x20]
// 004b5c4d  8d4900               lea ecx, [ecx]
// 004b5c50  8b32                 mov esi, dword ptr [edx]
// 004b5c52  3b31                 cmp esi, dword ptr [ecx]
// 004b5c54  7512                 jne 0x4b5c68
// 004b5c56  83e804               sub eax, 4
// 004b5c59  83c104               add ecx, 4
// 004b5c5c  83c204               add edx, 4
// 004b5c5f  83f804               cmp eax, 4
// 004b5c62  73ec                 jae 0x4b5c50
// 004b5c64  85c0                 test eax, eax
// 004b5c66  745d                 je 0x4b5cc5
// 004b5c68  0fb632               movzx esi, byte ptr [edx]
// 004b5c6b  0fb639               movzx edi, byte ptr [ecx]
// 004b5c6e  2bf7                 sub esi, edi
// 004b5c70  7545                 jne 0x4b5cb7
// 004b5c72  83e801               sub eax, 1
// 004b5c75  83c101               add ecx, 1
// 004b5c78  83c201               add edx, 1
// 004b5c7b  85c0                 test eax, eax
// 004b5c7d  7446                 je 0x4b5cc5
// 004b5c7f  0fb632               movzx esi, byte ptr [edx]
// 004b5c82  0fb639               movzx edi, byte ptr [ecx]
// 004b5c85  2bf7                 sub esi, edi
// 004b5c87  752e                 jne 0x4b5cb7
// 004b5c89  83e801               sub eax, 1
// 004b5c8c  83c101               add ecx, 1
// 004b5c8f  83c201               add edx, 1
// 004b5c92  85c0                 test eax, eax
// 004b5c94  742f                 je 0x4b5cc5
// 004b5c96  0fb632               movzx esi, byte ptr [edx]
// 004b5c99  0fb639               movzx edi, byte ptr [ecx]
// 004b5c9c  2bf7                 sub esi, edi
// 004b5c9e  7517                 jne 0x4b5cb7
// 004b5ca0  83e801               sub eax, 1
// 004b5ca3  83c101               add ecx, 1
// 004b5ca6  83c201               add edx, 1
// 004b5ca9  85c0                 test eax, eax
// 004b5cab  7418                 je 0x4b5cc5
// 004b5cad  0fb632               movzx esi, byte ptr [edx]
// 004b5cb0  0fb611               movzx edx, byte ptr [ecx]
// 004b5cb3  2bf2                 sub esi, edx
// 004b5cb5  740e                 je 0x4b5cc5
// 004b5cb7  85f6                 test esi, esi
// 004b5cb9  b801000000           mov eax, 1
// 004b5cbe  7f07                 jg 0x4b5cc7
// 004b5cc0  83c8ff               or eax, 0xffffffff
// 004b5cc3  eb02                 jmp 0x4b5cc7
// 004b5cc5  33c0                 xor eax, eax
// 004b5cc7  85c0                 test eax, eax
// 004b5cc9  0f841d020000         je 0x4b5eec
// 004b5ccf  83fd01               cmp ebp, 1
// 004b5cd2  8bfd                 mov edi, ebp
// 004b5cd4  0f868a010000         jbe 0x4b5e64
// 004b5cda  8d9b00000000         lea ebx, [ebx]
// 004b5ce0  83ef01               sub edi, 1
// 004b5ce3  b810000000           mov eax, 0x10
// 004b5ce8  8d4c2410             lea ecx, [esp + 0x10]
// 004b5cec  8d542420             lea edx, [esp + 0x20]
// 004b5cf0  8b32                 mov esi, dword ptr [edx]
// 004b5cf2  3b31                 cmp esi, dword ptr [ecx]
// 004b5cf4  7512                 jne 0x4b5d08
// 004b5cf6  83e804               sub eax, 4
// 004b5cf9  83c104               add ecx, 4
// 004b5cfc  83c204               add edx, 4
// 004b5cff  83f804               cmp eax, 4
// 004b5d02  73ec                 jae 0x4b5cf0
// 004b5d04  85c0                 test eax, eax
// 004b5d06  745d                 je 0x4b5d65
// 004b5d08  0fb632               movzx esi, byte ptr [edx]
// 004b5d0b  0fb619               movzx ebx, byte ptr [ecx]
// 004b5d0e  2bf3                 sub esi, ebx
// 004b5d10  7545                 jne 0x4b5d57
// 004b5d12  83e801               sub eax, 1
// 004b5d15  83c101               add ecx, 1
// 004b5d18  83c201               add edx, 1
// 004b5d1b  85c0                 test eax, eax
// 004b5d1d  7446                 je 0x4b5d65
// 004b5d1f  0fb632               movzx esi, byte ptr [edx]
// 004b5d22  0fb619               movzx ebx, byte ptr [ecx]
// 004b5d25  2bf3                 sub esi, ebx
// 004b5d27  752e                 jne 0x4b5d57
// 004b5d29  83e801               sub eax, 1
// 004b5d2c  83c101               add ecx, 1
// 004b5d2f  83c201               add edx, 1
// 004b5d32  85c0                 test eax, eax
// 004b5d34  742f                 je 0x4b5d65
// 004b5d36  0fb632               movzx esi, byte ptr [edx]
// 004b5d39  0fb619               movzx ebx, byte ptr [ecx]
// 004b5d3c  2bf3                 sub esi, ebx
// 004b5d3e  7517                 jne 0x4b5d57
// 004b5d40  83e801               sub eax, 1
// 004b5d43  83c101               add ecx, 1
// 004b5d46  83c201               add edx, 1
// 004b5d49  85c0                 test eax, eax
// 004b5d4b  7418                 je 0x4b5d65
// 004b5d4d  0fb632               movzx esi, byte ptr [edx]
// 004b5d50  0fb601               movzx eax, byte ptr [ecx]
// 004b5d53  2bf0                 sub esi, eax
// 004b5d55  740e                 je 0x4b5d65
// 004b5d57  85f6                 test esi, esi
// 004b5d59  b801000000           mov eax, 1
// 004b5d5e  7f07                 jg 0x4b5d67
// 004b5d60  83c8ff               or eax, 0xffffffff
// 004b5d63  eb02                 jmp 0x4b5d67
// 004b5d65  33c0                 xor eax, eax
// 004b5d67  85c0                 test eax, eax
// 004b5d69  0f84ee000000         je 0x4b5e5d
// 004b5d6f  8d8c2490000000       lea ecx, [esp + 0x90]
// 004b5d76  51                   push ecx
// 004b5d77  8d542424             lea edx, [esp + 0x24]
// 004b5d7b  52                   push edx
// 004b5d7c  8bc2                 mov eax, edx
// 004b5d7e  50                   push eax
// 004b5d7f  e8aca0ffff           call 0x4afe30
// 004b5d84  8d8c249c000000       lea ecx, [esp + 0x9c]
// 004b5d8b  51                   push ecx
// 004b5d8c  8d542470             lea edx, [esp + 0x70]
// 004b5d90  52                   push edx
// 004b5d91  8bc1                 mov eax, ecx
// 004b5d93  50                   push eax
// 004b5d94  e837a6ffff           call 0x4b03d0
// 004b5d99  8b8c24a8000000       mov ecx, dword ptr [esp + 0xa8]
// 004b5da0  8b9424ac000000       mov edx, dword ptr [esp + 0xac]
// 004b5da7  8b8424b0000000       mov eax, dword ptr [esp + 0xb0]
// 004b5dae  894c2438             mov dword ptr [esp + 0x38], ecx
// 004b5db2  8b8c24b4000000       mov ecx, dword ptr [esp + 0xb4]
// 004b5db9  8954243c             mov dword ptr [esp + 0x3c], edx
// 004b5dbd  89442440             mov dword ptr [esp + 0x40], eax
// 004b5dc1  894c2444             mov dword ptr [esp + 0x44], ecx
// 004b5dc5  83c418               add esp, 0x18
// 004b5dc8  b810000000           mov eax, 0x10
// 004b5dcd  8d4c2450             lea ecx, [esp + 0x50]
// 004b5dd1  8d542420             lea edx, [esp + 0x20]
// 004b5dd5  8b32                 mov esi, dword ptr [edx]
// 004b5dd7  3b31                 cmp esi, dword ptr [ecx]
// 004b5dd9  7512                 jne 0x4b5ded
// 004b5ddb  83e804               sub eax, 4
// 004b5dde  83c104               add ecx, 4
// 004b5de1  83c204               add edx, 4
// 004b5de4  83f804               cmp eax, 4
// 004b5de7  73ec                 jae 0x4b5dd5
// 004b5de9  85c0                 test eax, eax
// 004b5deb  745d                 je 0x4b5e4a
// 004b5ded  0fb632               movzx esi, byte ptr [edx]
// 004b5df0  0fb619               movzx ebx, byte ptr [ecx]
// 004b5df3  2bf3                 sub esi, ebx
// 004b5df5  7545                 jne 0x4b5e3c
// 004b5df7  83e801               sub eax, 1
// 004b5dfa  83c101               add ecx, 1
// 004b5dfd  83c201               add edx, 1
// 004b5e00  85c0                 test eax, eax
// 004b5e02  7446                 je 0x4b5e4a
// 004b5e04  0fb632               movzx esi, byte ptr [edx]
// 004b5e07  0fb619               movzx ebx, byte ptr [ecx]
// 004b5e0a  2bf3                 sub esi, ebx
// 004b5e0c  752e                 jne 0x4b5e3c
// 004b5e0e  83e801               sub eax, 1
// 004b5e11  83c101               add ecx, 1
// 004b5e14  83c201               add edx, 1
// 004b5e17  85c0                 test eax, eax
// 004b5e19  742f                 je 0x4b5e4a
// 004b5e1b  0fb632               movzx esi, byte ptr [edx]
// 004b5e1e  0fb619               movzx ebx, byte ptr [ecx]
// 004b5e21  2bf3                 sub esi, ebx
// 004b5e23  7517                 jne 0x4b5e3c
// 004b5e25  83e801               sub eax, 1
// 004b5e28  83c101               add ecx, 1
// 004b5e2b  83c201               add edx, 1
// 004b5e2e  85c0                 test eax, eax
// 004b5e30  7418                 je 0x4b5e4a
// 004b5e32  0fb632               movzx esi, byte ptr [edx]
// 004b5e35  0fb611               movzx edx, byte ptr [ecx]
// 004b5e38  2bf2                 sub esi, edx
// 004b5e3a  740e                 je 0x4b5e4a
// 004b5e3c  85f6                 test esi, esi
// 004b5e3e  b801000000           mov eax, 1
// 004b5e43  7f07                 jg 0x4b5e4c
// 004b5e45  83c8ff               or eax, 0xffffffff
// 004b5e48  eb02                 jmp 0x4b5e4c
// 004b5e4a  33c0                 xor eax, eax
// 004b5e4c  85c0                 test eax, eax
// 004b5e4e  0f84b3000000         je 0x4b5f07
// 004b5e54  83ff01               cmp edi, 1
// 004b5e57  0f8783feffff         ja 0x4b5ce0
// 004b5e5d  8b9c24b4000000       mov ebx, dword ptr [esp + 0xb4]
// 004b5e64  b810000000           mov eax, 0x10
// 004b5e69  8d4c2410             lea ecx, [esp + 0x10]
// 004b5e6d  8d542420             lea edx, [esp + 0x20]
// 004b5e71  8b32                 mov esi, dword ptr [edx]
// 004b5e73  3b31                 cmp esi, dword ptr [ecx]
// 004b5e75  7512                 jne 0x4b5e89
// 004b5e77  83e804               sub eax, 4
// 004b5e7a  83c104               add ecx, 4
// 004b5e7d  83c204               add edx, 4
// 004b5e80  83f804               cmp eax, 4
// 004b5e83  73ec                 jae 0x4b5e71
// 004b5e85  85c0                 test eax, eax
// 004b5e87  745d                 je 0x4b5ee6
// 004b5e89  0fb632               movzx esi, byte ptr [edx]
// 004b5e8c  0fb639               movzx edi, byte ptr [ecx]
// 004b5e8f  2bf7                 sub esi, edi
// 004b5e91  7545                 jne 0x4b5ed8
// 004b5e93  83e801               sub eax, 1
// 004b5e96  83c101               add ecx, 1
// 004b5e99  83c201               add edx, 1
// 004b5e9c  85c0                 test eax, eax
// 004b5e9e  7446                 je 0x4b5ee6
// 004b5ea0  0fb632               movzx esi, byte ptr [edx]
// 004b5ea3  0fb639               movzx edi, byte ptr [ecx]
// 004b5ea6  2bf7                 sub esi, edi
// 004b5ea8  752e                 jne 0x4b5ed8
// 004b5eaa  83e801               sub eax, 1
// 004b5ead  83c101               add ecx, 1
// 004b5eb0  83c201               add edx, 1
// 004b5eb3  85c0                 test eax, eax
// 004b5eb5  742f                 je 0x4b5ee6
// 004b5eb7  0fb632               movzx esi, byte ptr [edx]
// 004b5eba  0fb639               movzx edi, byte ptr [ecx]
// 004b5ebd  2bf7                 sub esi, edi
// 004b5ebf  7517                 jne 0x4b5ed8
// 004b5ec1  83e801               sub eax, 1
// 004b5ec4  83c101               add ecx, 1
// 004b5ec7  83c201               add edx, 1
// 004b5eca  85c0                 test eax, eax
// 004b5ecc  7418                 je 0x4b5ee6
// 004b5ece  0fb632               movzx esi, byte ptr [edx]
// 004b5ed1  0fb601               movzx eax, byte ptr [ecx]
// 004b5ed4  2bf0                 sub esi, eax
// 004b5ed6  740e                 je 0x4b5ee6
// 004b5ed8  85f6                 test esi, esi
// 004b5eda  b801000000           mov eax, 1
// 004b5edf  7f07                 jg 0x4b5ee8
// 004b5ee1  83c8ff               or eax, 0xffffffff
// 004b5ee4  eb02                 jmp 0x4b5ee8
// 004b5ee6  33c0                 xor eax, eax
// 004b5ee8  85c0                 test eax, eax
// 004b5eea  751b                 jne 0x4b5f07
// 004b5eec  83bc24b800000000     cmp dword ptr [esp + 0xb8], 0
// 004b5ef4  0f8566fcffff         jne 0x4b5b60
// 004b5efa  5d                   pop ebp
// 004b5efb  5b                   pop ebx
// 004b5efc  5f                   pop edi
// 004b5efd  b001                 mov al, 1
// 004b5eff  5e                   pop esi
// 004b5f00  81c4a0000000         add esp, 0xa0
// 004b5f06  c3                   ret 
// 004b5f07  5d                   pop ebp
// 004b5f08  5b                   pop ebx
// 004b5f09  5f                   pop edi
// 004b5f0a  32c0                 xor al, al
// 004b5f0c  5e                   pop esi
// 004b5f0d  81c4a0000000         add esp, 0xa0
// 004b5f13  c3                   ret 

// from server: 16% by colin
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreResourceGroupManager.cpp