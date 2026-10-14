// roc 2010-06 00554be0  unit: seg_00550000  size: 2603 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00554be0
//
// 00554be0  6aff                 push -1
// 00554be2  6803129900           push 0x991203
// 00554be7  64a100000000         mov eax, dword ptr fs:[0]
// 00554bed  50                   push eax
// 00554bee  64892500000000       mov dword ptr fs:[0], esp
// 00554bf5  81ecc8000000         sub esp, 0xc8
// 00554bfb  53                   push ebx
// 00554bfc  8b9c24dc000000       mov ebx, dword ptr [esp + 0xdc]
// 00554c03  55                   push ebp
// 00554c04  56                   push esi
// 00554c05  8bf1                 mov esi, ecx
// 00554c07  8bcb                 mov ecx, ebx
// 00554c09  e8e2b5ffff           call 0x5501f0
// 00554c0e  8bcb                 mov ecx, ebx
// 00554c10  e8dbb5ffff           call 0x5501f0
// 00554c15  8bcb                 mov ecx, ebx
// 00554c17  e8d4b5ffff           call 0x5501f0
// 00554c1c  0fb7e8               movzx ebp, ax
// 00554c1f  c7461004000000       mov dword ptr [esi + 0x10], 4
// 00554c26  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 00554c29  896c241c             mov dword ptr [esp + 0x1c], ebp
// 00554c2d  85c9                 test ecx, ecx
// 00554c2f  7626                 jbe 0x554c57
// 00554c31  8d44241c             lea eax, [esp + 0x1c]
// 00554c35  50                   push eax
// 00554c36  8d4c242c             lea ecx, [esp + 0x2c]
// 00554c3a  c7442420f066a100     mov dword ptr [esp + 0x20], 0xa166f0
// 00554c42  ff1524a99e00         call dword ptr [0x9ea924]
// 00554c48  6878b6b000           push 0xb0b678
// 00554c4d  8d4c242c             lea ecx, [esp + 0x2c]
// 00554c51  51                   push ecx
// 00554c52  e85b3d2500           call 0x7a89b2
// 00554c57  8b5344               mov edx, dword ptr [ebx + 0x44]
// 00554c5a  8b4340               mov eax, dword ptr [ebx + 0x40]
// 00554c5d  03d1                 add edx, ecx
// 00554c5f  57                   push edi
// 00554c60  33c9                 xor ecx, ecx
// 00554c62  8d3c02               lea edi, [edx + eax]
// 00554c65  33c0                 xor eax, eax
// 00554c67  89542428             mov dword ptr [esp + 0x28], edx
// 00554c6b  894c2418             mov dword ptr [esp + 0x18], ecx
// 00554c6f  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00554c73  85ed                 test ebp, ebp
// 00554c75  7e44                 jle 0x554cbb
// 00554c77  897c2424             mov dword ptr [esp + 0x24], edi
// 00554c7b  eb03                 jmp 0x554c80
// 00554c7d  8d4900               lea ecx, [ecx]
// 00554c80  0fb617               movzx edx, byte ptr [edi]
// 00554c83  0fb67f01             movzx edi, byte ptr [edi + 1]
// 00554c87  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00554c8b  0faffa               imul edi, edx
// 00554c8e  0faf6c2418           imul ebp, dword ptr [esp + 0x18]
// 00554c93  3bfd                 cmp edi, ebp
// 00554c95  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00554c99  7e0e                 jle 0x554ca9
// 00554c9b  0fb64f01             movzx ecx, byte ptr [edi + 1]
// 00554c9f  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00554ca3  89542418             mov dword ptr [esp + 0x18], edx
// 00554ca7  8bc8                 mov ecx, eax
// 00554ca9  40                   inc eax
// 00554caa  83c710               add edi, 0x10
// 00554cad  3b442420             cmp eax, dword ptr [esp + 0x20]
// 00554cb1  897c2424             mov dword ptr [esp + 0x24], edi
// 00554cb5  7cc9                 jl 0x554c80
// 00554cb7  8b542428             mov edx, dword ptr [esp + 0x28]
// 00554cbb  8b4334               mov eax, dword ptr [ebx + 0x34]
// 00554cbe  c1e104               shl ecx, 4
// 00554cc1  03ca                 add ecx, edx
// 00554cc3  2bc8                 sub ecx, eax
// 00554cc5  894b44               mov dword ptr [ebx + 0x44], ecx
// 00554cc8  7805                 js 0x554ccf
// 00554cca  3b4b3c               cmp ecx, dword ptr [ebx + 0x3c]
// 00554ccd  7e0f                 jle 0x554cde
// 00554ccf  33ed                 xor ebp, ebp
// 00554cd1  03c8                 add ecx, eax
// 00554cd3  55                   push ebp
// 00554cd4  51                   push ecx
// 00554cd5  8bcb                 mov ecx, ebx
// 00554cd7  e8743b0000           call 0x558850
// 00554cdc  eb02                 jmp 0x554ce0
// 00554cde  33ed                 xor ebp, ebp
// 00554ce0  8b4344               mov eax, dword ptr [ebx + 0x44]
// 00554ce3  8d4801               lea ecx, [eax + 1]
// 00554ce6  3b4b3c               cmp ecx, dword ptr [ebx + 0x3c]
// 00554ce9  7e0f                 jle 0x554cfa
// 00554ceb  8b5334               mov edx, dword ptr [ebx + 0x34]
// 00554cee  6a01                 push 1
// 00554cf0  03d0                 add edx, eax
// 00554cf2  52                   push edx
// 00554cf3  8bcb                 mov ecx, ebx
// 00554cf5  e8563b0000           call 0x558850
// 00554cfa  8b4344               mov eax, dword ptr [ebx + 0x44]
// 00554cfd  8b4b40               mov ecx, dword ptr [ebx + 0x40]
// 00554d00  8a0c08               mov cl, byte ptr [eax + ecx]
// 00554d03  40                   inc eax
// 00554d04  0fb6d1               movzx edx, cl
// 00554d07  894344               mov dword ptr [ebx + 0x44], eax
// 00554d0a  895608               mov dword ptr [esi + 8], edx
// 00554d0d  8b4344               mov eax, dword ptr [ebx + 0x44]
// 00554d10  8d4801               lea ecx, [eax + 1]
// 00554d13  3b4b3c               cmp ecx, dword ptr [ebx + 0x3c]
// 00554d16  7e0f                 jle 0x554d27
// 00554d18  8b5334               mov edx, dword ptr [ebx + 0x34]
// 00554d1b  6a01                 push 1
// 00554d1d  03d0                 add edx, eax
// 00554d1f  52                   push edx
// 00554d20  8bcb                 mov ecx, ebx
// 00554d22  e8293b0000           call 0x558850
// 00554d27  8b4344               mov eax, dword ptr [ebx + 0x44]
// 00554d2a  8b4b40               mov ecx, dword ptr [ebx + 0x40]
// 00554d2d  8a0c08               mov cl, byte ptr [eax + ecx]
// 00554d30  40                   inc eax
// 00554d31  0fb6d1               movzx edx, cl
// 00554d34  894344               mov dword ptr [ebx + 0x44], eax
// 00554d37  89560c               mov dword ptr [esi + 0xc], edx
// 00554d3a  8b4344               mov eax, dword ptr [ebx + 0x44]
// 00554d3d  8d4801               lea ecx, [eax + 1]
// 00554d40  3b4b3c               cmp ecx, dword ptr [ebx + 0x3c]
// 00554d43  7e0f                 jle 0x554d54
// 00554d45  8b5334               mov edx, dword ptr [ebx + 0x34]
// 00554d48  6a01                 push 1
// 00554d4a  03d0                 add edx, eax
// 00554d4c  52                   push edx
// 00554d4d  8bcb                 mov ecx, ebx
// 00554d4f  e8fc3a0000           call 0x558850
// 00554d54  8b4344               mov eax, dword ptr [ebx + 0x44]
// 00554d57  8b4b40               mov ecx, dword ptr [ebx + 0x40]
// 00554d5a  8a0c08               mov cl, byte ptr [eax + ecx]
// 00554d5d  40                   inc eax
// 00554d5e  894344               mov dword ptr [ebx + 0x44], eax
// 00554d61  8b560c               mov edx, dword ptr [esi + 0xc]
// 00554d64  0faf5610             imul edx, dword ptr [esi + 0x10]
// 00554d68  0faf5608             imul edx, dword ptr [esi + 8]
// 00554d6c  0fb6f9               movzx edi, cl
// 00554d6f  52                   push edx
// 00554d70  897c241c             mov dword ptr [esp + 0x1c], edi
// 00554d74  e8275efbff           call 0x50aba0
// 00554d79  894604               mov dword ptr [esi + 4], eax
// 00554d7c  8bc7                 mov eax, edi
// 00554d7e  83c404               add esp, 4
// 00554d81  2bc5                 sub eax, ebp
// 00554d83  7469                 je 0x554dee
// 00554d85  83e802               sub eax, 2
// 00554d88  745a                 je 0x554de4
// 00554d8a  83e80e               sub eax, 0xe
// 00554d8d  744b                 je 0x554dda
// 00554d8f  68d003a200           push 0xa203d0
// 00554d94  8d4c2444             lea ecx, [esp + 0x44]
// 00554d98  ff1510a49e00         call dword ptr [0x9ea410]
// 00554d9e  8d44245c             lea eax, [esp + 0x5c]
// 00554da2  50                   push eax
// 00554da3  8bcb                 mov ecx, ebx
// 00554da5  89ac24e4000000       mov dword ptr [esp + 0xe4], ebp
// 00554dac  e8bfb3ffff           call 0x550170
// 00554db1  50                   push eax
// 00554db2  8d4c2444             lea ecx, [esp + 0x44]
// 00554db6  51                   push ecx
// 00554db7  8d8c2480000000       lea ecx, [esp + 0x80]
// 00554dbe  c68424e800000001     mov byte ptr [esp + 0xe8], 1
// 00554dc6  e835ecf2ff           call 0x483a00
// 00554dcb  6894edb000           push 0xb0ed94
// 00554dd0  8d54247c             lea edx, [esp + 0x7c]
// 00554dd4  52                   push edx
// 00554dd5  e8d83b2500           call 0x7a89b2
// 00554dda  c744241004000000     mov dword ptr [esp + 0x10], 4
// 00554de2  eb1b                 jmp 0x554dff
// 00554de4  c744241001000000     mov dword ptr [esp + 0x10], 1
// 00554dec  eb11                 jmp 0x554dff
// 00554dee  bf00010000           mov edi, 0x100
// 00554df3  897c2418             mov dword ptr [esp + 0x18], edi
// 00554df7  c744241008000000     mov dword ptr [esp + 0x10], 8
// 00554dff  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 00554e02  8b4344               mov eax, dword ptr [ebx + 0x44]
// 00554e05  8d440105             lea eax, [ecx + eax + 5]
// 00554e09  2bc1                 sub eax, ecx
// 00554e0b  894344               mov dword ptr [ebx + 0x44], eax
// 00554e0e  7805                 js 0x554e15
// 00554e10  3b433c               cmp eax, dword ptr [ebx + 0x3c]
// 00554e13  7e0b                 jle 0x554e20
// 00554e15  03c1                 add eax, ecx
// 00554e17  55                   push ebp
// 00554e18  50                   push eax
// 00554e19  8bcb                 mov ecx, ebx
// 00554e1b  e8303a0000           call 0x558850
// 00554e20  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 00554e23  8b5344               mov edx, dword ptr [ebx + 0x44]
// 00554e26  8d441104             lea eax, [ecx + edx + 4]
// 00554e2a  2bc1                 sub eax, ecx
// 00554e2c  894344               mov dword ptr [ebx + 0x44], eax
// 00554e2f  7805                 js 0x554e36
// 00554e31  3b433c               cmp eax, dword ptr [ebx + 0x3c]
// 00554e34  7e0b                 jle 0x554e41
// 00554e36  03c1                 add eax, ecx
// 00554e38  55                   push ebp
// 00554e39  50                   push eax
// 00554e3a  8bcb                 mov ecx, ebx
// 00554e3c  e80f3a0000           call 0x558850
// 00554e41  8b4344               mov eax, dword ptr [ebx + 0x44]
// 00554e44  8d4804               lea ecx, [eax + 4]
// 00554e47  3b4b3c               cmp ecx, dword ptr [ebx + 0x3c]
// 00554e4a  7e0f                 jle 0x554e5b
// 00554e4c  8b5334               mov edx, dword ptr [ebx + 0x34]
// 00554e4f  6a04                 push 4
// 00554e51  03d0                 add edx, eax
// 00554e53  52                   push edx
// 00554e54  8bcb                 mov ecx, ebx
// 00554e56  e8f5390000           call 0x558850
// 00554e5b  83434404             add dword ptr [ebx + 0x44], 4
// 00554e5f  807b2400             cmp byte ptr [ebx + 0x24], 0
// 00554e63  8b4344               mov eax, dword ptr [ebx + 0x44]
// 00554e66  8b4b40               mov ecx, dword ptr [ebx + 0x40]
// 00554e69  7427                 je 0x554e92
// 00554e6b  0fb65408ff           movzx edx, byte ptr [eax + ecx - 1]
// 00554e70  03c1                 add eax, ecx
// 00554e72  8a48fe               mov cl, byte ptr [eax - 2]
// 00554e75  8854241c             mov byte ptr [esp + 0x1c], dl
// 00554e79  0fb650fd             movzx edx, byte ptr [eax - 3]
// 00554e7d  8a40fc               mov al, byte ptr [eax - 4]
// 00554e80  884c241d             mov byte ptr [esp + 0x1d], cl
// 00554e84  8854241e             mov byte ptr [esp + 0x1e], dl
// 00554e88  8844241f             mov byte ptr [esp + 0x1f], al
// 00554e8c  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00554e90  eb04                 jmp 0x554e96
// 00554e92  8b4401fc             mov eax, dword ptr [ecx + eax - 4]
// 00554e96  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 00554e99  2bc1                 sub eax, ecx
// 00554e9b  894344               mov dword ptr [ebx + 0x44], eax
// 00554e9e  7805                 js 0x554ea5
// 00554ea0  3b433c               cmp eax, dword ptr [ebx + 0x3c]
// 00554ea3  7e0b                 jle 0x554eb0
// 00554ea5  03c1                 add eax, ecx
// 00554ea7  55                   push ebp
// 00554ea8  50                   push eax
// 00554ea9  8bcb                 mov ecx, ebx
// 00554eab  e8a0390000           call 0x558850
// 00554eb0  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 00554eb3  8b5344               mov edx, dword ptr [ebx + 0x44]
// 00554eb6  8d441128             lea eax, [ecx + edx + 0x28]
// 00554eba  2bc1                 sub eax, ecx
// 00554ebc  894344               mov dword ptr [ebx + 0x44], eax
// 00554ebf  7805                 js 0x554ec6
// 00554ec1  3b433c               cmp eax, dword ptr [ebx + 0x3c]
// 00554ec4  7e0b                 jle 0x554ed1
// 00554ec6  03c1                 add eax, ecx
// 00554ec8  55                   push ebp
// 00554ec9  50                   push eax
// 00554eca  8bcb                 mov ecx, ebx
// 00554ecc  e87f390000           call 0x558850
// 00554ed1  896c2430             mov dword ptr [esp + 0x30], ebp
// 00554ed5  896c2434             mov dword ptr [esp + 0x34], ebp
// 00554ed9  896c242c             mov dword ptr [esp + 0x2c], ebp
// 00554edd  6a01                 push 1
// 00554edf  57                   push edi
// 00554ee0  8d4c2434             lea ecx, [esp + 0x34]
// 00554ee4  c78424e800000002000000 mov dword ptr [esp + 0xe8], 2
// 00554eef  e89ceeffff           call 0x553d90
// 00554ef4  3bfd                 cmp edi, ebp
// 00554ef6  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 00554efa  0f8ec5000000         jle 0x554fc5
// 00554f00  8b442418             mov eax, dword ptr [esp + 0x18]
// 00554f04  8d7d01               lea edi, [ebp + 1]
// 00554f07  89442418             mov dword ptr [esp + 0x18], eax
// 00554f0b  eb03                 jmp 0x554f10
// 00554f0d  8d4900               lea ecx, [ecx]
// 00554f10  8b4344               mov eax, dword ptr [ebx + 0x44]
// 00554f13  8d4801               lea ecx, [eax + 1]
// 00554f16  3b4b3c               cmp ecx, dword ptr [ebx + 0x3c]
// 00554f19  7e0f                 jle 0x554f2a
// 00554f1b  8b5334               mov edx, dword ptr [ebx + 0x34]
// 00554f1e  6a01                 push 1
// 00554f20  03d0                 add edx, eax
// 00554f22  52                   push edx
// 00554f23  8bcb                 mov ecx, ebx
// 00554f25  e826390000           call 0x558850
// 00554f2a  8b4344               mov eax, dword ptr [ebx + 0x44]
// 00554f2d  8b4b40               mov ecx, dword ptr [ebx + 0x40]
// 00554f30  8a0c08               mov cl, byte ptr [eax + ecx]
// 00554f33  40                   inc eax
// 00554f34  894344               mov dword ptr [ebx + 0x44], eax
// 00554f37  884f01               mov byte ptr [edi + 1], cl
// 00554f3a  8b4344               mov eax, dword ptr [ebx + 0x44]
// 00554f3d  8d5001               lea edx, [eax + 1]
// 00554f40  3b533c               cmp edx, dword ptr [ebx + 0x3c]
// 00554f43  7e0f                 jle 0x554f54
// 00554f45  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 00554f48  03c8                 add ecx, eax
// 00554f4a  6a01                 push 1
// 00554f4c  51                   push ecx
// 00554f4d  8bcb                 mov ecx, ebx
// 00554f4f  e8fc380000           call 0x558850
// 00554f54  8b4344               mov eax, dword ptr [ebx + 0x44]
// 00554f57  8b5340               mov edx, dword ptr [ebx + 0x40]
// 00554f5a  8a0c10               mov cl, byte ptr [eax + edx]
// 00554f5d  40                   inc eax
// 00554f5e  894344               mov dword ptr [ebx + 0x44], eax
// 00554f61  880f                 mov byte ptr [edi], cl
// 00554f63  8b4344               mov eax, dword ptr [ebx + 0x44]
// 00554f66  8d4801               lea ecx, [eax + 1]
// 00554f69  3b4b3c               cmp ecx, dword ptr [ebx + 0x3c]
// 00554f6c  7e0f                 jle 0x554f7d
// 00554f6e  8b5334               mov edx, dword ptr [ebx + 0x34]
// 00554f71  6a01                 push 1
// 00554f73  03d0                 add edx, eax
// 00554f75  52                   push edx
// 00554f76  8bcb                 mov ecx, ebx
// 00554f78  e8d3380000           call 0x558850
// 00554f7d  8b4344               mov eax, dword ptr [ebx + 0x44]
// 00554f80  8b4b40               mov ecx, dword ptr [ebx + 0x40]
// 00554f83  8a0c08               mov cl, byte ptr [eax + ecx]
// 00554f86  40                   inc eax
// 00554f87  894344               mov dword ptr [ebx + 0x44], eax
// 00554f8a  884fff               mov byte ptr [edi - 1], cl
// 00554f8d  8b4344               mov eax, dword ptr [ebx + 0x44]
// 00554f90  8d5001               lea edx, [eax + 1]
// 00554f93  3b533c               cmp edx, dword ptr [ebx + 0x3c]
// 00554f96  7e0f                 jle 0x554fa7
// 00554f98  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 00554f9b  03c8                 add ecx, eax
// 00554f9d  6a01                 push 1
// 00554f9f  51                   push ecx
// 00554fa0  8bcb                 mov ecx, ebx
// 00554fa2  e8a9380000           call 0x558850
// 00554fa7  8b4344               mov eax, dword ptr [ebx + 0x44]
// 00554faa  8b5340               mov edx, dword ptr [ebx + 0x40]
// 00554fad  8a0c10               mov cl, byte ptr [eax + edx]
// 00554fb0  40                   inc eax
// 00554fb1  894344               mov dword ptr [ebx + 0x44], eax
// 00554fb4  884f02               mov byte ptr [edi + 2], cl
// 00554fb7  83c704               add edi, 4
// 00554fba  836c241801           sub dword ptr [esp + 0x18], 1
// 00554fbf  0f854bffffff         jne 0x554f10
// 00554fc5  8b460c               mov eax, dword ptr [esi + 0xc]
// 00554fc8  83caff               or edx, 0xffffffff
// 00554fcb  85c0                 test eax, eax
// 00554fcd  7d15                 jge 0x554fe4
// 00554fcf  f7d8                 neg eax
// 00554fd1  89460c               mov dword ptr [esi + 0xc], eax
// 00554fd4  33c9                 xor ecx, ecx
// 00554fd6  89442428             mov dword ptr [esp + 0x28], eax
// 00554fda  c744242401000000     mov dword ptr [esp + 0x24], 1
// 00554fe2  eb0b                 jmp 0x554fef
// 00554fe4  8d48ff               lea ecx, [eax - 1]
// 00554fe7  89542428             mov dword ptr [esp + 0x28], edx
// 00554feb  89542424             mov dword ptr [esp + 0x24], edx
// 00554fef  8b442410             mov eax, dword ptr [esp + 0x10]
// 00554ff3  83f801               cmp eax, 1
// 00554ff6  0f8506030000         jne 0x555302
// 00554ffc  8b4608               mov eax, dword ptr [esi + 8]
// 00554fff  83c007               add eax, 7
// 00555002  c1f803               sar eax, 3
// 00555005  8bd0                 mov edx, eax
// 00555007  83e203               and edx, 3
// 0055500a  8944241c             mov dword ptr [esp + 0x1c], eax
// 0055500e  740d                 je 0x55501d
// 00555010  bf04000000           mov edi, 4
// 00555015  2bfa                 sub edi, edx
// 00555017  03c7                 add eax, edi
// 00555019  8944241c             mov dword ptr [esp + 0x1c], eax
// 0055501d  894c2418             mov dword ptr [esp + 0x18], ecx
// 00555021  3b4c2428             cmp ecx, dword ptr [esp + 0x28]
// 00555025  0f84cd040000         je 0x5554f8
// 0055502b  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0055502f  90                   nop 
// 00555030  8b7e08               mov edi, dword ptr [esi + 8]
// 00555033  0faff9               imul edi, ecx
// 00555036  33c0                 xor eax, eax
// 00555038  89442410             mov dword ptr [esp + 0x10], eax
// 0055503c  8d3c7f               lea edi, [edi + edi*2]
// 0055503f  85d2                 test edx, edx
// 00555041  0f8ea4020000         jle 0x5552eb
// 00555047  89542420             mov dword ptr [esp + 0x20], edx
// 0055504b  eb03                 jmp 0x555050
// 0055504d  8d4900               lea ecx, [ecx]
// 00555050  8b4b44               mov ecx, dword ptr [ebx + 0x44]
// 00555053  8d5101               lea edx, [ecx + 1]
// 00555056  3b533c               cmp edx, dword ptr [ebx + 0x3c]
// 00555059  7e13                 jle 0x55506e
// 0055505b  8b4334               mov eax, dword ptr [ebx + 0x34]
// 0055505e  03c1                 add eax, ecx
// 00555060  6a01                 push 1
// 00555062  50                   push eax
// 00555063  8bcb                 mov ecx, ebx
// 00555065  e8e6370000           call 0x558850
// 0055506a  8b442410             mov eax, dword ptr [esp + 0x10]
// 0055506e  8b5344               mov edx, dword ptr [ebx + 0x44]
// 00555071  8b4b40               mov ecx, dword ptr [ebx + 0x40]
// 00555074  8a0c0a               mov cl, byte ptr [edx + ecx]
// 00555077  42                   inc edx
// 00555078  895344               mov dword ptr [ebx + 0x44], edx
// 0055507b  3b4608               cmp eax, dword ptr [esi + 8]
// 0055507e  884c2417             mov byte ptr [esp + 0x17], cl
// 00555082  0f8d50020000         jge 0x5552d8
// 00555088  8b5604               mov edx, dword ptr [esi + 4]
// 0055508b  0fb6c9               movzx ecx, cl
// 0055508e  c1e907               shr ecx, 7
// 00555091  894c2410             mov dword ptr [esp + 0x10], ecx
// 00555095  0fb64c8d00           movzx ecx, byte ptr [ebp + ecx*4]
// 0055509a  880c17               mov byte ptr [edi + edx], cl
// 0055509d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005550a1  0fb64c8d01           movzx ecx, byte ptr [ebp + ecx*4 + 1]
// 005550a6  8b5604               mov edx, dword ptr [esi + 4]
// 005550a9  884c3a01             mov byte ptr [edx + edi + 1], cl
// 005550ad  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005550b1  0fb64c8d02           movzx ecx, byte ptr [ebp + ecx*4 + 2]
// 005550b6  8b5604               mov edx, dword ptr [esi + 4]
// 005550b9  884c3a02             mov byte ptr [edx + edi + 2], cl
// 005550bd  8a4c2417             mov cl, byte ptr [esp + 0x17]
// 005550c1  40                   inc eax
// 005550c2  83c704               add edi, 4
// 005550c5  3b4608               cmp eax, dword ptr [esi + 8]
// 005550c8  89442410             mov dword ptr [esp + 0x10], eax
// 005550cc  0f8d06020000         jge 0x5552d8
// 005550d2  8b5604               mov edx, dword ptr [esi + 4]
// 005550d5  0fb6c9               movzx ecx, cl
// 005550d8  c1e906               shr ecx, 6
// 005550db  83e101               and ecx, 1
// 005550de  894c2410             mov dword ptr [esp + 0x10], ecx
// 005550e2  0fb64c8d00           movzx ecx, byte ptr [ebp + ecx*4]
// 005550e7  880c17               mov byte ptr [edi + edx], cl
// 005550ea  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005550ee  0fb64c8d01           movzx ecx, byte ptr [ebp + ecx*4 + 1]
// 005550f3  8b5604               mov edx, dword ptr [esi + 4]
// 005550f6  884c3a01             mov byte ptr [edx + edi + 1], cl
// 005550fa  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005550fe  0fb64c8d02           movzx ecx, byte ptr [ebp + ecx*4 + 2]
// 00555103  8b5604               mov edx, dword ptr [esi + 4]
// 00555106  884c3a02             mov byte ptr [edx + edi + 2], cl
// 0055510a  8a4c2417             mov cl, byte ptr [esp + 0x17]
// 0055510e  40                   inc eax
// 0055510f  83c704               add edi, 4
// 00555112  3b4608               cmp eax, dword ptr [esi + 8]
// 00555115  89442410             mov dword ptr [esp + 0x10], eax
// 00555119  0f8db9010000         jge 0x5552d8
// 0055511f  8b5604               mov edx, dword ptr [esi + 4]
// 00555122  0fb6c9               movzx ecx, cl
// 00555125  c1e905               shr ecx, 5
// 00555128  83e101               and ecx, 1
// 0055512b  894c2410             mov dword ptr [esp + 0x10], ecx
// 0055512f  0fb64c8d00           movzx ecx, byte ptr [ebp + ecx*4]
// 00555134  880c17               mov byte ptr [edi + edx], cl
// 00555137  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0055513b  0fb64c8d01           movzx ecx, byte ptr [ebp + ecx*4 + 1]
// 00555140  8b5604               mov edx, dword ptr [esi + 4]
// 00555143  884c3a01             mov byte ptr [edx + edi + 1], cl
// 00555147  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0055514b  0fb64c8d02           movzx ecx, byte ptr [ebp + ecx*4 + 2]
// 00555150  8b5604               mov edx, dword ptr [esi + 4]
// 00555153  884c3a02             mov byte ptr [edx + edi + 2], cl
// 00555157  8a4c2417             mov cl, byte ptr [esp + 0x17]
// 0055515b  40                   inc eax
// 0055515c  83c704               add edi, 4
// 0055515f  3b4608               cmp eax, dword ptr [esi + 8]
// 00555162  89442410             mov dword ptr [esp + 0x10], eax
// 00555166  0f8d6c010000         jge 0x5552d8
// 0055516c  8b5604               mov edx, dword ptr [esi + 4]
// 0055516f  0fb6c9               movzx ecx, cl
// 00555172  c1e904               shr ecx, 4
// 00555175  83e101               and ecx, 1
// 00555178  894c2410             mov dword ptr [esp + 0x10], ecx
// 0055517c  0fb64c8d00           movzx ecx, byte ptr [ebp + ecx*4]
// 00555181  880c17               mov byte ptr [edi + edx], cl
// 00555184  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00555188  0fb64c8d01           movzx ecx, byte ptr [ebp + ecx*4 + 1]
// 0055518d  8b5604               mov edx, dword ptr [esi + 4]
// 00555190  884c3a01             mov byte ptr [edx + edi + 1], cl
// 00555194  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00555198  0fb64c8d02           movzx ecx, byte ptr [ebp + ecx*4 + 2]
// 0055519d  8b5604               mov edx, dword ptr [esi + 4]
// 005551a0  884c3a02             mov byte ptr [edx + edi + 2], cl
// 005551a4  8a4c2417             mov cl, byte ptr [esp + 0x17]
// 005551a8  40                   inc eax
// 005551a9  83c704               add edi, 4
// 005551ac  3b4608               cmp eax, dword ptr [esi + 8]
// 005551af  89442410             mov dword ptr [esp + 0x10], eax
// 005551b3  0f8d1f010000         jge 0x5552d8
// 005551b9  8b5604               mov edx, dword ptr [esi + 4]
// 005551bc  0fb6c9               movzx ecx, cl
// 005551bf  c1e903               shr ecx, 3
// 005551c2  83e101               and ecx, 1
// 005551c5  894c2410             mov dword ptr [esp + 0x10], ecx
// 005551c9  0fb64c8d00           movzx ecx, byte ptr [ebp + ecx*4]
// 005551ce  880c17               mov byte ptr [edi + edx], cl
// 005551d1  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005551d5  0fb64c8d01           movzx ecx, byte ptr [ebp + ecx*4 + 1]
// 005551da  8b5604               mov edx, dword ptr [esi + 4]
// 005551dd  884c3a01             mov byte ptr [edx + edi + 1], cl
// 005551e1  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005551e5  0fb64c8d02           movzx ecx, byte ptr [ebp + ecx*4 + 2]
// 005551ea  8b5604               mov edx, dword ptr [esi + 4]
// 005551ed  884c3a02             mov byte ptr [edx + edi + 2], cl
// 005551f1  8a4c2417             mov cl, byte ptr [esp + 0x17]
// 005551f5  40                   inc eax
// 005551f6  83c704               add edi, 4
// 005551f9  3b4608               cmp eax, dword ptr [esi + 8]
// 005551fc  89442410             mov dword ptr [esp + 0x10], eax
// 00555200  0f8dd2000000         jge 0x5552d8
// 00555206  8b5604               mov edx, dword ptr [esi + 4]
// 00555209  0fb6c9               movzx ecx, cl
// 0055520c  c1e902               shr ecx, 2
// 0055520f  83e101               and ecx, 1
// 00555212  894c2410             mov dword ptr [esp + 0x10], ecx
// 00555216  0fb64c8d00           movzx ecx, byte ptr [ebp + ecx*4]
// 0055521b  880c17               mov byte ptr [edi + edx], cl
// 0055521e  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00555222  0fb64c8d01           movzx ecx, byte ptr [ebp + ecx*4 + 1]
// 00555227  8b5604               mov edx, dword ptr [esi + 4]
// 0055522a  884c3a01             mov byte ptr [edx + edi + 1], cl
// 0055522e  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00555232  0fb64c8d02           movzx ecx, byte ptr [ebp + ecx*4 + 2]
// 00555237  8b5604               mov edx, dword ptr [esi + 4]
// 0055523a  884c3a02             mov byte ptr [edx + edi + 2], cl
// 0055523e  8a4c2417             mov cl, byte ptr [esp + 0x17]
// 00555242  40                   inc eax
// 00555243  83c704               add edi, 4
// 00555246  3b4608               cmp eax, dword ptr [esi + 8]
// 00555249  89442410             mov dword ptr [esp + 0x10], eax
// 0055524d  0f8d85000000         jge 0x5552d8
// 00555253  8b5604               mov edx, dword ptr [esi + 4]
// 00555256  0fb6c9               movzx ecx, cl
// 00555259  d1e9                 shr ecx, 1
// 0055525b  83e101               and ecx, 1
// 0055525e  894c2410             mov dword ptr [esp + 0x10], ecx
// 00555262  0fb64c8d00           movzx ecx, byte ptr [ebp + ecx*4]
// 00555267  880c17               mov byte ptr [edi + edx], cl
// 0055526a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0055526e  0fb64c8d01           movzx ecx, byte ptr [ebp + ecx*4 + 1]
// 00555273  8b5604               mov edx, dword ptr [esi + 4]
// 00555276  884c3a01             mov byte ptr [edx + edi + 1], cl
// 0055527a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0055527e  0fb64c8d02           movzx ecx, byte ptr [ebp + ecx*4 + 2]
// 00555283  8b5604               mov edx, dword ptr [esi + 4]
// 00555286  884c3a02             mov byte ptr [edx + edi + 2], cl
// 0055528a  8a4c2417             mov cl, byte ptr [esp + 0x17]
// 0055528e  40                   inc eax
// 0055528f  83c704               add edi, 4
// 00555292  3b4608               cmp eax, dword ptr [esi + 8]
// 00555295  89442410             mov dword ptr [esp + 0x10], eax
// 00555299  7d3d                 jge 0x5552d8
// 0055529b  8b5604               mov edx, dword ptr [esi + 4]
// 0055529e  0fb6c9               movzx ecx, cl
// 005552a1  83e101               and ecx, 1
// 005552a4  894c2410             mov dword ptr [esp + 0x10], ecx
// 005552a8  0fb64c8d00           movzx ecx, byte ptr [ebp + ecx*4]
// 005552ad  880c17               mov byte ptr [edi + edx], cl
// 005552b0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005552b4  0fb64c8d01           movzx ecx, byte ptr [ebp + ecx*4 + 1]
// 005552b9  8b5604               mov edx, dword ptr [esi + 4]
// 005552bc  884c3a01             mov byte ptr [edx + edi + 1], cl
// 005552c0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005552c4  0fb64c8d02           movzx ecx, byte ptr [ebp + ecx*4 + 2]
// 005552c9  8b5604               mov edx, dword ptr [esi + 4]
// 005552cc  40                   inc eax
// 005552cd  884c3a02             mov byte ptr [edx + edi + 2], cl
// 005552d1  89442410             mov dword ptr [esp + 0x10], eax
// 005552d5  83c704               add edi, 4
// 005552d8  836c242001           sub dword ptr [esp + 0x20], 1
// 005552dd  0f856dfdffff         jne 0x555050
// 005552e3  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005552e7  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005552eb  034c2424             add ecx, dword ptr [esp + 0x24]
// 005552ef  894c2418             mov dword ptr [esp + 0x18], ecx
// 005552f3  3b4c2428             cmp ecx, dword ptr [esp + 0x28]
// 005552f7  0f8533fdffff         jne 0x555030
// 005552fd  e9f6010000           jmp 0x5554f8
// 00555302  83f804               cmp eax, 4
// 00555305  0f8521010000         jne 0x55542c
// 0055530b  8b4608               mov eax, dword ptr [esi + 8]
// 0055530e  40                   inc eax
// 0055530f  d1f8                 sar eax, 1
// 00555311  8bd0                 mov edx, eax
// 00555313  83e203               and edx, 3
// 00555316  89442420             mov dword ptr [esp + 0x20], eax
// 0055531a  740d                 je 0x555329
// 0055531c  bf04000000           mov edi, 4
// 00555321  2bfa                 sub edi, edx
// 00555323  03c7                 add eax, edi
// 00555325  89442420             mov dword ptr [esp + 0x20], eax
// 00555329  894c2418             mov dword ptr [esp + 0x18], ecx
// 0055532d  3b4c2428             cmp ecx, dword ptr [esp + 0x28]
// 00555331  0f84c1010000         je 0x5554f8
// 00555337  eb07                 jmp 0x555340
// 00555339  8da42400000000       lea esp, [esp]
// 00555340  8b7e08               mov edi, dword ptr [esi + 8]
// 00555343  8b442418             mov eax, dword ptr [esp + 0x18]
// 00555347  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0055534b  0faff8               imul edi, eax
// 0055534e  03ff                 add edi, edi
// 00555350  03ff                 add edi, edi
// 00555352  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0055535a  85c9                 test ecx, ecx
// 0055535c  0f8eb3000000         jle 0x555415
// 00555362  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00555366  8b4344               mov eax, dword ptr [ebx + 0x44]
// 00555369  8d5001               lea edx, [eax + 1]
// 0055536c  3b533c               cmp edx, dword ptr [ebx + 0x3c]
// 0055536f  7e0f                 jle 0x555380
// 00555371  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 00555374  03c8                 add ecx, eax
// 00555376  6a01                 push 1
// 00555378  51                   push ecx
// 00555379  8bcb                 mov ecx, ebx
// 0055537b  e8d0340000           call 0x558850
// 00555380  8b4344               mov eax, dword ptr [ebx + 0x44]
// 00555383  8b5340               mov edx, dword ptr [ebx + 0x40]
// 00555386  8a0c10               mov cl, byte ptr [eax + edx]
// 00555389  8b542410             mov edx, dword ptr [esp + 0x10]
// 0055538d  40                   inc eax
// 0055538e  0fb6c9               movzx ecx, cl
// 00555391  894344               mov dword ptr [ebx + 0x44], eax
// 00555394  8bc1                 mov eax, ecx
// 00555396  83e10f               and ecx, 0xf
// 00555399  c1e804               shr eax, 4
// 0055539c  3b5608               cmp edx, dword ptr [esi + 8]
// 0055539f  894c243c             mov dword ptr [esp + 0x3c], ecx
// 005553a3  7d2e                 jge 0x5553d3
// 005553a5  0fb6548500           movzx edx, byte ptr [ebp + eax*4]
// 005553aa  8b4e04               mov ecx, dword ptr [esi + 4]
// 005553ad  ff442410             inc dword ptr [esp + 0x10]
// 005553b1  88140f               mov byte ptr [edi + ecx], dl
// 005553b4  0fb6548501           movzx edx, byte ptr [ebp + eax*4 + 1]
// 005553b9  8b4e04               mov ecx, dword ptr [esi + 4]
// 005553bc  88543901             mov byte ptr [ecx + edi + 1], dl
// 005553c0  0fb6548502           movzx edx, byte ptr [ebp + eax*4 + 2]
// 005553c5  8b4e04               mov ecx, dword ptr [esi + 4]
// 005553c8  88543902             mov byte ptr [ecx + edi + 2], dl
// 005553cc  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 005553d0  83c704               add edi, 4
// 005553d3  8b442410             mov eax, dword ptr [esp + 0x10]
// 005553d7  3b4608               cmp eax, dword ptr [esi + 8]
// 005553da  7d2a                 jge 0x555406
// 005553dc  0fb6448d00           movzx eax, byte ptr [ebp + ecx*4]
// 005553e1  8b5604               mov edx, dword ptr [esi + 4]
// 005553e4  ff442410             inc dword ptr [esp + 0x10]
// 005553e8  880417               mov byte ptr [edi + edx], al
// 005553eb  0fb6448d01           movzx eax, byte ptr [ebp + ecx*4 + 1]
// 005553f0  8b5604               mov edx, dword ptr [esi + 4]
// 005553f3  88443a01             mov byte ptr [edx + edi + 1], al
// 005553f7  0fb6448d02           movzx eax, byte ptr [ebp + ecx*4 + 2]
// 005553fc  8b5604               mov edx, dword ptr [esi + 4]
// 005553ff  88443a02             mov byte ptr [edx + edi + 2], al
// 00555403  83c704               add edi, 4
// 00555406  836c241c01           sub dword ptr [esp + 0x1c], 1
// 0055540b  0f8555ffffff         jne 0x555366
// 00555411  8b442418             mov eax, dword ptr [esp + 0x18]
// 00555415  03442424             add eax, dword ptr [esp + 0x24]
// 00555419  89442418             mov dword ptr [esp + 0x18], eax
// 0055541d  3b442428             cmp eax, dword ptr [esp + 0x28]
// 00555421  0f8519ffffff         jne 0x555340
// 00555427  e9cc000000           jmp 0x5554f8
// 0055542c  83f808               cmp eax, 8
// 0055542f  0f85c3000000         jne 0x5554f8
// 00555435  8b7e08               mov edi, dword ptr [esi + 8]
// 00555438  8bc7                 mov eax, edi
// 0055543a  83e003               and eax, 3
// 0055543d  897c241c             mov dword ptr [esp + 0x1c], edi
// 00555441  740d                 je 0x555450
// 00555443  ba04000000           mov edx, 4
// 00555448  2bd0                 sub edx, eax
// 0055544a  03fa                 add edi, edx
// 0055544c  897c241c             mov dword ptr [esp + 0x1c], edi
// 00555450  894c2418             mov dword ptr [esp + 0x18], ecx
// 00555454  3b4c2428             cmp ecx, dword ptr [esp + 0x28]
// 00555458  0f849a000000         je 0x5554f8
// 0055545e  8bff                 mov edi, edi
// 00555460  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00555468  85ff                 test edi, edi
// 0055546a  7e76                 jle 0x5554e2
// 0055546c  897c2420             mov dword ptr [esp + 0x20], edi
// 00555470  8b4344               mov eax, dword ptr [ebx + 0x44]
// 00555473  8d4801               lea ecx, [eax + 1]
// 00555476  3b4b3c               cmp ecx, dword ptr [ebx + 0x3c]
// 00555479  7e0f                 jle 0x55548a
// 0055547b  8b5334               mov edx, dword ptr [ebx + 0x34]
// 0055547e  6a01                 push 1
// 00555480  03d0                 add edx, eax
// 00555482  52                   push edx
// 00555483  8bcb                 mov ecx, ebx
// 00555485  e8c6330000           call 0x558850
// 0055548a  8b4344               mov eax, dword ptr [ebx + 0x44]
// 0055548d  8b4b40               mov ecx, dword ptr [ebx + 0x40]
// 00555490  8a0c08               mov cl, byte ptr [eax + ecx]
// 00555493  40                   inc eax
// 00555494  894344               mov dword ptr [ebx + 0x44], eax
// 00555497  8b4608               mov eax, dword ptr [esi + 8]
// 0055549a  39442410             cmp dword ptr [esp + 0x10], eax
// 0055549e  7d3b                 jge 0x5554db
// 005554a0  0faf442418           imul eax, dword ptr [esp + 0x18]
// 005554a5  03442410             add eax, dword ptr [esp + 0x10]
// 005554a9  8b5604               mov edx, dword ptr [esi + 4]
// 005554ac  0fb6f9               movzx edi, cl
// 005554af  0fb64cbd00           movzx ecx, byte ptr [ebp + edi*4]
// 005554b4  03c0                 add eax, eax
// 005554b6  03c0                 add eax, eax
// 005554b8  ff442410             inc dword ptr [esp + 0x10]
// 005554bc  880c10               mov byte ptr [eax + edx], cl
// 005554bf  0fb64cbd01           movzx ecx, byte ptr [ebp + edi*4 + 1]
// 005554c4  8b5604               mov edx, dword ptr [esi + 4]
// 005554c7  884c0201             mov byte ptr [edx + eax + 1], cl
// 005554cb  0fb64cbd02           movzx ecx, byte ptr [ebp + edi*4 + 2]
// 005554d0  8b5604               mov edx, dword ptr [esi + 4]
// 005554d3  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 005554d7  884c0202             mov byte ptr [edx + eax + 2], cl
// 005554db  836c242001           sub dword ptr [esp + 0x20], 1
// 005554e0  758e                 jne 0x555470
// 005554e2  8b442418             mov eax, dword ptr [esp + 0x18]
// 005554e6  03442424             add eax, dword ptr [esp + 0x24]
// 005554ea  89442418             mov dword ptr [esp + 0x18], eax
// 005554ee  3b442428             cmp eax, dword ptr [esp + 0x28]
// 005554f2  0f8568ffffff         jne 0x555460
// 005554f8  8b5608               mov edx, dword ptr [esi + 8]
// 005554fb  89542420             mov dword ptr [esp + 0x20], edx
// 005554ff  db442420             fild dword ptr [esp + 0x20]
// 00555503  83ec08               sub esp, 8
// 00555506  dc0dc803a200         fmul qword ptr [0xa203c8]
// 0055550c  dd1c24               fstp qword ptr [esp]
// 0055550f  ff1554a79e00         call dword ptr [0x9ea754]
// 00555515  83c408               add esp, 8
// 00555518  e813392500           call 0x7a8e30
// 0055551d  8bc8                 mov ecx, eax
// 0055551f  83e103               and ecx, 3
// 00555522  89442418             mov dword ptr [esp + 0x18], eax
// 00555526  740d                 je 0x555535
// 00555528  ba04000000           mov edx, 4
// 0055552d  2bd1                 sub edx, ecx
// 0055552f  03c2                 add eax, edx
// 00555531  89442418             mov dword ptr [esp + 0x18], eax
// 00555535  8b460c               mov eax, dword ptr [esi + 0xc]
// 00555538  83e801               sub eax, 1
// 0055553b  8944241c             mov dword ptr [esp + 0x1c], eax
// 0055553f  0f8897000000         js 0x5555dc
// 00555545  eb09                 jmp 0x555550
// 00555547  8da42400000000       lea esp, [esp]
// 0055554e  8bff                 mov edi, edi
// 00555550  837c241800           cmp dword ptr [esp + 0x18], 0
// 00555555  c744242400000000     mov dword ptr [esp + 0x24], 0
// 0055555d  7e72                 jle 0x5555d1
// 0055555f  8b442418             mov eax, dword ptr [esp + 0x18]
// 00555563  89442420             mov dword ptr [esp + 0x20], eax
// 00555567  8b4344               mov eax, dword ptr [ebx + 0x44]
// 0055556a  8d4801               lea ecx, [eax + 1]
// 0055556d  3b4b3c               cmp ecx, dword ptr [ebx + 0x3c]
// 00555570  7e0f                 jle 0x555581
// 00555572  8b5334               mov edx, dword ptr [ebx + 0x34]
// 00555575  6a01                 push 1
// 00555577  03d0                 add edx, eax
// 00555579  52                   push edx
// 0055557a  8bcb                 mov ecx, ebx
// 0055557c  e8cf320000           call 0x558850
// 00555581  8b4344               mov eax, dword ptr [ebx + 0x44]
// 00555584  8b4b40               mov ecx, dword ptr [ebx + 0x40]
// 00555587  8a1408               mov dl, byte ptr [eax + ecx]
// 0055558a  40                   inc eax
// 0055558b  88542417             mov byte ptr [esp + 0x17], dl
// 0055558f  894344               mov dword ptr [ebx + 0x44], eax
// 00555592  33d2                 xor edx, edx
// 00555594  8b7e08               mov edi, dword ptr [esi + 8]
// 00555597  397c2424             cmp dword ptr [esp + 0x24], edi
// 0055559b  7d2d                 jge 0x5555ca
// 0055559d  0faf7c241c           imul edi, dword ptr [esp + 0x1c]
// 005555a2  0fb6442417           movzx eax, byte ptr [esp + 0x17]
// 005555a7  037c2424             add edi, dword ptr [esp + 0x24]
// 005555ab  ff442424             inc dword ptr [esp + 0x24]
// 005555af  b907000000           mov ecx, 7
// 005555b4  2aca                 sub cl, dl
// 005555b6  d3e8                 shr eax, cl
// 005555b8  8b4e04               mov ecx, dword ptr [esi + 4]
// 005555bb  42                   inc edx
// 005555bc  83e001               and eax, 1
// 005555bf  fec8                 dec al
// 005555c1  83fa08               cmp edx, 8
// 005555c4  8844b903             mov byte ptr [ecx + edi*4 + 3], al
// 005555c8  7cca                 jl 0x555594
// 005555ca  836c242001           sub dword ptr [esp + 0x20], 1
// 005555cf  7596                 jne 0x555567
// 005555d1  836c241c01           sub dword ptr [esp + 0x1c], 1
// 005555d6  0f8974ffffff         jns 0x555550
// 005555dc  55                   push ebp
// 005555dd  c78424e4000000ffffffff mov dword ptr [esp + 0xe4], 0xffffffff
// 005555e8  e8d383ffff           call 0x54d9c0
// 005555ed  8b8c24dc000000       mov ecx, dword ptr [esp + 0xdc]
// 005555f4  83c404               add esp, 4
// 005555f7  5f                   pop edi
// 005555f8  5e                   pop esi
// 005555f9  5d                   pop ebp
// 005555fa  5b                   pop ebx
// 005555fb  64890d00000000       mov dword ptr fs:[0], ecx
// 00555602  81c4d4000000         add esp, 0xd4
// 00555608  c20400               ret 4
// library g3d-6.09-rbx2008/G3Dcpp\GImage_bmp.cpp (function ?decodeICO@GImage@G3D@@AAEXAAVBinaryInput@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/GImage_bmp.cpp
