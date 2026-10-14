// roc 2009-06 00571be0  unit: seg_00570000  size: 2603 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00571be0
//
// 00571be0  6aff                 push -1
// 00571be2  6863048600           push 0x860463
// 00571be7  64a100000000         mov eax, dword ptr fs:[0]
// 00571bed  50                   push eax
// 00571bee  64892500000000       mov dword ptr fs:[0], esp
// 00571bf5  81ecc8000000         sub esp, 0xc8
// 00571bfb  53                   push ebx
// 00571bfc  8b9c24dc000000       mov ebx, dword ptr [esp + 0xdc]
// 00571c03  55                   push ebp
// 00571c04  56                   push esi
// 00571c05  8bf1                 mov esi, ecx
// 00571c07  8bcb                 mov ecx, ebx
// 00571c09  e8b292f0ff           call 0x47aec0
// 00571c0e  8bcb                 mov ecx, ebx
// 00571c10  e8ab92f0ff           call 0x47aec0
// 00571c15  8bcb                 mov ecx, ebx
// 00571c17  e8a492f0ff           call 0x47aec0
// 00571c1c  0fb7e8               movzx ebp, ax
// 00571c1f  c7461004000000       mov dword ptr [esi + 0x10], 4
// 00571c26  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 00571c29  896c241c             mov dword ptr [esp + 0x1c], ebp
// 00571c2d  85c9                 test ecx, ecx
// 00571c2f  7626                 jbe 0x571c57
// 00571c31  8d44241c             lea eax, [esp + 0x1c]
// 00571c35  50                   push eax
// 00571c36  8d4c242c             lea ecx, [esp + 0x2c]
// 00571c3a  c7442420083c8c00     mov dword ptr [esp + 0x20], 0x8c3c08
// 00571c42  ff15c4e98900         call dword ptr [0x89e9c4]
// 00571c48  683c1b9800           push 0x981b3c
// 00571c4d  8d4c242c             lea ecx, [esp + 0x2c]
// 00571c51  51                   push ecx
// 00571c52  e8f37d1a00           call 0x719a4a
// 00571c57  8b5344               mov edx, dword ptr [ebx + 0x44]
// 00571c5a  8b4340               mov eax, dword ptr [ebx + 0x40]
// 00571c5d  03d1                 add edx, ecx
// 00571c5f  57                   push edi
// 00571c60  33c9                 xor ecx, ecx
// 00571c62  8d3c02               lea edi, [edx + eax]
// 00571c65  33c0                 xor eax, eax
// 00571c67  89542428             mov dword ptr [esp + 0x28], edx
// 00571c6b  894c2418             mov dword ptr [esp + 0x18], ecx
// 00571c6f  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00571c73  85ed                 test ebp, ebp
// 00571c75  7e44                 jle 0x571cbb
// 00571c77  897c2424             mov dword ptr [esp + 0x24], edi
// 00571c7b  eb03                 jmp 0x571c80
// 00571c7d  8d4900               lea ecx, [ecx]
// 00571c80  0fb617               movzx edx, byte ptr [edi]
// 00571c83  0fb67f01             movzx edi, byte ptr [edi + 1]
// 00571c87  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00571c8b  0faffa               imul edi, edx
// 00571c8e  0faf6c2418           imul ebp, dword ptr [esp + 0x18]
// 00571c93  3bfd                 cmp edi, ebp
// 00571c95  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00571c99  7e0e                 jle 0x571ca9
// 00571c9b  0fb64f01             movzx ecx, byte ptr [edi + 1]
// 00571c9f  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00571ca3  89542418             mov dword ptr [esp + 0x18], edx
// 00571ca7  8bc8                 mov ecx, eax
// 00571ca9  40                   inc eax
// 00571caa  83c710               add edi, 0x10
// 00571cad  3b442420             cmp eax, dword ptr [esp + 0x20]
// 00571cb1  897c2424             mov dword ptr [esp + 0x24], edi
// 00571cb5  7cc9                 jl 0x571c80
// 00571cb7  8b542428             mov edx, dword ptr [esp + 0x28]
// 00571cbb  8b4334               mov eax, dword ptr [ebx + 0x34]
// 00571cbe  c1e104               shl ecx, 4
// 00571cc1  03ca                 add ecx, edx
// 00571cc3  2bc8                 sub ecx, eax
// 00571cc5  894b44               mov dword ptr [ebx + 0x44], ecx
// 00571cc8  7805                 js 0x571ccf
// 00571cca  3b4b3c               cmp ecx, dword ptr [ebx + 0x3c]
// 00571ccd  7e0f                 jle 0x571cde
// 00571ccf  33ed                 xor ebp, ebp
// 00571cd1  03c8                 add ecx, eax
// 00571cd3  55                   push ebp
// 00571cd4  51                   push ecx
// 00571cd5  8bcb                 mov ecx, ebx
// 00571cd7  e8742a0000           call 0x574750
// 00571cdc  eb02                 jmp 0x571ce0
// 00571cde  33ed                 xor ebp, ebp
// 00571ce0  8b4344               mov eax, dword ptr [ebx + 0x44]
// 00571ce3  8d4801               lea ecx, [eax + 1]
// 00571ce6  3b4b3c               cmp ecx, dword ptr [ebx + 0x3c]
// 00571ce9  7e0f                 jle 0x571cfa
// 00571ceb  8b5334               mov edx, dword ptr [ebx + 0x34]
// 00571cee  6a01                 push 1
// 00571cf0  03d0                 add edx, eax
// 00571cf2  52                   push edx
// 00571cf3  8bcb                 mov ecx, ebx
// 00571cf5  e8562a0000           call 0x574750
// 00571cfa  8b4344               mov eax, dword ptr [ebx + 0x44]
// 00571cfd  8b4b40               mov ecx, dword ptr [ebx + 0x40]
// 00571d00  8a0c08               mov cl, byte ptr [eax + ecx]
// 00571d03  40                   inc eax
// 00571d04  0fb6d1               movzx edx, cl
// 00571d07  894344               mov dword ptr [ebx + 0x44], eax
// 00571d0a  895608               mov dword ptr [esi + 8], edx
// 00571d0d  8b4344               mov eax, dword ptr [ebx + 0x44]
// 00571d10  8d4801               lea ecx, [eax + 1]
// 00571d13  3b4b3c               cmp ecx, dword ptr [ebx + 0x3c]
// 00571d16  7e0f                 jle 0x571d27
// 00571d18  8b5334               mov edx, dword ptr [ebx + 0x34]
// 00571d1b  6a01                 push 1
// 00571d1d  03d0                 add edx, eax
// 00571d1f  52                   push edx
// 00571d20  8bcb                 mov ecx, ebx
// 00571d22  e8292a0000           call 0x574750
// 00571d27  8b4344               mov eax, dword ptr [ebx + 0x44]
// 00571d2a  8b4b40               mov ecx, dword ptr [ebx + 0x40]
// 00571d2d  8a0c08               mov cl, byte ptr [eax + ecx]
// 00571d30  40                   inc eax
// 00571d31  0fb6d1               movzx edx, cl
// 00571d34  894344               mov dword ptr [ebx + 0x44], eax
// 00571d37  89560c               mov dword ptr [esi + 0xc], edx
// 00571d3a  8b4344               mov eax, dword ptr [ebx + 0x44]
// 00571d3d  8d4801               lea ecx, [eax + 1]
// 00571d40  3b4b3c               cmp ecx, dword ptr [ebx + 0x3c]
// 00571d43  7e0f                 jle 0x571d54
// 00571d45  8b5334               mov edx, dword ptr [ebx + 0x34]
// 00571d48  6a01                 push 1
// 00571d4a  03d0                 add edx, eax
// 00571d4c  52                   push edx
// 00571d4d  8bcb                 mov ecx, ebx
// 00571d4f  e8fc290000           call 0x574750
// 00571d54  8b4344               mov eax, dword ptr [ebx + 0x44]
// 00571d57  8b4b40               mov ecx, dword ptr [ebx + 0x40]
// 00571d5a  8a0c08               mov cl, byte ptr [eax + ecx]
// 00571d5d  40                   inc eax
// 00571d5e  894344               mov dword ptr [ebx + 0x44], eax
// 00571d61  8b560c               mov edx, dword ptr [esi + 0xc]
// 00571d64  0faf5610             imul edx, dword ptr [esi + 0x10]
// 00571d68  0faf5608             imul edx, dword ptr [esi + 8]
// 00571d6c  0fb6f9               movzx edi, cl
// 00571d6f  52                   push edx
// 00571d70  897c241c             mov dword ptr [esp + 0x1c], edi
// 00571d74  e8c793ffff           call 0x56b140
// 00571d79  894604               mov dword ptr [esi + 4], eax
// 00571d7c  8bc7                 mov eax, edi
// 00571d7e  83c404               add esp, 4
// 00571d81  2bc5                 sub eax, ebp
// 00571d83  7469                 je 0x571dee
// 00571d85  83e802               sub eax, 2
// 00571d88  745a                 je 0x571de4
// 00571d8a  83e80e               sub eax, 0xe
// 00571d8d  744b                 je 0x571dda
// 00571d8f  68b0b68c00           push 0x8cb6b0
// 00571d94  8d4c2444             lea ecx, [esp + 0x44]
// 00571d98  ff15b4e48900         call dword ptr [0x89e4b4]
// 00571d9e  8d44245c             lea eax, [esp + 0x5c]
// 00571da2  50                   push eax
// 00571da3  8bcb                 mov ecx, ebx
// 00571da5  89ac24e4000000       mov dword ptr [esp + 0xe4], ebp
// 00571dac  e8ffb3ffff           call 0x56d1b0
// 00571db1  50                   push eax
// 00571db2  8d4c2444             lea ecx, [esp + 0x44]
// 00571db6  51                   push ecx
// 00571db7  8d8c2480000000       lea ecx, [esp + 0x80]
// 00571dbe  c68424e800000001     mov byte ptr [esp + 0xe8], 1
// 00571dc6  e8d581f2ff           call 0x499fa0
// 00571dcb  68308a9800           push 0x988a30
// 00571dd0  8d54247c             lea edx, [esp + 0x7c]
// 00571dd4  52                   push edx
// 00571dd5  e8707c1a00           call 0x719a4a
// 00571dda  c744241004000000     mov dword ptr [esp + 0x10], 4
// 00571de2  eb1b                 jmp 0x571dff
// 00571de4  c744241001000000     mov dword ptr [esp + 0x10], 1
// 00571dec  eb11                 jmp 0x571dff
// 00571dee  bf00010000           mov edi, 0x100
// 00571df3  897c2418             mov dword ptr [esp + 0x18], edi
// 00571df7  c744241008000000     mov dword ptr [esp + 0x10], 8
// 00571dff  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 00571e02  8b4344               mov eax, dword ptr [ebx + 0x44]
// 00571e05  8d440105             lea eax, [ecx + eax + 5]
// 00571e09  2bc1                 sub eax, ecx
// 00571e0b  894344               mov dword ptr [ebx + 0x44], eax
// 00571e0e  7805                 js 0x571e15
// 00571e10  3b433c               cmp eax, dword ptr [ebx + 0x3c]
// 00571e13  7e0b                 jle 0x571e20
// 00571e15  03c1                 add eax, ecx
// 00571e17  55                   push ebp
// 00571e18  50                   push eax
// 00571e19  8bcb                 mov ecx, ebx
// 00571e1b  e830290000           call 0x574750
// 00571e20  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 00571e23  8b5344               mov edx, dword ptr [ebx + 0x44]
// 00571e26  8d441104             lea eax, [ecx + edx + 4]
// 00571e2a  2bc1                 sub eax, ecx
// 00571e2c  894344               mov dword ptr [ebx + 0x44], eax
// 00571e2f  7805                 js 0x571e36
// 00571e31  3b433c               cmp eax, dword ptr [ebx + 0x3c]
// 00571e34  7e0b                 jle 0x571e41
// 00571e36  03c1                 add eax, ecx
// 00571e38  55                   push ebp
// 00571e39  50                   push eax
// 00571e3a  8bcb                 mov ecx, ebx
// 00571e3c  e80f290000           call 0x574750
// 00571e41  8b4344               mov eax, dword ptr [ebx + 0x44]
// 00571e44  8d4804               lea ecx, [eax + 4]
// 00571e47  3b4b3c               cmp ecx, dword ptr [ebx + 0x3c]
// 00571e4a  7e0f                 jle 0x571e5b
// 00571e4c  8b5334               mov edx, dword ptr [ebx + 0x34]
// 00571e4f  6a04                 push 4
// 00571e51  03d0                 add edx, eax
// 00571e53  52                   push edx
// 00571e54  8bcb                 mov ecx, ebx
// 00571e56  e8f5280000           call 0x574750
// 00571e5b  83434404             add dword ptr [ebx + 0x44], 4
// 00571e5f  807b2400             cmp byte ptr [ebx + 0x24], 0
// 00571e63  8b4344               mov eax, dword ptr [ebx + 0x44]
// 00571e66  8b4b40               mov ecx, dword ptr [ebx + 0x40]
// 00571e69  7427                 je 0x571e92
// 00571e6b  0fb65408ff           movzx edx, byte ptr [eax + ecx - 1]
// 00571e70  03c1                 add eax, ecx
// 00571e72  8a48fe               mov cl, byte ptr [eax - 2]
// 00571e75  8854241c             mov byte ptr [esp + 0x1c], dl
// 00571e79  0fb650fd             movzx edx, byte ptr [eax - 3]
// 00571e7d  8a40fc               mov al, byte ptr [eax - 4]
// 00571e80  884c241d             mov byte ptr [esp + 0x1d], cl
// 00571e84  8854241e             mov byte ptr [esp + 0x1e], dl
// 00571e88  8844241f             mov byte ptr [esp + 0x1f], al
// 00571e8c  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00571e90  eb04                 jmp 0x571e96
// 00571e92  8b4401fc             mov eax, dword ptr [ecx + eax - 4]
// 00571e96  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 00571e99  2bc1                 sub eax, ecx
// 00571e9b  894344               mov dword ptr [ebx + 0x44], eax
// 00571e9e  7805                 js 0x571ea5
// 00571ea0  3b433c               cmp eax, dword ptr [ebx + 0x3c]
// 00571ea3  7e0b                 jle 0x571eb0
// 00571ea5  03c1                 add eax, ecx
// 00571ea7  55                   push ebp
// 00571ea8  50                   push eax
// 00571ea9  8bcb                 mov ecx, ebx
// 00571eab  e8a0280000           call 0x574750
// 00571eb0  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 00571eb3  8b5344               mov edx, dword ptr [ebx + 0x44]
// 00571eb6  8d441128             lea eax, [ecx + edx + 0x28]
// 00571eba  2bc1                 sub eax, ecx
// 00571ebc  894344               mov dword ptr [ebx + 0x44], eax
// 00571ebf  7805                 js 0x571ec6
// 00571ec1  3b433c               cmp eax, dword ptr [ebx + 0x3c]
// 00571ec4  7e0b                 jle 0x571ed1
// 00571ec6  03c1                 add eax, ecx
// 00571ec8  55                   push ebp
// 00571ec9  50                   push eax
// 00571eca  8bcb                 mov ecx, ebx
// 00571ecc  e87f280000           call 0x574750
// 00571ed1  896c2430             mov dword ptr [esp + 0x30], ebp
// 00571ed5  896c2434             mov dword ptr [esp + 0x34], ebp
// 00571ed9  896c242c             mov dword ptr [esp + 0x2c], ebp
// 00571edd  6a01                 push 1
// 00571edf  57                   push edi
// 00571ee0  8d4c2434             lea ecx, [esp + 0x34]
// 00571ee4  c78424e800000002000000 mov dword ptr [esp + 0xe8], 2
// 00571eef  e8ccefffff           call 0x570ec0
// 00571ef4  3bfd                 cmp edi, ebp
// 00571ef6  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 00571efa  0f8ec5000000         jle 0x571fc5
// 00571f00  8b442418             mov eax, dword ptr [esp + 0x18]
// 00571f04  8d7d01               lea edi, [ebp + 1]
// 00571f07  89442418             mov dword ptr [esp + 0x18], eax
// 00571f0b  eb03                 jmp 0x571f10
// 00571f0d  8d4900               lea ecx, [ecx]
// 00571f10  8b4344               mov eax, dword ptr [ebx + 0x44]
// 00571f13  8d4801               lea ecx, [eax + 1]
// 00571f16  3b4b3c               cmp ecx, dword ptr [ebx + 0x3c]
// 00571f19  7e0f                 jle 0x571f2a
// 00571f1b  8b5334               mov edx, dword ptr [ebx + 0x34]
// 00571f1e  6a01                 push 1
// 00571f20  03d0                 add edx, eax
// 00571f22  52                   push edx
// 00571f23  8bcb                 mov ecx, ebx
// 00571f25  e826280000           call 0x574750
// 00571f2a  8b4344               mov eax, dword ptr [ebx + 0x44]
// 00571f2d  8b4b40               mov ecx, dword ptr [ebx + 0x40]
// 00571f30  8a0c08               mov cl, byte ptr [eax + ecx]
// 00571f33  40                   inc eax
// 00571f34  894344               mov dword ptr [ebx + 0x44], eax
// 00571f37  884f01               mov byte ptr [edi + 1], cl
// 00571f3a  8b4344               mov eax, dword ptr [ebx + 0x44]
// 00571f3d  8d5001               lea edx, [eax + 1]
// 00571f40  3b533c               cmp edx, dword ptr [ebx + 0x3c]
// 00571f43  7e0f                 jle 0x571f54
// 00571f45  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 00571f48  03c8                 add ecx, eax
// 00571f4a  6a01                 push 1
// 00571f4c  51                   push ecx
// 00571f4d  8bcb                 mov ecx, ebx
// 00571f4f  e8fc270000           call 0x574750
// 00571f54  8b4344               mov eax, dword ptr [ebx + 0x44]
// 00571f57  8b5340               mov edx, dword ptr [ebx + 0x40]
// 00571f5a  8a0c10               mov cl, byte ptr [eax + edx]
// 00571f5d  40                   inc eax
// 00571f5e  894344               mov dword ptr [ebx + 0x44], eax
// 00571f61  880f                 mov byte ptr [edi], cl
// 00571f63  8b4344               mov eax, dword ptr [ebx + 0x44]
// 00571f66  8d4801               lea ecx, [eax + 1]
// 00571f69  3b4b3c               cmp ecx, dword ptr [ebx + 0x3c]
// 00571f6c  7e0f                 jle 0x571f7d
// 00571f6e  8b5334               mov edx, dword ptr [ebx + 0x34]
// 00571f71  6a01                 push 1
// 00571f73  03d0                 add edx, eax
// 00571f75  52                   push edx
// 00571f76  8bcb                 mov ecx, ebx
// 00571f78  e8d3270000           call 0x574750
// 00571f7d  8b4344               mov eax, dword ptr [ebx + 0x44]
// 00571f80  8b4b40               mov ecx, dword ptr [ebx + 0x40]
// 00571f83  8a0c08               mov cl, byte ptr [eax + ecx]
// 00571f86  40                   inc eax
// 00571f87  894344               mov dword ptr [ebx + 0x44], eax
// 00571f8a  884fff               mov byte ptr [edi - 1], cl
// 00571f8d  8b4344               mov eax, dword ptr [ebx + 0x44]
// 00571f90  8d5001               lea edx, [eax + 1]
// 00571f93  3b533c               cmp edx, dword ptr [ebx + 0x3c]
// 00571f96  7e0f                 jle 0x571fa7
// 00571f98  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 00571f9b  03c8                 add ecx, eax
// 00571f9d  6a01                 push 1
// 00571f9f  51                   push ecx
// 00571fa0  8bcb                 mov ecx, ebx
// 00571fa2  e8a9270000           call 0x574750
// 00571fa7  8b4344               mov eax, dword ptr [ebx + 0x44]
// 00571faa  8b5340               mov edx, dword ptr [ebx + 0x40]
// 00571fad  8a0c10               mov cl, byte ptr [eax + edx]
// 00571fb0  40                   inc eax
// 00571fb1  894344               mov dword ptr [ebx + 0x44], eax
// 00571fb4  884f02               mov byte ptr [edi + 2], cl
// 00571fb7  83c704               add edi, 4
// 00571fba  836c241801           sub dword ptr [esp + 0x18], 1
// 00571fbf  0f854bffffff         jne 0x571f10
// 00571fc5  8b460c               mov eax, dword ptr [esi + 0xc]
// 00571fc8  83caff               or edx, 0xffffffff
// 00571fcb  85c0                 test eax, eax
// 00571fcd  7d15                 jge 0x571fe4
// 00571fcf  f7d8                 neg eax
// 00571fd1  89460c               mov dword ptr [esi + 0xc], eax
// 00571fd4  33c9                 xor ecx, ecx
// 00571fd6  89442428             mov dword ptr [esp + 0x28], eax
// 00571fda  c744242401000000     mov dword ptr [esp + 0x24], 1
// 00571fe2  eb0b                 jmp 0x571fef
// 00571fe4  8d48ff               lea ecx, [eax - 1]
// 00571fe7  89542428             mov dword ptr [esp + 0x28], edx
// 00571feb  89542424             mov dword ptr [esp + 0x24], edx
// 00571fef  8b442410             mov eax, dword ptr [esp + 0x10]
// 00571ff3  83f801               cmp eax, 1
// 00571ff6  0f8506030000         jne 0x572302
// 00571ffc  8b4608               mov eax, dword ptr [esi + 8]
// 00571fff  83c007               add eax, 7
// 00572002  c1f803               sar eax, 3
// 00572005  8bd0                 mov edx, eax
// 00572007  83e203               and edx, 3
// 0057200a  8944241c             mov dword ptr [esp + 0x1c], eax
// 0057200e  740d                 je 0x57201d
// 00572010  bf04000000           mov edi, 4
// 00572015  2bfa                 sub edi, edx
// 00572017  03c7                 add eax, edi
// 00572019  8944241c             mov dword ptr [esp + 0x1c], eax
// 0057201d  894c2418             mov dword ptr [esp + 0x18], ecx
// 00572021  3b4c2428             cmp ecx, dword ptr [esp + 0x28]
// 00572025  0f84cd040000         je 0x5724f8
// 0057202b  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0057202f  90                   nop 
// 00572030  8b7e08               mov edi, dword ptr [esi + 8]
// 00572033  0faff9               imul edi, ecx
// 00572036  33c0                 xor eax, eax
// 00572038  89442410             mov dword ptr [esp + 0x10], eax
// 0057203c  8d3c7f               lea edi, [edi + edi*2]
// 0057203f  85d2                 test edx, edx
// 00572041  0f8ea4020000         jle 0x5722eb
// 00572047  89542420             mov dword ptr [esp + 0x20], edx
// 0057204b  eb03                 jmp 0x572050
// 0057204d  8d4900               lea ecx, [ecx]
// 00572050  8b4b44               mov ecx, dword ptr [ebx + 0x44]
// 00572053  8d5101               lea edx, [ecx + 1]
// 00572056  3b533c               cmp edx, dword ptr [ebx + 0x3c]
// 00572059  7e13                 jle 0x57206e
// 0057205b  8b4334               mov eax, dword ptr [ebx + 0x34]
// 0057205e  03c1                 add eax, ecx
// 00572060  6a01                 push 1
// 00572062  50                   push eax
// 00572063  8bcb                 mov ecx, ebx
// 00572065  e8e6260000           call 0x574750
// 0057206a  8b442410             mov eax, dword ptr [esp + 0x10]
// 0057206e  8b5344               mov edx, dword ptr [ebx + 0x44]
// 00572071  8b4b40               mov ecx, dword ptr [ebx + 0x40]
// 00572074  8a0c0a               mov cl, byte ptr [edx + ecx]
// 00572077  42                   inc edx
// 00572078  895344               mov dword ptr [ebx + 0x44], edx
// 0057207b  3b4608               cmp eax, dword ptr [esi + 8]
// 0057207e  884c2417             mov byte ptr [esp + 0x17], cl
// 00572082  0f8d50020000         jge 0x5722d8
// 00572088  8b5604               mov edx, dword ptr [esi + 4]
// 0057208b  0fb6c9               movzx ecx, cl
// 0057208e  c1e907               shr ecx, 7
// 00572091  894c2410             mov dword ptr [esp + 0x10], ecx
// 00572095  0fb64c8d00           movzx ecx, byte ptr [ebp + ecx*4]
// 0057209a  880c17               mov byte ptr [edi + edx], cl
// 0057209d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005720a1  0fb64c8d01           movzx ecx, byte ptr [ebp + ecx*4 + 1]
// 005720a6  8b5604               mov edx, dword ptr [esi + 4]
// 005720a9  884c3a01             mov byte ptr [edx + edi + 1], cl
// 005720ad  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005720b1  0fb64c8d02           movzx ecx, byte ptr [ebp + ecx*4 + 2]
// 005720b6  8b5604               mov edx, dword ptr [esi + 4]
// 005720b9  884c3a02             mov byte ptr [edx + edi + 2], cl
// 005720bd  8a4c2417             mov cl, byte ptr [esp + 0x17]
// 005720c1  40                   inc eax
// 005720c2  83c704               add edi, 4
// 005720c5  3b4608               cmp eax, dword ptr [esi + 8]
// 005720c8  89442410             mov dword ptr [esp + 0x10], eax
// 005720cc  0f8d06020000         jge 0x5722d8
// 005720d2  8b5604               mov edx, dword ptr [esi + 4]
// 005720d5  0fb6c9               movzx ecx, cl
// 005720d8  c1e906               shr ecx, 6
// 005720db  83e101               and ecx, 1
// 005720de  894c2410             mov dword ptr [esp + 0x10], ecx
// 005720e2  0fb64c8d00           movzx ecx, byte ptr [ebp + ecx*4]
// 005720e7  880c17               mov byte ptr [edi + edx], cl
// 005720ea  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005720ee  0fb64c8d01           movzx ecx, byte ptr [ebp + ecx*4 + 1]
// 005720f3  8b5604               mov edx, dword ptr [esi + 4]
// 005720f6  884c3a01             mov byte ptr [edx + edi + 1], cl
// 005720fa  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005720fe  0fb64c8d02           movzx ecx, byte ptr [ebp + ecx*4 + 2]
// 00572103  8b5604               mov edx, dword ptr [esi + 4]
// 00572106  884c3a02             mov byte ptr [edx + edi + 2], cl
// 0057210a  8a4c2417             mov cl, byte ptr [esp + 0x17]
// 0057210e  40                   inc eax
// 0057210f  83c704               add edi, 4
// 00572112  3b4608               cmp eax, dword ptr [esi + 8]
// 00572115  89442410             mov dword ptr [esp + 0x10], eax
// 00572119  0f8db9010000         jge 0x5722d8
// 0057211f  8b5604               mov edx, dword ptr [esi + 4]
// 00572122  0fb6c9               movzx ecx, cl
// 00572125  c1e905               shr ecx, 5
// 00572128  83e101               and ecx, 1
// 0057212b  894c2410             mov dword ptr [esp + 0x10], ecx
// 0057212f  0fb64c8d00           movzx ecx, byte ptr [ebp + ecx*4]
// 00572134  880c17               mov byte ptr [edi + edx], cl
// 00572137  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0057213b  0fb64c8d01           movzx ecx, byte ptr [ebp + ecx*4 + 1]
// 00572140  8b5604               mov edx, dword ptr [esi + 4]
// 00572143  884c3a01             mov byte ptr [edx + edi + 1], cl
// 00572147  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0057214b  0fb64c8d02           movzx ecx, byte ptr [ebp + ecx*4 + 2]
// 00572150  8b5604               mov edx, dword ptr [esi + 4]
// 00572153  884c3a02             mov byte ptr [edx + edi + 2], cl
// 00572157  8a4c2417             mov cl, byte ptr [esp + 0x17]
// 0057215b  40                   inc eax
// 0057215c  83c704               add edi, 4
// 0057215f  3b4608               cmp eax, dword ptr [esi + 8]
// 00572162  89442410             mov dword ptr [esp + 0x10], eax
// 00572166  0f8d6c010000         jge 0x5722d8
// 0057216c  8b5604               mov edx, dword ptr [esi + 4]
// 0057216f  0fb6c9               movzx ecx, cl
// 00572172  c1e904               shr ecx, 4
// 00572175  83e101               and ecx, 1
// 00572178  894c2410             mov dword ptr [esp + 0x10], ecx
// 0057217c  0fb64c8d00           movzx ecx, byte ptr [ebp + ecx*4]
// 00572181  880c17               mov byte ptr [edi + edx], cl
// 00572184  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00572188  0fb64c8d01           movzx ecx, byte ptr [ebp + ecx*4 + 1]
// 0057218d  8b5604               mov edx, dword ptr [esi + 4]
// 00572190  884c3a01             mov byte ptr [edx + edi + 1], cl
// 00572194  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00572198  0fb64c8d02           movzx ecx, byte ptr [ebp + ecx*4 + 2]
// 0057219d  8b5604               mov edx, dword ptr [esi + 4]
// 005721a0  884c3a02             mov byte ptr [edx + edi + 2], cl
// 005721a4  8a4c2417             mov cl, byte ptr [esp + 0x17]
// 005721a8  40                   inc eax
// 005721a9  83c704               add edi, 4
// 005721ac  3b4608               cmp eax, dword ptr [esi + 8]
// 005721af  89442410             mov dword ptr [esp + 0x10], eax
// 005721b3  0f8d1f010000         jge 0x5722d8
// 005721b9  8b5604               mov edx, dword ptr [esi + 4]
// 005721bc  0fb6c9               movzx ecx, cl
// 005721bf  c1e903               shr ecx, 3
// 005721c2  83e101               and ecx, 1
// 005721c5  894c2410             mov dword ptr [esp + 0x10], ecx
// 005721c9  0fb64c8d00           movzx ecx, byte ptr [ebp + ecx*4]
// 005721ce  880c17               mov byte ptr [edi + edx], cl
// 005721d1  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005721d5  0fb64c8d01           movzx ecx, byte ptr [ebp + ecx*4 + 1]
// 005721da  8b5604               mov edx, dword ptr [esi + 4]
// 005721dd  884c3a01             mov byte ptr [edx + edi + 1], cl
// 005721e1  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005721e5  0fb64c8d02           movzx ecx, byte ptr [ebp + ecx*4 + 2]
// 005721ea  8b5604               mov edx, dword ptr [esi + 4]
// 005721ed  884c3a02             mov byte ptr [edx + edi + 2], cl
// 005721f1  8a4c2417             mov cl, byte ptr [esp + 0x17]
// 005721f5  40                   inc eax
// 005721f6  83c704               add edi, 4
// 005721f9  3b4608               cmp eax, dword ptr [esi + 8]
// 005721fc  89442410             mov dword ptr [esp + 0x10], eax
// 00572200  0f8dd2000000         jge 0x5722d8
// 00572206  8b5604               mov edx, dword ptr [esi + 4]
// 00572209  0fb6c9               movzx ecx, cl
// 0057220c  c1e902               shr ecx, 2
// 0057220f  83e101               and ecx, 1
// 00572212  894c2410             mov dword ptr [esp + 0x10], ecx
// 00572216  0fb64c8d00           movzx ecx, byte ptr [ebp + ecx*4]
// 0057221b  880c17               mov byte ptr [edi + edx], cl
// 0057221e  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00572222  0fb64c8d01           movzx ecx, byte ptr [ebp + ecx*4 + 1]
// 00572227  8b5604               mov edx, dword ptr [esi + 4]
// 0057222a  884c3a01             mov byte ptr [edx + edi + 1], cl
// 0057222e  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00572232  0fb64c8d02           movzx ecx, byte ptr [ebp + ecx*4 + 2]
// 00572237  8b5604               mov edx, dword ptr [esi + 4]
// 0057223a  884c3a02             mov byte ptr [edx + edi + 2], cl
// 0057223e  8a4c2417             mov cl, byte ptr [esp + 0x17]
// 00572242  40                   inc eax
// 00572243  83c704               add edi, 4
// 00572246  3b4608               cmp eax, dword ptr [esi + 8]
// 00572249  89442410             mov dword ptr [esp + 0x10], eax
// 0057224d  0f8d85000000         jge 0x5722d8
// 00572253  8b5604               mov edx, dword ptr [esi + 4]
// 00572256  0fb6c9               movzx ecx, cl
// 00572259  d1e9                 shr ecx, 1
// 0057225b  83e101               and ecx, 1
// 0057225e  894c2410             mov dword ptr [esp + 0x10], ecx
// 00572262  0fb64c8d00           movzx ecx, byte ptr [ebp + ecx*4]
// 00572267  880c17               mov byte ptr [edi + edx], cl
// 0057226a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0057226e  0fb64c8d01           movzx ecx, byte ptr [ebp + ecx*4 + 1]
// 00572273  8b5604               mov edx, dword ptr [esi + 4]
// 00572276  884c3a01             mov byte ptr [edx + edi + 1], cl
// 0057227a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0057227e  0fb64c8d02           movzx ecx, byte ptr [ebp + ecx*4 + 2]
// 00572283  8b5604               mov edx, dword ptr [esi + 4]
// 00572286  884c3a02             mov byte ptr [edx + edi + 2], cl
// 0057228a  8a4c2417             mov cl, byte ptr [esp + 0x17]
// 0057228e  40                   inc eax
// 0057228f  83c704               add edi, 4
// 00572292  3b4608               cmp eax, dword ptr [esi + 8]
// 00572295  89442410             mov dword ptr [esp + 0x10], eax
// 00572299  7d3d                 jge 0x5722d8
// 0057229b  8b5604               mov edx, dword ptr [esi + 4]
// 0057229e  0fb6c9               movzx ecx, cl
// 005722a1  83e101               and ecx, 1
// 005722a4  894c2410             mov dword ptr [esp + 0x10], ecx
// 005722a8  0fb64c8d00           movzx ecx, byte ptr [ebp + ecx*4]
// 005722ad  880c17               mov byte ptr [edi + edx], cl
// 005722b0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005722b4  0fb64c8d01           movzx ecx, byte ptr [ebp + ecx*4 + 1]
// 005722b9  8b5604               mov edx, dword ptr [esi + 4]
// 005722bc  884c3a01             mov byte ptr [edx + edi + 1], cl
// 005722c0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005722c4  0fb64c8d02           movzx ecx, byte ptr [ebp + ecx*4 + 2]
// 005722c9  8b5604               mov edx, dword ptr [esi + 4]
// 005722cc  40                   inc eax
// 005722cd  884c3a02             mov byte ptr [edx + edi + 2], cl
// 005722d1  89442410             mov dword ptr [esp + 0x10], eax
// 005722d5  83c704               add edi, 4
// 005722d8  836c242001           sub dword ptr [esp + 0x20], 1
// 005722dd  0f856dfdffff         jne 0x572050
// 005722e3  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005722e7  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005722eb  034c2424             add ecx, dword ptr [esp + 0x24]
// 005722ef  894c2418             mov dword ptr [esp + 0x18], ecx
// 005722f3  3b4c2428             cmp ecx, dword ptr [esp + 0x28]
// 005722f7  0f8533fdffff         jne 0x572030
// 005722fd  e9f6010000           jmp 0x5724f8
// 00572302  83f804               cmp eax, 4
// 00572305  0f8521010000         jne 0x57242c
// 0057230b  8b4608               mov eax, dword ptr [esi + 8]
// 0057230e  40                   inc eax
// 0057230f  d1f8                 sar eax, 1
// 00572311  8bd0                 mov edx, eax
// 00572313  83e203               and edx, 3
// 00572316  89442420             mov dword ptr [esp + 0x20], eax
// 0057231a  740d                 je 0x572329
// 0057231c  bf04000000           mov edi, 4
// 00572321  2bfa                 sub edi, edx
// 00572323  03c7                 add eax, edi
// 00572325  89442420             mov dword ptr [esp + 0x20], eax
// 00572329  894c2418             mov dword ptr [esp + 0x18], ecx
// 0057232d  3b4c2428             cmp ecx, dword ptr [esp + 0x28]
// 00572331  0f84c1010000         je 0x5724f8
// 00572337  eb07                 jmp 0x572340
// 00572339  8da42400000000       lea esp, [esp]
// 00572340  8b7e08               mov edi, dword ptr [esi + 8]
// 00572343  8b442418             mov eax, dword ptr [esp + 0x18]
// 00572347  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0057234b  0faff8               imul edi, eax
// 0057234e  03ff                 add edi, edi
// 00572350  03ff                 add edi, edi
// 00572352  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0057235a  85c9                 test ecx, ecx
// 0057235c  0f8eb3000000         jle 0x572415
// 00572362  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00572366  8b4344               mov eax, dword ptr [ebx + 0x44]
// 00572369  8d5001               lea edx, [eax + 1]
// 0057236c  3b533c               cmp edx, dword ptr [ebx + 0x3c]
// 0057236f  7e0f                 jle 0x572380
// 00572371  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 00572374  03c8                 add ecx, eax
// 00572376  6a01                 push 1
// 00572378  51                   push ecx
// 00572379  8bcb                 mov ecx, ebx
// 0057237b  e8d0230000           call 0x574750
// 00572380  8b4344               mov eax, dword ptr [ebx + 0x44]
// 00572383  8b5340               mov edx, dword ptr [ebx + 0x40]
// 00572386  8a0c10               mov cl, byte ptr [eax + edx]
// 00572389  8b542410             mov edx, dword ptr [esp + 0x10]
// 0057238d  40                   inc eax
// 0057238e  0fb6c9               movzx ecx, cl
// 00572391  894344               mov dword ptr [ebx + 0x44], eax
// 00572394  8bc1                 mov eax, ecx
// 00572396  83e10f               and ecx, 0xf
// 00572399  c1e804               shr eax, 4
// 0057239c  3b5608               cmp edx, dword ptr [esi + 8]
// 0057239f  894c243c             mov dword ptr [esp + 0x3c], ecx
// 005723a3  7d2e                 jge 0x5723d3
// 005723a5  0fb6548500           movzx edx, byte ptr [ebp + eax*4]
// 005723aa  8b4e04               mov ecx, dword ptr [esi + 4]
// 005723ad  ff442410             inc dword ptr [esp + 0x10]
// 005723b1  88140f               mov byte ptr [edi + ecx], dl
// 005723b4  0fb6548501           movzx edx, byte ptr [ebp + eax*4 + 1]
// 005723b9  8b4e04               mov ecx, dword ptr [esi + 4]
// 005723bc  88543901             mov byte ptr [ecx + edi + 1], dl
// 005723c0  0fb6548502           movzx edx, byte ptr [ebp + eax*4 + 2]
// 005723c5  8b4e04               mov ecx, dword ptr [esi + 4]
// 005723c8  88543902             mov byte ptr [ecx + edi + 2], dl
// 005723cc  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 005723d0  83c704               add edi, 4
// 005723d3  8b442410             mov eax, dword ptr [esp + 0x10]
// 005723d7  3b4608               cmp eax, dword ptr [esi + 8]
// 005723da  7d2a                 jge 0x572406
// 005723dc  0fb6448d00           movzx eax, byte ptr [ebp + ecx*4]
// 005723e1  8b5604               mov edx, dword ptr [esi + 4]
// 005723e4  ff442410             inc dword ptr [esp + 0x10]
// 005723e8  880417               mov byte ptr [edi + edx], al
// 005723eb  0fb6448d01           movzx eax, byte ptr [ebp + ecx*4 + 1]
// 005723f0  8b5604               mov edx, dword ptr [esi + 4]
// 005723f3  88443a01             mov byte ptr [edx + edi + 1], al
// 005723f7  0fb6448d02           movzx eax, byte ptr [ebp + ecx*4 + 2]
// 005723fc  8b5604               mov edx, dword ptr [esi + 4]
// 005723ff  88443a02             mov byte ptr [edx + edi + 2], al
// 00572403  83c704               add edi, 4
// 00572406  836c241c01           sub dword ptr [esp + 0x1c], 1
// 0057240b  0f8555ffffff         jne 0x572366
// 00572411  8b442418             mov eax, dword ptr [esp + 0x18]
// 00572415  03442424             add eax, dword ptr [esp + 0x24]
// 00572419  89442418             mov dword ptr [esp + 0x18], eax
// 0057241d  3b442428             cmp eax, dword ptr [esp + 0x28]
// 00572421  0f8519ffffff         jne 0x572340
// 00572427  e9cc000000           jmp 0x5724f8
// 0057242c  83f808               cmp eax, 8
// 0057242f  0f85c3000000         jne 0x5724f8
// 00572435  8b7e08               mov edi, dword ptr [esi + 8]
// 00572438  8bc7                 mov eax, edi
// 0057243a  83e003               and eax, 3
// 0057243d  897c241c             mov dword ptr [esp + 0x1c], edi
// 00572441  740d                 je 0x572450
// 00572443  ba04000000           mov edx, 4
// 00572448  2bd0                 sub edx, eax
// 0057244a  03fa                 add edi, edx
// 0057244c  897c241c             mov dword ptr [esp + 0x1c], edi
// 00572450  894c2418             mov dword ptr [esp + 0x18], ecx
// 00572454  3b4c2428             cmp ecx, dword ptr [esp + 0x28]
// 00572458  0f849a000000         je 0x5724f8
// 0057245e  8bff                 mov edi, edi
// 00572460  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00572468  85ff                 test edi, edi
// 0057246a  7e76                 jle 0x5724e2
// 0057246c  897c2420             mov dword ptr [esp + 0x20], edi
// 00572470  8b4344               mov eax, dword ptr [ebx + 0x44]
// 00572473  8d4801               lea ecx, [eax + 1]
// 00572476  3b4b3c               cmp ecx, dword ptr [ebx + 0x3c]
// 00572479  7e0f                 jle 0x57248a
// 0057247b  8b5334               mov edx, dword ptr [ebx + 0x34]
// 0057247e  6a01                 push 1
// 00572480  03d0                 add edx, eax
// 00572482  52                   push edx
// 00572483  8bcb                 mov ecx, ebx
// 00572485  e8c6220000           call 0x574750
// 0057248a  8b4344               mov eax, dword ptr [ebx + 0x44]
// 0057248d  8b4b40               mov ecx, dword ptr [ebx + 0x40]
// 00572490  8a0c08               mov cl, byte ptr [eax + ecx]
// 00572493  40                   inc eax
// 00572494  894344               mov dword ptr [ebx + 0x44], eax
// 00572497  8b4608               mov eax, dword ptr [esi + 8]
// 0057249a  39442410             cmp dword ptr [esp + 0x10], eax
// 0057249e  7d3b                 jge 0x5724db
// 005724a0  0faf442418           imul eax, dword ptr [esp + 0x18]
// 005724a5  03442410             add eax, dword ptr [esp + 0x10]
// 005724a9  8b5604               mov edx, dword ptr [esi + 4]
// 005724ac  0fb6f9               movzx edi, cl
// 005724af  0fb64cbd00           movzx ecx, byte ptr [ebp + edi*4]
// 005724b4  03c0                 add eax, eax
// 005724b6  03c0                 add eax, eax
// 005724b8  ff442410             inc dword ptr [esp + 0x10]
// 005724bc  880c10               mov byte ptr [eax + edx], cl
// 005724bf  0fb64cbd01           movzx ecx, byte ptr [ebp + edi*4 + 1]
// 005724c4  8b5604               mov edx, dword ptr [esi + 4]
// 005724c7  884c0201             mov byte ptr [edx + eax + 1], cl
// 005724cb  0fb64cbd02           movzx ecx, byte ptr [ebp + edi*4 + 2]
// 005724d0  8b5604               mov edx, dword ptr [esi + 4]
// 005724d3  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 005724d7  884c0202             mov byte ptr [edx + eax + 2], cl
// 005724db  836c242001           sub dword ptr [esp + 0x20], 1
// 005724e0  758e                 jne 0x572470
// 005724e2  8b442418             mov eax, dword ptr [esp + 0x18]
// 005724e6  03442424             add eax, dword ptr [esp + 0x24]
// 005724ea  89442418             mov dword ptr [esp + 0x18], eax
// 005724ee  3b442428             cmp eax, dword ptr [esp + 0x28]
// 005724f2  0f8568ffffff         jne 0x572460
// 005724f8  8b5608               mov edx, dword ptr [esi + 8]
// 005724fb  89542420             mov dword ptr [esp + 0x20], edx
// 005724ff  db442420             fild dword ptr [esp + 0x20]
// 00572503  83ec08               sub esp, 8
// 00572506  dc0da8b68c00         fmul qword ptr [0x8cb6a8]
// 0057250c  dd1c24               fstp qword ptr [esp]
// 0057250f  ff15b8e88900         call dword ptr [0x89e8b8]
// 00572515  83c408               add esp, 8
// 00572518  e8a3791a00           call 0x719ec0
// 0057251d  8bc8                 mov ecx, eax
// 0057251f  83e103               and ecx, 3
// 00572522  89442418             mov dword ptr [esp + 0x18], eax
// 00572526  740d                 je 0x572535
// 00572528  ba04000000           mov edx, 4
// 0057252d  2bd1                 sub edx, ecx
// 0057252f  03c2                 add eax, edx
// 00572531  89442418             mov dword ptr [esp + 0x18], eax
// 00572535  8b460c               mov eax, dword ptr [esi + 0xc]
// 00572538  83e801               sub eax, 1
// 0057253b  8944241c             mov dword ptr [esp + 0x1c], eax
// 0057253f  0f8897000000         js 0x5725dc
// 00572545  eb09                 jmp 0x572550
// 00572547  8da42400000000       lea esp, [esp]
// 0057254e  8bff                 mov edi, edi
// 00572550  837c241800           cmp dword ptr [esp + 0x18], 0
// 00572555  c744242400000000     mov dword ptr [esp + 0x24], 0
// 0057255d  7e72                 jle 0x5725d1
// 0057255f  8b442418             mov eax, dword ptr [esp + 0x18]
// 00572563  89442420             mov dword ptr [esp + 0x20], eax
// 00572567  8b4344               mov eax, dword ptr [ebx + 0x44]
// 0057256a  8d4801               lea ecx, [eax + 1]
// 0057256d  3b4b3c               cmp ecx, dword ptr [ebx + 0x3c]
// 00572570  7e0f                 jle 0x572581
// 00572572  8b5334               mov edx, dword ptr [ebx + 0x34]
// 00572575  6a01                 push 1
// 00572577  03d0                 add edx, eax
// 00572579  52                   push edx
// 0057257a  8bcb                 mov ecx, ebx
// 0057257c  e8cf210000           call 0x574750
// 00572581  8b4344               mov eax, dword ptr [ebx + 0x44]
// 00572584  8b4b40               mov ecx, dword ptr [ebx + 0x40]
// 00572587  8a1408               mov dl, byte ptr [eax + ecx]
// 0057258a  40                   inc eax
// 0057258b  88542417             mov byte ptr [esp + 0x17], dl
// 0057258f  894344               mov dword ptr [ebx + 0x44], eax
// 00572592  33d2                 xor edx, edx
// 00572594  8b7e08               mov edi, dword ptr [esi + 8]
// 00572597  397c2424             cmp dword ptr [esp + 0x24], edi
// 0057259b  7d2d                 jge 0x5725ca
// 0057259d  0faf7c241c           imul edi, dword ptr [esp + 0x1c]
// 005725a2  0fb6442417           movzx eax, byte ptr [esp + 0x17]
// 005725a7  037c2424             add edi, dword ptr [esp + 0x24]
// 005725ab  ff442424             inc dword ptr [esp + 0x24]
// 005725af  b907000000           mov ecx, 7
// 005725b4  2aca                 sub cl, dl
// 005725b6  d3e8                 shr eax, cl
// 005725b8  8b4e04               mov ecx, dword ptr [esi + 4]
// 005725bb  42                   inc edx
// 005725bc  83e001               and eax, 1
// 005725bf  fec8                 dec al
// 005725c1  83fa08               cmp edx, 8
// 005725c4  8844b903             mov byte ptr [ecx + edi*4 + 3], al
// 005725c8  7cca                 jl 0x572594
// 005725ca  836c242001           sub dword ptr [esp + 0x20], 1
// 005725cf  7596                 jne 0x572567
// 005725d1  836c241c01           sub dword ptr [esp + 0x1c], 1
// 005725d6  0f8974ffffff         jns 0x572550
// 005725dc  55                   push ebp
// 005725dd  c78424e4000000ffffffff mov dword ptr [esp + 0xe4], 0xffffffff
// 005725e8  e8a38cffff           call 0x56b290
// 005725ed  8b8c24dc000000       mov ecx, dword ptr [esp + 0xdc]
// 005725f4  83c404               add esp, 4
// 005725f7  5f                   pop edi
// 005725f8  5e                   pop esi
// 005725f9  5d                   pop ebp
// 005725fa  5b                   pop ebx
// 005725fb  64890d00000000       mov dword ptr fs:[0], ecx
// 00572602  81c4d4000000         add esp, 0xd4
// 00572608  c20400               ret 4
// library g3d-6.09-rbx2008/G3Dcpp\GImage_bmp.cpp (function ?decodeICO@GImage@G3D@@AAEXAAVBinaryInput@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/GImage_bmp.cpp
