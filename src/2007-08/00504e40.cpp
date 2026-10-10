// from server: 100% by tester
// roc 2007-03 004f9830  unit: seg_004f0000  size: 1230 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f9830
//
// 004f9830  6aff                 push -1
// 004f9832  68ab057500           push 0x7505ab
// 004f9837  64a100000000         mov eax, dword ptr fs:[0]
// 004f983d  50                   push eax
// 004f983e  83ec5c               sub esp, 0x5c
// 004f9841  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 004f9846  33c4                 xor eax, esp
// 004f9848  89442458             mov dword ptr [esp + 0x58], eax
// 004f984c  53                   push ebx
// 004f984d  55                   push ebp
// 004f984e  56                   push esi
// 004f984f  57                   push edi
// 004f9850  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 004f9855  33c4                 xor eax, esp
// 004f9857  50                   push eax
// 004f9858  8d442470             lea eax, [esp + 0x70]
// 004f985c  64a300000000         mov dword ptr fs:[0], eax
// 004f9862  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 004f9869  83f808               cmp eax, 8
// 004f986c  8bbc2484000000       mov edi, dword ptr [esp + 0x84]
// 004f9873  8bb42480000000       mov esi, dword ptr [esp + 0x80]
// 004f987a  897c2414             mov dword ptr [esp + 0x14], edi
// 004f987e  0f855b040000         jne 0x4f9cdf
// 004f9884  8d4c2450             lea ecx, [esp + 0x50]
// 004f9888  ff1584e77700         call dword ptr [0x77e784]
// 004f988e  8b4614               mov eax, dword ptr [esi + 0x14]
// 004f9891  83f805               cmp eax, 5
// 004f9894  c744247800000000     mov dword ptr [esp + 0x78], 0
// 004f989c  0f82b3000000         jb 0x4f9955
// 004f98a2  83c0ff               add eax, -1
// 004f98a5  83f805               cmp eax, 5
// 004f98a8  8bd8                 mov ebx, eax
// 004f98aa  7d05                 jge 0x4f98b1
// 004f98ac  bb05000000           mov ebx, 5
// 004f98b1  bd01000000           mov ebp, 1
// 004f98b6  3bdd                 cmp ebx, ebp
// 004f98b8  0f8c97000000         jl 0x4f9955
// 004f98be  8bff                 mov edi, edi
// 004f98c0  8b4614               mov eax, dword ptr [esi + 0x14]
// 004f98c3  8bf8                 mov edi, eax
// 004f98c5  2bfd                 sub edi, ebp
// 004f98c7  3bf8                 cmp edi, eax
// 004f98c9  7606                 jbe 0x4f98d1
// 004f98cb  ff1544e97700         call dword ptr [0x77e944]
// 004f98d1  837e1810             cmp dword ptr [esi + 0x18], 0x10
// 004f98d5  7205                 jb 0x4f98dc
// 004f98d7  8b4604               mov eax, dword ptr [esi + 4]
// 004f98da  eb03                 jmp 0x4f98df
// 004f98dc  8d4604               lea eax, [esi + 4]
// 004f98df  803c382e             cmp byte ptr [eax + edi], 0x2e
// 004f98e3  7409                 je 0x4f98ee
// 004f98e5  83c501               add ebp, 1
// 004f98e8  3beb                 cmp ebp, ebx
// 004f98ea  7ed4                 jle 0x4f98c0
// 004f98ec  eb63                 jmp 0x4f9951
// 004f98ee  8b0dfce67700         mov ecx, dword ptr [0x77e6fc]
// 004f98f4  8b4614               mov eax, dword ptr [esi + 0x14]
// 004f98f7  8b11                 mov edx, dword ptr [ecx]
// 004f98f9  2bc5                 sub eax, ebp
// 004f98fb  52                   push edx
// 004f98fc  83c001               add eax, 1
// 004f98ff  50                   push eax
// 004f9900  8d442420             lea eax, [esp + 0x20]
// 004f9904  50                   push eax
// 004f9905  8bce                 mov ecx, esi
// 004f9907  ff15a8e67700         call dword ptr [0x77e6a8]
// 004f990d  50                   push eax
// 004f990e  8d4c2438             lea ecx, [esp + 0x38]
// 004f9912  51                   push ecx
// 004f9913  c684248000000001     mov byte ptr [esp + 0x80], 1
// 004f991b  e8b03c0000           call 0x4fd5d0
// 004f9920  83c408               add esp, 8
// 004f9923  50                   push eax
// 004f9924  8d4c2454             lea ecx, [esp + 0x54]
// 004f9928  c644247c02           mov byte ptr [esp + 0x7c], 2
// 004f992d  ff154ce77700         call dword ptr [0x77e74c]
// 004f9933  8d4c2434             lea ecx, [esp + 0x34]
// 004f9937  c644247801           mov byte ptr [esp + 0x78], 1
// 004f993c  ff158ce77700         call dword ptr [0x77e78c]
// 004f9942  8d4c2418             lea ecx, [esp + 0x18]
// 004f9946  c644247800           mov byte ptr [esp + 0x78], 0
// 004f994b  ff158ce77700         call dword ptr [0x77e78c]
// 004f9951  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 004f9955  8d542450             lea edx, [esp + 0x50]
// 004f9959  6834fb7900           push 0x79fb34
// 004f995e  52                   push edx
// 004f995f  ff15d8e67700         call dword ptr [0x77e6d8]
// 004f9965  8b9c2490000000       mov ebx, dword ptr [esp + 0x90]
// 004f996c  83c408               add esp, 8
// 004f996f  84c0                 test al, al
// 004f9971  744a                 je 0x4f99bd
// 004f9973  83fb03               cmp ebx, 3
// 004f9976  7e45                 jle 0x4f99bd
// 004f9978  0fb607               movzx eax, byte ptr [edi]
// 004f997b  83e850               sub eax, 0x50
// 004f997e  baffffffff           mov edx, 0xffffffff
// 004f9983  7509                 jne 0x4f998e
// 004f9985  0fb64701             movzx eax, byte ptr [edi + 1]
// 004f9989  83e836               sub eax, 0x36
// 004f998c  740d                 je 0x4f999b
// 004f998e  85c0                 test eax, eax
// 004f9990  b901000000           mov ecx, 1
// 004f9995  7f06                 jg 0x4f999d
// 004f9997  8bca                 mov ecx, edx
// 004f9999  eb02                 jmp 0x4f999d
// 004f999b  33c9                 xor ecx, ecx
// 004f999d  85c9                 test ecx, ecx
// 004f999f  89542478             mov dword ptr [esp + 0x78], edx
// 004f99a3  8d4c2450             lea ecx, [esp + 0x50]
// 004f99a7  0f85c2000000         jne 0x4f9a6f
// 004f99ad  ff158ce77700         call dword ptr [0x77e78c]
// 004f99b3  b807000000           mov eax, 7
// 004f99b8  e922030000           jmp 0x4f9cdf
// 004f99bd  8d442450             lea eax, [esp + 0x50]
// 004f99c1  50                   push eax
// 004f99c2  e8b9f6ffff           call 0x4f9080
// 004f99c7  8bf0                 mov esi, eax
// 004f99c9  83c404               add esp, 4
// 004f99cc  83fe08               cmp esi, 8
// 004f99cf  741e                 je 0x4f99ef
// 004f99d1  83fe09               cmp esi, 9
// 004f99d4  7419                 je 0x4f99ef
// 004f99d6  8d4c2450             lea ecx, [esp + 0x50]
// 004f99da  c7442478ffffffff     mov dword ptr [esp + 0x78], 0xffffffff
// 004f99e2  ff158ce77700         call dword ptr [0x77e78c]
// 004f99e8  8bc6                 mov eax, esi
// 004f99ea  e9f0020000           jmp 0x4f9cdf
// 004f99ef  83ceff               or esi, 0xffffffff
// 004f99f2  83fb03               cmp ebx, 3
// 004f99f5  0f8ec0000000         jle 0x4f9abb
// 004f99fb  0fb607               movzx eax, byte ptr [edi]
// 004f99fe  83e850               sub eax, 0x50
// 004f9a01  7509                 jne 0x4f9a0c
// 004f9a03  0fb64701             movzx eax, byte ptr [edi + 1]
// 004f9a07  83e833               sub eax, 0x33
// 004f9a0a  740d                 je 0x4f9a19
// 004f9a0c  85c0                 test eax, eax
// 004f9a0e  b901000000           mov ecx, 1
// 004f9a13  7f06                 jg 0x4f9a1b
// 004f9a15  8bce                 mov ecx, esi
// 004f9a17  eb02                 jmp 0x4f9a1b
// 004f9a19  33c9                 xor ecx, ecx
// 004f9a1b  85c9                 test ecx, ecx
// 004f9a1d  7448                 je 0x4f9a67
// 004f9a1f  0fb607               movzx eax, byte ptr [edi]
// 004f9a22  83e850               sub eax, 0x50
// 004f9a25  7509                 jne 0x4f9a30
// 004f9a27  0fb64701             movzx eax, byte ptr [edi + 1]
// 004f9a2b  83e832               sub eax, 0x32
// 004f9a2e  740d                 je 0x4f9a3d
// 004f9a30  85c0                 test eax, eax
// 004f9a32  b901000000           mov ecx, 1
// 004f9a37  7f06                 jg 0x4f9a3f
// 004f9a39  8bce                 mov ecx, esi
// 004f9a3b  eb02                 jmp 0x4f9a3f
// 004f9a3d  33c9                 xor ecx, ecx
// 004f9a3f  85c9                 test ecx, ecx
// 004f9a41  7424                 je 0x4f9a67
// 004f9a43  0fb607               movzx eax, byte ptr [edi]
// 004f9a46  83e850               sub eax, 0x50
// 004f9a49  7509                 jne 0x4f9a54
// 004f9a4b  0fb64701             movzx eax, byte ptr [edi + 1]
// 004f9a4f  83e831               sub eax, 0x31
// 004f9a52  740d                 je 0x4f9a61
// 004f9a54  85c0                 test eax, eax
// 004f9a56  b901000000           mov ecx, 1
// 004f9a5b  7f06                 jg 0x4f9a63
// 004f9a5d  8bce                 mov ecx, esi
// 004f9a5f  eb02                 jmp 0x4f9a63
// 004f9a61  33c9                 xor ecx, ecx
// 004f9a63  85c9                 test ecx, ecx
// 004f9a65  7518                 jne 0x4f9a7f
// 004f9a67  89742478             mov dword ptr [esp + 0x78], esi
// 004f9a6b  8d4c2450             lea ecx, [esp + 0x50]
// 004f9a6f  ff158ce77700         call dword ptr [0x77e78c]
// 004f9a75  b806000000           mov eax, 6
// 004f9a7a  e960020000           jmp 0x4f9cdf
// 004f9a7f  0fb607               movzx eax, byte ptr [edi]
// 004f9a82  83e850               sub eax, 0x50
// 004f9a85  7509                 jne 0x4f9a90
// 004f9a87  0fb64701             movzx eax, byte ptr [edi + 1]
// 004f9a8b  83e836               sub eax, 0x36
// 004f9a8e  740d                 je 0x4f9a9d
// 004f9a90  85c0                 test eax, eax
// 004f9a92  b901000000           mov ecx, 1
// 004f9a97  7f06                 jg 0x4f9a9f
// 004f9a99  8bce                 mov ecx, esi
// 004f9a9b  eb02                 jmp 0x4f9a9f
// 004f9a9d  33c9                 xor ecx, ecx
// 004f9a9f  85c9                 test ecx, ecx
// 004f9aa1  7518                 jne 0x4f9abb
// 004f9aa3  8d4c2450             lea ecx, [esp + 0x50]
// 004f9aa7  89742478             mov dword ptr [esp + 0x78], esi
// 004f9aab  ff158ce77700         call dword ptr [0x77e78c]
// 004f9ab1  b807000000           mov eax, 7
// 004f9ab6  e924020000           jmp 0x4f9cdf
// 004f9abb  83fb08               cmp ebx, 8
// 004f9abe  7e29                 jle 0x4f9ae9
// 004f9ac0  6a08                 push 8
// 004f9ac2  6a00                 push 0
// 004f9ac4  57                   push edi
// 004f9ac5  e8560a0100           call 0x50a520
// 004f9aca  83c40c               add esp, 0xc
// 004f9acd  85c0                 test eax, eax
// 004f9acf  7518                 jne 0x4f9ae9
// 004f9ad1  8d4c2450             lea ecx, [esp + 0x50]
// 004f9ad5  89742478             mov dword ptr [esp + 0x78], esi
// 004f9ad9  ff158ce77700         call dword ptr [0x77e78c]
// 004f9adf  b805000000           mov eax, 5
// 004f9ae4  e9f6010000           jmp 0x4f9cdf
// 004f9ae9  85db                 test ebx, ebx
// 004f9aeb  7e1d                 jle 0x4f9b0a
// 004f9aed  803f42               cmp byte ptr [edi], 0x42
// 004f9af0  7518                 jne 0x4f9b0a
// 004f9af2  8d4c2450             lea ecx, [esp + 0x50]
// 004f9af6  89742478             mov dword ptr [esp + 0x78], esi
// 004f9afa  ff158ce77700         call dword ptr [0x77e78c]
// 004f9b00  b801000000           mov eax, 1
// 004f9b05  e9d5010000           jmp 0x4f9cdf
// 004f9b0a  83fb0a               cmp ebx, 0xa
// 004f9b0d  0f8eb9000000         jle 0x4f9bcc
// 004f9b13  83fb0b               cmp ebx, 0xb
// 004f9b16  0f8eb0000000         jle 0x4f9bcc
// 004f9b1c  803fff               cmp byte ptr [edi], 0xff
// 004f9b1f  0f85a7000000         jne 0x4f9bcc
// 004f9b25  b804000000           mov eax, 4
// 004f9b2a  b93cfc7900           mov ecx, 0x79fc3c
// 004f9b2f  8d5706               lea edx, [edi + 6]
// 004f9b32  8b2a                 mov ebp, dword ptr [edx]
// 004f9b34  3b29                 cmp ebp, dword ptr [ecx]
// 004f9b36  7512                 jne 0x4f9b4a
// 004f9b38  83e804               sub eax, 4
// 004f9b3b  83c104               add ecx, 4
// 004f9b3e  83c204               add edx, 4
// 004f9b41  83f804               cmp eax, 4
// 004f9b44  73ec                 jae 0x4f9b32
// 004f9b46  85c0                 test eax, eax
// 004f9b48  7462                 je 0x4f9bac
// 004f9b4a  0fb629               movzx ebp, byte ptr [ecx]
// 004f9b4d  0fb632               movzx esi, byte ptr [edx]
// 004f9b50  2bf5                 sub esi, ebp
// 004f9b52  7545                 jne 0x4f9b99
// 004f9b54  83e801               sub eax, 1
// 004f9b57  83c101               add ecx, 1
// 004f9b5a  83c201               add edx, 1
// 004f9b5d  85c0                 test eax, eax
// 004f9b5f  7448                 je 0x4f9ba9
// 004f9b61  0fb629               movzx ebp, byte ptr [ecx]
// 004f9b64  0fb632               movzx esi, byte ptr [edx]
// 004f9b67  2bf5                 sub esi, ebp
// 004f9b69  752e                 jne 0x4f9b99
// 004f9b6b  83e801               sub eax, 1
// 004f9b6e  83c101               add ecx, 1
// 004f9b71  83c201               add edx, 1
// 004f9b74  85c0                 test eax, eax
// 004f9b76  7431                 je 0x4f9ba9
// 004f9b78  0fb629               movzx ebp, byte ptr [ecx]
// 004f9b7b  0fb632               movzx esi, byte ptr [edx]
// 004f9b7e  2bf5                 sub esi, ebp
// 004f9b80  7517                 jne 0x4f9b99
// 004f9b82  83e801               sub eax, 1
// 004f9b85  83c101               add ecx, 1
// 004f9b88  83c201               add edx, 1
// 004f9b8b  85c0                 test eax, eax
// 004f9b8d  741a                 je 0x4f9ba9
// 004f9b8f  0fb609               movzx ecx, byte ptr [ecx]
// 004f9b92  0fb632               movzx esi, byte ptr [edx]
// 004f9b95  2bf1                 sub esi, ecx
// 004f9b97  7410                 je 0x4f9ba9
// 004f9b99  85f6                 test esi, esi
// 004f9b9b  b801000000           mov eax, 1
// 004f9ba0  7f0e                 jg 0x4f9bb0
// 004f9ba2  83ceff               or esi, 0xffffffff
// 004f9ba5  8bc6                 mov eax, esi
// 004f9ba7  eb0a                 jmp 0x4f9bb3
// 004f9ba9  83ceff               or esi, 0xffffffff
// 004f9bac  33c0                 xor eax, eax
// 004f9bae  eb03                 jmp 0x4f9bb3
// 004f9bb0  83ceff               or esi, 0xffffffff
// 004f9bb3  85c0                 test eax, eax
// 004f9bb5  7515                 jne 0x4f9bcc
// 004f9bb7  8d4c2450             lea ecx, [esp + 0x50]
// 004f9bbb  89742478             mov dword ptr [esp + 0x78], esi
// 004f9bbf  ff158ce77700         call dword ptr [0x77e78c]
// 004f9bc5  33c0                 xor eax, eax
// 004f9bc7  e913010000           jmp 0x4f9cdf
// 004f9bcc  83fb28               cmp ebx, 0x28
// 004f9bcf  0f8ea8000000         jle 0x4f9c7d
// 004f9bd5  b810000000           mov eax, 0x10
// 004f9bda  b9fcf97900           mov ecx, 0x79f9fc
// 004f9bdf  8d541fee             lea edx, [edi + ebx - 0x12]
// 004f9be3  8b2a                 mov ebp, dword ptr [edx]
// 004f9be5  3b29                 cmp ebp, dword ptr [ecx]
// 004f9be7  7512                 jne 0x4f9bfb
// 004f9be9  83e804               sub eax, 4
// 004f9bec  83c104               add ecx, 4
// 004f9bef  83c204               add edx, 4
// 004f9bf2  83f804               cmp eax, 4
// 004f9bf5  73ec                 jae 0x4f9be3
// 004f9bf7  85c0                 test eax, eax
// 004f9bf9  7462                 je 0x4f9c5d
// 004f9bfb  0fb632               movzx esi, byte ptr [edx]
// 004f9bfe  0fb629               movzx ebp, byte ptr [ecx]
// 004f9c01  2bf5                 sub esi, ebp
// 004f9c03  7545                 jne 0x4f9c4a
// 004f9c05  83e801               sub eax, 1
// 004f9c08  83c101               add ecx, 1
// 004f9c0b  83c201               add edx, 1
// 004f9c0e  85c0                 test eax, eax
// 004f9c10  7448                 je 0x4f9c5a
// 004f9c12  0fb632               movzx esi, byte ptr [edx]
// 004f9c15  0fb629               movzx ebp, byte ptr [ecx]
// 004f9c18  2bf5                 sub esi, ebp
// 004f9c1a  752e                 jne 0x4f9c4a
// 004f9c1c  83e801               sub eax, 1
// 004f9c1f  83c101               add ecx, 1
// 004f9c22  83c201               add edx, 1
// 004f9c25  85c0                 test eax, eax
// 004f9c27  7431                 je 0x4f9c5a
// 004f9c29  0fb632               movzx esi, byte ptr [edx]
// 004f9c2c  0fb629               movzx ebp, byte ptr [ecx]
// 004f9c2f  2bf5                 sub esi, ebp
// 004f9c31  7517                 jne 0x4f9c4a
// 004f9c33  83e801               sub eax, 1
// 004f9c36  83c101               add ecx, 1
// 004f9c39  83c201               add edx, 1
// 004f9c3c  85c0                 test eax, eax
// 004f9c3e  741a                 je 0x4f9c5a
// 004f9c40  0fb632               movzx esi, byte ptr [edx]
// 004f9c43  0fb611               movzx edx, byte ptr [ecx]
// 004f9c46  2bf2                 sub esi, edx
// 004f9c48  7410                 je 0x4f9c5a
// 004f9c4a  85f6                 test esi, esi
// 004f9c4c  b801000000           mov eax, 1
// 004f9c51  7f0e                 jg 0x4f9c61
// 004f9c53  83ceff               or esi, 0xffffffff
// 004f9c56  8bc6                 mov eax, esi
// 004f9c58  eb0a                 jmp 0x4f9c64
// 004f9c5a  83ceff               or esi, 0xffffffff
// 004f9c5d  33c0                 xor eax, eax
// 004f9c5f  eb03                 jmp 0x4f9c64
// 004f9c61  83ceff               or esi, 0xffffffff
// 004f9c64  85c0                 test eax, eax
// 004f9c66  7515                 jne 0x4f9c7d
// 004f9c68  8d4c2450             lea ecx, [esp + 0x50]
// 004f9c6c  89742478             mov dword ptr [esp + 0x78], esi
// 004f9c70  ff158ce77700         call dword ptr [0x77e78c]
// 004f9c76  b802000000           mov eax, 2
// 004f9c7b  eb62                 jmp 0x4f9cdf
// 004f9c7d  83fb04               cmp ebx, 4
// 004f9c80  7e2c                 jle 0x4f9cae
// 004f9c82  803f00               cmp byte ptr [edi], 0
// 004f9c85  7527                 jne 0x4f9cae
// 004f9c87  807f0100             cmp byte ptr [edi + 1], 0
// 004f9c8b  7521                 jne 0x4f9cae
// 004f9c8d  807f0200             cmp byte ptr [edi + 2], 0
// 004f9c91  751b                 jne 0x4f9cae
// 004f9c93  807f0301             cmp byte ptr [edi + 3], 1
// 004f9c97  7515                 jne 0x4f9cae
// 004f9c99  8d4c2450             lea ecx, [esp + 0x50]
// 004f9c9d  89742478             mov dword ptr [esp + 0x78], esi
// 004f9ca1  ff158ce77700         call dword ptr [0x77e78c]
// 004f9ca7  b804000000           mov eax, 4
// 004f9cac  eb31                 jmp 0x4f9cdf
// 004f9cae  85db                 test ebx, ebx
// 004f9cb0  7e1a                 jle 0x4f9ccc
// 004f9cb2  803f0a               cmp byte ptr [edi], 0xa
// 004f9cb5  7515                 jne 0x4f9ccc
// 004f9cb7  8d4c2450             lea ecx, [esp + 0x50]
// 004f9cbb  89742478             mov dword ptr [esp + 0x78], esi
// 004f9cbf  ff158ce77700         call dword ptr [0x77e78c]
// 004f9cc5  b803000000           mov eax, 3
// 004f9cca  eb13                 jmp 0x4f9cdf
// 004f9ccc  8d4c2450             lea ecx, [esp + 0x50]
// 004f9cd0  89742478             mov dword ptr [esp + 0x78], esi
// 004f9cd4  ff158ce77700         call dword ptr [0x77e78c]
// 004f9cda  b809000000           mov eax, 9
// 004f9cdf  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 004f9ce3  64890d00000000       mov dword ptr fs:[0], ecx
// 004f9cea  59                   pop ecx
// 004f9ceb  5f                   pop edi
// 004f9cec  5e                   pop esi
// 004f9ced  5d                   pop ebp
// 004f9cee  5b                   pop ebx
// 004f9cef  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 004f9cf3  33cc                 xor ecx, esp
// 004f9cf5  e8ac511200           call 0x61eea6
// 004f9cfa  83c468               add esp, 0x68
// 004f9cfd  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage.cpp (function ?resolveFormat@GImage@G3D@@CA?AW4Format@12@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBEHW4312@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage.cpp
