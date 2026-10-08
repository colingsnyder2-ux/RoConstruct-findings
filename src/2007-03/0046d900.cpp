// roc 2007-03 0046d900  unit: seg_00460000  size: 861 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0046d900
//
// 0046d900  6aff                 push -1
// 0046d902  68cd677400           push 0x7467cd
// 0046d907  64a100000000         mov eax, dword ptr fs:[0]
// 0046d90d  50                   push eax
// 0046d90e  81ec84040000         sub esp, 0x484
// 0046d914  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 0046d919  33c4                 xor eax, esp
// 0046d91b  89842480040000       mov dword ptr [esp + 0x480], eax
// 0046d922  53                   push ebx
// 0046d923  55                   push ebp
// 0046d924  56                   push esi
// 0046d925  57                   push edi
// 0046d926  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 0046d92b  33c4                 xor eax, esp
// 0046d92d  50                   push eax
// 0046d92e  8d842498040000       lea eax, [esp + 0x498]
// 0046d935  64a300000000         mov dword ptr fs:[0], eax
// 0046d93b  8bac24a8040000       mov ebp, dword ptr [esp + 0x4a8]
// 0046d942  896c241c             mov dword ptr [esp + 0x1c], ebp
// 0046d946  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0046d94e  e8adfeffff           call 0x46d800
// 0046d953  83f802               cmp eax, 2
// 0046d956  0f85a0000000         jne 0x46d9fc
// 0046d95c  f605c8768b0001       test byte ptr [0x8b76c8], 1
// 0046d963  753e                 jne 0x46d9a3
// 0046d965  b801000000           mov eax, 1
// 0046d96a  0905c8768b00         or dword ptr [0x8b76c8], eax
// 0046d970  68021f0000           push 0x1f02
// 0046d975  898424a4040000       mov dword ptr [esp + 0x4a4], eax
// 0046d97c  ff1518eb7700         call dword ptr [0x77eb18]
// 0046d982  50                   push eax
// 0046d983  b9ac768b00           mov ecx, 0x8b76ac
// 0046d988  ff1578e77700         call dword ptr [0x77e778]
// 0046d98e  68a07f7700           push 0x777fa0
// 0046d993  e81b181b00           call 0x61f1b3
// 0046d998  83c404               add esp, 4
// 0046d99b  c68424a004000000     mov byte ptr [esp + 0x4a0], 0
// 0046d9a3  a1fce67700           mov eax, dword ptr [0x77e6fc]
// 0046d9a8  8b00                 mov eax, dword ptr [eax]
// 0046d9aa  6a01                 push 1
// 0046d9ac  50                   push eax
// 0046d9ad  8d4c241c             lea ecx, [esp + 0x1c]
// 0046d9b1  51                   push ecx
// 0046d9b2  b9ac768b00           mov ecx, 0x8b76ac
// 0046d9b7  c644242020           mov byte ptr [esp + 0x20], 0x20
// 0046d9bc  ff153ce67700         call dword ptr [0x77e63c]
// 0046d9c2  8b15fce67700         mov edx, dword ptr [0x77e6fc]
// 0046d9c8  3b02                 cmp eax, dword ptr [edx]
// 0046d9ca  7512                 jne 0x46d9de
// 0046d9cc  68a05b7900           push 0x795ba0
// 0046d9d1  8bcd                 mov ecx, ebp
// 0046d9d3  ff1578e77700         call dword ptr [0x77e778]
// 0046d9d9  e955020000           jmp 0x46dc33
// 0046d9de  8b0dc0768b00         mov ecx, dword ptr [0x8b76c0]
// 0046d9e4  2bc8                 sub ecx, eax
// 0046d9e6  51                   push ecx
// 0046d9e7  83c001               add eax, 1
// 0046d9ea  50                   push eax
// 0046d9eb  55                   push ebp
// 0046d9ec  b9ac768b00           mov ecx, 0x8b76ac
// 0046d9f1  ff15a8e67700         call dword ptr [0x77e6a8]
// 0046d9f7  e937020000           jmp 0x46dc33
// 0046d9fc  8d4c245c             lea ecx, [esp + 0x5c]
// 0046da00  ff1584e77700         call dword ptr [0x77e784]
// 0046da06  6800040000           push 0x400
// 0046da0b  8d942498000000       lea edx, [esp + 0x98]
// 0046da12  52                   push edx
// 0046da13  c78424a804000002000000 mov dword ptr [esp + 0x4a8], 2
// 0046da1e  ff1504d27700         call dword ptr [0x77d204]
// 0046da24  85c0                 test eax, eax
// 0046da26  751a                 jne 0x46da42
// 0046da28  68785b7900           push 0x795b78
// 0046da2d  8bcd                 mov ecx, ebp
// 0046da2f  ff1578e77700         call dword ptr [0x77e778]
// 0046da35  c744241801000000     mov dword ptr [esp + 0x18], 1
// 0046da3d  e9df010000           jmp 0x46dc21
// 0046da42  8d842494000000       lea eax, [esp + 0x94]
// 0046da49  50                   push eax
// 0046da4a  8d4c2460             lea ecx, [esp + 0x60]
// 0046da4e  ff15f0e67700         call dword ptr [0x77e6f0]
// 0046da54  e8a7fdffff           call 0x46d800
// 0046da59  83e800               sub eax, 0
// 0046da5c  7450                 je 0x46daae
// 0046da5e  83e801               sub eax, 1
// 0046da61  741a                 je 0x46da7d
// 0046da63  685c5b7900           push 0x795b5c
// 0046da68  8bcd                 mov ecx, ebp
// 0046da6a  ff1578e77700         call dword ptr [0x77e778]
// 0046da70  c744241801000000     mov dword ptr [esp + 0x18], 1
// 0046da78  e9a4010000           jmp 0x46dc21
// 0046da7d  684c5b7900           push 0x795b4c
// 0046da82  8d4c2460             lea ecx, [esp + 0x60]
// 0046da86  51                   push ecx
// 0046da87  8d542448             lea edx, [esp + 0x48]
// 0046da8b  52                   push edx
// 0046da8c  ff1504e77700         call dword ptr [0x77e704]
// 0046da92  83c40c               add esp, 0xc
// 0046da95  50                   push eax
// 0046da96  8d4c2460             lea ecx, [esp + 0x60]
// 0046da9a  c68424a404000004     mov byte ptr [esp + 0x4a4], 4
// 0046daa2  ff154ce77700         call dword ptr [0x77e74c]
// 0046daa8  8d4c2440             lea ecx, [esp + 0x40]
// 0046daac  eb2f                 jmp 0x46dadd
// 0046daae  683c5b7900           push 0x795b3c
// 0046dab3  8d442460             lea eax, [esp + 0x60]
// 0046dab7  50                   push eax
// 0046dab8  8d4c242c             lea ecx, [esp + 0x2c]
// 0046dabc  51                   push ecx
// 0046dabd  ff1504e77700         call dword ptr [0x77e704]
// 0046dac3  83c40c               add esp, 0xc
// 0046dac6  50                   push eax
// 0046dac7  8d4c2460             lea ecx, [esp + 0x60]
// 0046dacb  c68424a404000003     mov byte ptr [esp + 0x4a4], 3
// 0046dad3  ff154ce77700         call dword ptr [0x77e74c]
// 0046dad9  8d4c2424             lea ecx, [esp + 0x24]
// 0046dadd  c68424a004000002     mov byte ptr [esp + 0x4a0], 2
// 0046dae5  ff158ce77700         call dword ptr [0x77e78c]
// 0046daeb  837c247410           cmp dword ptr [esp + 0x74], 0x10
// 0046daf0  8b5c2460             mov ebx, dword ptr [esp + 0x60]
// 0046daf4  7304                 jae 0x46dafa
// 0046daf6  8d5c2460             lea ebx, [esp + 0x60]
// 0046dafa  8d542420             lea edx, [esp + 0x20]
// 0046dafe  52                   push edx
// 0046daff  53                   push ebx
// 0046db00  e8c59b2b00           call 0x7276ca
// 0046db05  8bf8                 mov edi, eax
// 0046db07  85ff                 test edi, edi
// 0046db09  751a                 jne 0x46db25
// 0046db0b  68205b7900           push 0x795b20
// 0046db10  8bcd                 mov ecx, ebp
// 0046db12  ff1578e77700         call dword ptr [0x77e778]
// 0046db18  c744241801000000     mov dword ptr [esp + 0x18], 1
// 0046db20  e9fc000000           jmp 0x46dc21
// 0046db25  57                   push edi
// 0046db26  e895081b00           call 0x61e3c0
// 0046db2b  83c404               add esp, 4
// 0046db2e  8bf0                 mov esi, eax
// 0046db30  56                   push esi
// 0046db31  57                   push edi
// 0046db32  6a00                 push 0
// 0046db34  53                   push ebx
// 0046db35  e88a9b2b00           call 0x7276c4
// 0046db3a  85c0                 test eax, eax
// 0046db3c  7523                 jne 0x46db61
// 0046db3e  56                   push esi
// 0046db3f  e870081b00           call 0x61e3b4
// 0046db44  83c404               add esp, 4
// 0046db47  68185b7900           push 0x795b18
// 0046db4c  8bcd                 mov ecx, ebp
// 0046db4e  ff1578e77700         call dword ptr [0x77e778]
// 0046db54  c744241801000000     mov dword ptr [esp + 0x18], 1
// 0046db5c  e9c0000000           jmp 0x46dc21
// 0046db61  8d4606               lea eax, [esi + 6]
// 0046db64  8d5002               lea edx, [eax + 2]
// 0046db67  668b08               mov cx, word ptr [eax]
// 0046db6a  83c002               add eax, 2
// 0046db6d  6685c9               test cx, cx
// 0046db70  75f5                 jne 0x46db67
// 0046db72  2bc2                 sub eax, edx
// 0046db74  d1f8                 sar eax, 1
// 0046db76  8d444608             lea eax, [esi + eax*2 + 8]
// 0046db7a  2bc6                 sub eax, esi
// 0046db7c  83c003               add eax, 3
// 0046db7f  83e0fc               and eax, 0xfffffffc
// 0046db82  03c6                 add eax, esi
// 0046db84  68fc5a7900           push 0x795afc
// 0046db89  8d4c247c             lea ecx, [esp + 0x7c]
// 0046db8d  8bf8                 mov edi, eax
// 0046db8f  ff1578e77700         call dword ptr [0x77e778]
// 0046db95  66837e0200           cmp word ptr [esi + 2], 0
// 0046db9a  b305                 mov bl, 5
// 0046db9c  889c24a0040000       mov byte ptr [esp + 0x4a0], bl
// 0046dba3  744c                 je 0x46dbf1
// 0046dba5  8b4714               mov eax, dword ptr [edi + 0x14]
// 0046dba8  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 0046dbab  0fb7d0               movzx edx, ax
// 0046dbae  52                   push edx
// 0046dbaf  c1e810               shr eax, 0x10
// 0046dbb2  50                   push eax
// 0046dbb3  0fb7c1               movzx eax, cx
// 0046dbb6  50                   push eax
// 0046dbb7  c1e910               shr ecx, 0x10
// 0046dbba  51                   push ecx
// 0046dbbb  8d4c2434             lea ecx, [esp + 0x34]
// 0046dbbf  68f05a7900           push 0x795af0
// 0046dbc4  51                   push ecx
// 0046dbc5  e866770800           call 0x4f5330
// 0046dbca  83c418               add esp, 0x18
// 0046dbcd  50                   push eax
// 0046dbce  8d4c247c             lea ecx, [esp + 0x7c]
// 0046dbd2  c68424a404000006     mov byte ptr [esp + 0x4a4], 6
// 0046dbda  ff154ce77700         call dword ptr [0x77e74c]
// 0046dbe0  8d4c2424             lea ecx, [esp + 0x24]
// 0046dbe4  889c24a0040000       mov byte ptr [esp + 0x4a0], bl
// 0046dbeb  ff158ce77700         call dword ptr [0x77e78c]
// 0046dbf1  56                   push esi
// 0046dbf2  e8bd071b00           call 0x61e3b4
// 0046dbf7  83c404               add esp, 4
// 0046dbfa  8d542478             lea edx, [esp + 0x78]
// 0046dbfe  52                   push edx
// 0046dbff  8bcd                 mov ecx, ebp
// 0046dc01  ff157ce77700         call dword ptr [0x77e77c]
// 0046dc07  8d4c2478             lea ecx, [esp + 0x78]
// 0046dc0b  c744241801000000     mov dword ptr [esp + 0x18], 1
// 0046dc13  c68424a004000002     mov byte ptr [esp + 0x4a0], 2
// 0046dc1b  ff158ce77700         call dword ptr [0x77e78c]
// 0046dc21  8d4c245c             lea ecx, [esp + 0x5c]
// 0046dc25  c68424a004000000     mov byte ptr [esp + 0x4a0], 0
// 0046dc2d  ff158ce77700         call dword ptr [0x77e78c]
// 0046dc33  8bc5                 mov eax, ebp
// 0046dc35  8b8c2498040000       mov ecx, dword ptr [esp + 0x498]
// 0046dc3c  64890d00000000       mov dword ptr fs:[0], ecx
// 0046dc43  59                   pop ecx
// 0046dc44  5f                   pop edi
// 0046dc45  5e                   pop esi
// 0046dc46  5d                   pop ebp
// 0046dc47  5b                   pop ebx
// 0046dc48  8b8c2480040000       mov ecx, dword ptr [esp + 0x480]
// 0046dc4f  33cc                 xor ecx, esp
// 0046dc51  e850121b00           call 0x61eea6
// 0046dc56  81c490040000         add esp, 0x490
// 0046dc5c  c3                   ret 
// library g3d-6.09/GLG3Dcpp\GLCaps.cpp (function ?getDriverVersion@GLCaps@G3D@@CA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GLCaps.cpp
