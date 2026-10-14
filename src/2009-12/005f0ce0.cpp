// roc 2009-12 005f0ce0  unit: seg_005f0000  size: 2603 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f0ce0
//
// 005f0ce0  6aff                 push -1
// 005f0ce2  68a3f39300           push 0x93f3a3
// 005f0ce7  64a100000000         mov eax, dword ptr fs:[0]
// 005f0ced  50                   push eax
// 005f0cee  64892500000000       mov dword ptr fs:[0], esp
// 005f0cf5  81ecc8000000         sub esp, 0xc8
// 005f0cfb  53                   push ebx
// 005f0cfc  8b9c24dc000000       mov ebx, dword ptr [esp + 0xdc]
// 005f0d03  55                   push ebp
// 005f0d04  56                   push esi
// 005f0d05  8bf1                 mov esi, ecx
// 005f0d07  8bcb                 mov ecx, ebx
// 005f0d09  e8c281eaff           call 0x498ed0
// 005f0d0e  8bcb                 mov ecx, ebx
// 005f0d10  e8bb81eaff           call 0x498ed0
// 005f0d15  8bcb                 mov ecx, ebx
// 005f0d17  e8b481eaff           call 0x498ed0
// 005f0d1c  0fb7e8               movzx ebp, ax
// 005f0d1f  c7461004000000       mov dword ptr [esi + 0x10], 4
// 005f0d26  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 005f0d29  896c241c             mov dword ptr [esp + 0x1c], ebp
// 005f0d2d  85c9                 test ecx, ecx
// 005f0d2f  7626                 jbe 0x5f0d57
// 005f0d31  8d44241c             lea eax, [esp + 0x1c]
// 005f0d35  50                   push eax
// 005f0d36  8d4c242c             lea ecx, [esp + 0x2c]
// 005f0d3a  c744242050329b00     mov dword ptr [esp + 0x20], 0x9b3250
// 005f0d42  ff1548b79800         call dword ptr [0x98b748]
// 005f0d48  68647da900           push 0xa97d64
// 005f0d4d  8d4c242c             lea ecx, [esp + 0x2c]
// 005f0d51  51                   push ecx
// 005f0d52  e8213b2000           call 0x7f4878
// 005f0d57  8b5344               mov edx, dword ptr [ebx + 0x44]
// 005f0d5a  8b4340               mov eax, dword ptr [ebx + 0x40]
// 005f0d5d  03d1                 add edx, ecx
// 005f0d5f  57                   push edi
// 005f0d60  33c9                 xor ecx, ecx
// 005f0d62  8d3c02               lea edi, [edx + eax]
// 005f0d65  33c0                 xor eax, eax
// 005f0d67  89542428             mov dword ptr [esp + 0x28], edx
// 005f0d6b  894c2418             mov dword ptr [esp + 0x18], ecx
// 005f0d6f  894c241c             mov dword ptr [esp + 0x1c], ecx
// 005f0d73  85ed                 test ebp, ebp
// 005f0d75  7e44                 jle 0x5f0dbb
// 005f0d77  897c2424             mov dword ptr [esp + 0x24], edi
// 005f0d7b  eb03                 jmp 0x5f0d80
// 005f0d7d  8d4900               lea ecx, [ecx]
// 005f0d80  0fb617               movzx edx, byte ptr [edi]
// 005f0d83  0fb67f01             movzx edi, byte ptr [edi + 1]
// 005f0d87  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 005f0d8b  0faffa               imul edi, edx
// 005f0d8e  0faf6c2418           imul ebp, dword ptr [esp + 0x18]
// 005f0d93  3bfd                 cmp edi, ebp
// 005f0d95  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 005f0d99  7e0e                 jle 0x5f0da9
// 005f0d9b  0fb64f01             movzx ecx, byte ptr [edi + 1]
// 005f0d9f  894c241c             mov dword ptr [esp + 0x1c], ecx
// 005f0da3  89542418             mov dword ptr [esp + 0x18], edx
// 005f0da7  8bc8                 mov ecx, eax
// 005f0da9  40                   inc eax
// 005f0daa  83c710               add edi, 0x10
// 005f0dad  3b442420             cmp eax, dword ptr [esp + 0x20]
// 005f0db1  897c2424             mov dword ptr [esp + 0x24], edi
// 005f0db5  7cc9                 jl 0x5f0d80
// 005f0db7  8b542428             mov edx, dword ptr [esp + 0x28]
// 005f0dbb  8b4334               mov eax, dword ptr [ebx + 0x34]
// 005f0dbe  c1e104               shl ecx, 4
// 005f0dc1  03ca                 add ecx, edx
// 005f0dc3  2bc8                 sub ecx, eax
// 005f0dc5  894b44               mov dword ptr [ebx + 0x44], ecx
// 005f0dc8  7805                 js 0x5f0dcf
// 005f0dca  3b4b3c               cmp ecx, dword ptr [ebx + 0x3c]
// 005f0dcd  7e0f                 jle 0x5f0dde
// 005f0dcf  33ed                 xor ebp, ebp
// 005f0dd1  03c8                 add ecx, eax
// 005f0dd3  55                   push ebp
// 005f0dd4  51                   push ecx
// 005f0dd5  8bcb                 mov ecx, ebx
// 005f0dd7  e8e4430000           call 0x5f51c0
// 005f0ddc  eb02                 jmp 0x5f0de0
// 005f0dde  33ed                 xor ebp, ebp
// 005f0de0  8b4344               mov eax, dword ptr [ebx + 0x44]
// 005f0de3  8d4801               lea ecx, [eax + 1]
// 005f0de6  3b4b3c               cmp ecx, dword ptr [ebx + 0x3c]
// 005f0de9  7e0f                 jle 0x5f0dfa
// 005f0deb  8b5334               mov edx, dword ptr [ebx + 0x34]
// 005f0dee  6a01                 push 1
// 005f0df0  03d0                 add edx, eax
// 005f0df2  52                   push edx
// 005f0df3  8bcb                 mov ecx, ebx
// 005f0df5  e8c6430000           call 0x5f51c0
// 005f0dfa  8b4344               mov eax, dword ptr [ebx + 0x44]
// 005f0dfd  8b4b40               mov ecx, dword ptr [ebx + 0x40]
// 005f0e00  8a0c08               mov cl, byte ptr [eax + ecx]
// 005f0e03  40                   inc eax
// 005f0e04  0fb6d1               movzx edx, cl
// 005f0e07  894344               mov dword ptr [ebx + 0x44], eax
// 005f0e0a  895608               mov dword ptr [esi + 8], edx
// 005f0e0d  8b4344               mov eax, dword ptr [ebx + 0x44]
// 005f0e10  8d4801               lea ecx, [eax + 1]
// 005f0e13  3b4b3c               cmp ecx, dword ptr [ebx + 0x3c]
// 005f0e16  7e0f                 jle 0x5f0e27
// 005f0e18  8b5334               mov edx, dword ptr [ebx + 0x34]
// 005f0e1b  6a01                 push 1
// 005f0e1d  03d0                 add edx, eax
// 005f0e1f  52                   push edx
// 005f0e20  8bcb                 mov ecx, ebx
// 005f0e22  e899430000           call 0x5f51c0
// 005f0e27  8b4344               mov eax, dword ptr [ebx + 0x44]
// 005f0e2a  8b4b40               mov ecx, dword ptr [ebx + 0x40]
// 005f0e2d  8a0c08               mov cl, byte ptr [eax + ecx]
// 005f0e30  40                   inc eax
// 005f0e31  0fb6d1               movzx edx, cl
// 005f0e34  894344               mov dword ptr [ebx + 0x44], eax
// 005f0e37  89560c               mov dword ptr [esi + 0xc], edx
// 005f0e3a  8b4344               mov eax, dword ptr [ebx + 0x44]
// 005f0e3d  8d4801               lea ecx, [eax + 1]
// 005f0e40  3b4b3c               cmp ecx, dword ptr [ebx + 0x3c]
// 005f0e43  7e0f                 jle 0x5f0e54
// 005f0e45  8b5334               mov edx, dword ptr [ebx + 0x34]
// 005f0e48  6a01                 push 1
// 005f0e4a  03d0                 add edx, eax
// 005f0e4c  52                   push edx
// 005f0e4d  8bcb                 mov ecx, ebx
// 005f0e4f  e86c430000           call 0x5f51c0
// 005f0e54  8b4344               mov eax, dword ptr [ebx + 0x44]
// 005f0e57  8b4b40               mov ecx, dword ptr [ebx + 0x40]
// 005f0e5a  8a0c08               mov cl, byte ptr [eax + ecx]
// 005f0e5d  40                   inc eax
// 005f0e5e  894344               mov dword ptr [ebx + 0x44], eax
// 005f0e61  8b560c               mov edx, dword ptr [esi + 0xc]
// 005f0e64  0faf5610             imul edx, dword ptr [esi + 0x10]
// 005f0e68  0faf5608             imul edx, dword ptr [esi + 8]
// 005f0e6c  0fb6f9               movzx edi, cl
// 005f0e6f  52                   push edx
// 005f0e70  897c241c             mov dword ptr [esp + 0x1c], edi
// 005f0e74  e82794ffff           call 0x5ea2a0
// 005f0e79  894604               mov dword ptr [esi + 4], eax
// 005f0e7c  8bc7                 mov eax, edi
// 005f0e7e  83c404               add esp, 4
// 005f0e81  2bc5                 sub eax, ebp
// 005f0e83  7469                 je 0x5f0eee
// 005f0e85  83e802               sub eax, 2
// 005f0e88  745a                 je 0x5f0ee4
// 005f0e8a  83e80e               sub eax, 0xe
// 005f0e8d  744b                 je 0x5f0eda
// 005f0e8f  6830259c00           push 0x9c2530
// 005f0e94  8d4c2444             lea ecx, [esp + 0x44]
// 005f0e98  ff15f4b69800         call dword ptr [0x98b6f4]
// 005f0e9e  8d44245c             lea eax, [esp + 0x5c]
// 005f0ea2  50                   push eax
// 005f0ea3  8bcb                 mov ecx, ebx
// 005f0ea5  89ac24e4000000       mov dword ptr [esp + 0xe4], ebp
// 005f0eac  e80fb4ffff           call 0x5ec2c0
// 005f0eb1  50                   push eax
// 005f0eb2  8d4c2444             lea ecx, [esp + 0x44]
// 005f0eb6  51                   push ecx
// 005f0eb7  8d8c2480000000       lea ecx, [esp + 0x80]
// 005f0ebe  c68424e800000001     mov byte ptr [esp + 0xe8], 1
// 005f0ec6  e87559edff           call 0x4c6840
// 005f0ecb  689014aa00           push 0xaa1490
// 005f0ed0  8d54247c             lea edx, [esp + 0x7c]
// 005f0ed4  52                   push edx
// 005f0ed5  e89e392000           call 0x7f4878
// 005f0eda  c744241004000000     mov dword ptr [esp + 0x10], 4
// 005f0ee2  eb1b                 jmp 0x5f0eff
// 005f0ee4  c744241001000000     mov dword ptr [esp + 0x10], 1
// 005f0eec  eb11                 jmp 0x5f0eff
// 005f0eee  bf00010000           mov edi, 0x100
// 005f0ef3  897c2418             mov dword ptr [esp + 0x18], edi
// 005f0ef7  c744241008000000     mov dword ptr [esp + 0x10], 8
// 005f0eff  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 005f0f02  8b4344               mov eax, dword ptr [ebx + 0x44]
// 005f0f05  8d440105             lea eax, [ecx + eax + 5]
// 005f0f09  2bc1                 sub eax, ecx
// 005f0f0b  894344               mov dword ptr [ebx + 0x44], eax
// 005f0f0e  7805                 js 0x5f0f15
// 005f0f10  3b433c               cmp eax, dword ptr [ebx + 0x3c]
// 005f0f13  7e0b                 jle 0x5f0f20
// 005f0f15  03c1                 add eax, ecx
// 005f0f17  55                   push ebp
// 005f0f18  50                   push eax
// 005f0f19  8bcb                 mov ecx, ebx
// 005f0f1b  e8a0420000           call 0x5f51c0
// 005f0f20  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 005f0f23  8b5344               mov edx, dword ptr [ebx + 0x44]
// 005f0f26  8d441104             lea eax, [ecx + edx + 4]
// 005f0f2a  2bc1                 sub eax, ecx
// 005f0f2c  894344               mov dword ptr [ebx + 0x44], eax
// 005f0f2f  7805                 js 0x5f0f36
// 005f0f31  3b433c               cmp eax, dword ptr [ebx + 0x3c]
// 005f0f34  7e0b                 jle 0x5f0f41
// 005f0f36  03c1                 add eax, ecx
// 005f0f38  55                   push ebp
// 005f0f39  50                   push eax
// 005f0f3a  8bcb                 mov ecx, ebx
// 005f0f3c  e87f420000           call 0x5f51c0
// 005f0f41  8b4344               mov eax, dword ptr [ebx + 0x44]
// 005f0f44  8d4804               lea ecx, [eax + 4]
// 005f0f47  3b4b3c               cmp ecx, dword ptr [ebx + 0x3c]
// 005f0f4a  7e0f                 jle 0x5f0f5b
// 005f0f4c  8b5334               mov edx, dword ptr [ebx + 0x34]
// 005f0f4f  6a04                 push 4
// 005f0f51  03d0                 add edx, eax
// 005f0f53  52                   push edx
// 005f0f54  8bcb                 mov ecx, ebx
// 005f0f56  e865420000           call 0x5f51c0
// 005f0f5b  83434404             add dword ptr [ebx + 0x44], 4
// 005f0f5f  807b2400             cmp byte ptr [ebx + 0x24], 0
// 005f0f63  8b4344               mov eax, dword ptr [ebx + 0x44]
// 005f0f66  8b4b40               mov ecx, dword ptr [ebx + 0x40]
// 005f0f69  7427                 je 0x5f0f92
// 005f0f6b  0fb65408ff           movzx edx, byte ptr [eax + ecx - 1]
// 005f0f70  03c1                 add eax, ecx
// 005f0f72  8a48fe               mov cl, byte ptr [eax - 2]
// 005f0f75  8854241c             mov byte ptr [esp + 0x1c], dl
// 005f0f79  0fb650fd             movzx edx, byte ptr [eax - 3]
// 005f0f7d  8a40fc               mov al, byte ptr [eax - 4]
// 005f0f80  884c241d             mov byte ptr [esp + 0x1d], cl
// 005f0f84  8854241e             mov byte ptr [esp + 0x1e], dl
// 005f0f88  8844241f             mov byte ptr [esp + 0x1f], al
// 005f0f8c  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005f0f90  eb04                 jmp 0x5f0f96
// 005f0f92  8b4401fc             mov eax, dword ptr [ecx + eax - 4]
// 005f0f96  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 005f0f99  2bc1                 sub eax, ecx
// 005f0f9b  894344               mov dword ptr [ebx + 0x44], eax
// 005f0f9e  7805                 js 0x5f0fa5
// 005f0fa0  3b433c               cmp eax, dword ptr [ebx + 0x3c]
// 005f0fa3  7e0b                 jle 0x5f0fb0
// 005f0fa5  03c1                 add eax, ecx
// 005f0fa7  55                   push ebp
// 005f0fa8  50                   push eax
// 005f0fa9  8bcb                 mov ecx, ebx
// 005f0fab  e810420000           call 0x5f51c0
// 005f0fb0  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 005f0fb3  8b5344               mov edx, dword ptr [ebx + 0x44]
// 005f0fb6  8d441128             lea eax, [ecx + edx + 0x28]
// 005f0fba  2bc1                 sub eax, ecx
// 005f0fbc  894344               mov dword ptr [ebx + 0x44], eax
// 005f0fbf  7805                 js 0x5f0fc6
// 005f0fc1  3b433c               cmp eax, dword ptr [ebx + 0x3c]
// 005f0fc4  7e0b                 jle 0x5f0fd1
// 005f0fc6  03c1                 add eax, ecx
// 005f0fc8  55                   push ebp
// 005f0fc9  50                   push eax
// 005f0fca  8bcb                 mov ecx, ebx
// 005f0fcc  e8ef410000           call 0x5f51c0
// 005f0fd1  896c2430             mov dword ptr [esp + 0x30], ebp
// 005f0fd5  896c2434             mov dword ptr [esp + 0x34], ebp
// 005f0fd9  896c242c             mov dword ptr [esp + 0x2c], ebp
// 005f0fdd  6a01                 push 1
// 005f0fdf  57                   push edi
// 005f0fe0  8d4c2434             lea ecx, [esp + 0x34]
// 005f0fe4  c78424e800000002000000 mov dword ptr [esp + 0xe8], 2
// 005f0fef  e89ceeffff           call 0x5efe90
// 005f0ff4  3bfd                 cmp edi, ebp
// 005f0ff6  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 005f0ffa  0f8ec5000000         jle 0x5f10c5
// 005f1000  8b442418             mov eax, dword ptr [esp + 0x18]
// 005f1004  8d7d01               lea edi, [ebp + 1]
// 005f1007  89442418             mov dword ptr [esp + 0x18], eax
// 005f100b  eb03                 jmp 0x5f1010
// 005f100d  8d4900               lea ecx, [ecx]
// 005f1010  8b4344               mov eax, dword ptr [ebx + 0x44]
// 005f1013  8d4801               lea ecx, [eax + 1]
// 005f1016  3b4b3c               cmp ecx, dword ptr [ebx + 0x3c]
// 005f1019  7e0f                 jle 0x5f102a
// 005f101b  8b5334               mov edx, dword ptr [ebx + 0x34]
// 005f101e  6a01                 push 1
// 005f1020  03d0                 add edx, eax
// 005f1022  52                   push edx
// 005f1023  8bcb                 mov ecx, ebx
// 005f1025  e896410000           call 0x5f51c0
// 005f102a  8b4344               mov eax, dword ptr [ebx + 0x44]
// 005f102d  8b4b40               mov ecx, dword ptr [ebx + 0x40]
// 005f1030  8a0c08               mov cl, byte ptr [eax + ecx]
// 005f1033  40                   inc eax
// 005f1034  894344               mov dword ptr [ebx + 0x44], eax
// 005f1037  884f01               mov byte ptr [edi + 1], cl
// 005f103a  8b4344               mov eax, dword ptr [ebx + 0x44]
// 005f103d  8d5001               lea edx, [eax + 1]
// 005f1040  3b533c               cmp edx, dword ptr [ebx + 0x3c]
// 005f1043  7e0f                 jle 0x5f1054
// 005f1045  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 005f1048  03c8                 add ecx, eax
// 005f104a  6a01                 push 1
// 005f104c  51                   push ecx
// 005f104d  8bcb                 mov ecx, ebx
// 005f104f  e86c410000           call 0x5f51c0
// 005f1054  8b4344               mov eax, dword ptr [ebx + 0x44]
// 005f1057  8b5340               mov edx, dword ptr [ebx + 0x40]
// 005f105a  8a0c10               mov cl, byte ptr [eax + edx]
// 005f105d  40                   inc eax
// 005f105e  894344               mov dword ptr [ebx + 0x44], eax
// 005f1061  880f                 mov byte ptr [edi], cl
// 005f1063  8b4344               mov eax, dword ptr [ebx + 0x44]
// 005f1066  8d4801               lea ecx, [eax + 1]
// 005f1069  3b4b3c               cmp ecx, dword ptr [ebx + 0x3c]
// 005f106c  7e0f                 jle 0x5f107d
// 005f106e  8b5334               mov edx, dword ptr [ebx + 0x34]
// 005f1071  6a01                 push 1
// 005f1073  03d0                 add edx, eax
// 005f1075  52                   push edx
// 005f1076  8bcb                 mov ecx, ebx
// 005f1078  e843410000           call 0x5f51c0
// 005f107d  8b4344               mov eax, dword ptr [ebx + 0x44]
// 005f1080  8b4b40               mov ecx, dword ptr [ebx + 0x40]
// 005f1083  8a0c08               mov cl, byte ptr [eax + ecx]
// 005f1086  40                   inc eax
// 005f1087  894344               mov dword ptr [ebx + 0x44], eax
// 005f108a  884fff               mov byte ptr [edi - 1], cl
// 005f108d  8b4344               mov eax, dword ptr [ebx + 0x44]
// 005f1090  8d5001               lea edx, [eax + 1]
// 005f1093  3b533c               cmp edx, dword ptr [ebx + 0x3c]
// 005f1096  7e0f                 jle 0x5f10a7
// 005f1098  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 005f109b  03c8                 add ecx, eax
// 005f109d  6a01                 push 1
// 005f109f  51                   push ecx
// 005f10a0  8bcb                 mov ecx, ebx
// 005f10a2  e819410000           call 0x5f51c0
// 005f10a7  8b4344               mov eax, dword ptr [ebx + 0x44]
// 005f10aa  8b5340               mov edx, dword ptr [ebx + 0x40]
// 005f10ad  8a0c10               mov cl, byte ptr [eax + edx]
// 005f10b0  40                   inc eax
// 005f10b1  894344               mov dword ptr [ebx + 0x44], eax
// 005f10b4  884f02               mov byte ptr [edi + 2], cl
// 005f10b7  83c704               add edi, 4
// 005f10ba  836c241801           sub dword ptr [esp + 0x18], 1
// 005f10bf  0f854bffffff         jne 0x5f1010
// 005f10c5  8b460c               mov eax, dword ptr [esi + 0xc]
// 005f10c8  83caff               or edx, 0xffffffff
// 005f10cb  85c0                 test eax, eax
// 005f10cd  7d15                 jge 0x5f10e4
// 005f10cf  f7d8                 neg eax
// 005f10d1  89460c               mov dword ptr [esi + 0xc], eax
// 005f10d4  33c9                 xor ecx, ecx
// 005f10d6  89442428             mov dword ptr [esp + 0x28], eax
// 005f10da  c744242401000000     mov dword ptr [esp + 0x24], 1
// 005f10e2  eb0b                 jmp 0x5f10ef
// 005f10e4  8d48ff               lea ecx, [eax - 1]
// 005f10e7  89542428             mov dword ptr [esp + 0x28], edx
// 005f10eb  89542424             mov dword ptr [esp + 0x24], edx
// 005f10ef  8b442410             mov eax, dword ptr [esp + 0x10]
// 005f10f3  83f801               cmp eax, 1
// 005f10f6  0f8506030000         jne 0x5f1402
// 005f10fc  8b4608               mov eax, dword ptr [esi + 8]
// 005f10ff  83c007               add eax, 7
// 005f1102  c1f803               sar eax, 3
// 005f1105  8bd0                 mov edx, eax
// 005f1107  83e203               and edx, 3
// 005f110a  8944241c             mov dword ptr [esp + 0x1c], eax
// 005f110e  740d                 je 0x5f111d
// 005f1110  bf04000000           mov edi, 4
// 005f1115  2bfa                 sub edi, edx
// 005f1117  03c7                 add eax, edi
// 005f1119  8944241c             mov dword ptr [esp + 0x1c], eax
// 005f111d  894c2418             mov dword ptr [esp + 0x18], ecx
// 005f1121  3b4c2428             cmp ecx, dword ptr [esp + 0x28]
// 005f1125  0f84cd040000         je 0x5f15f8
// 005f112b  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005f112f  90                   nop 
// 005f1130  8b7e08               mov edi, dword ptr [esi + 8]
// 005f1133  0faff9               imul edi, ecx
// 005f1136  33c0                 xor eax, eax
// 005f1138  89442410             mov dword ptr [esp + 0x10], eax
// 005f113c  8d3c7f               lea edi, [edi + edi*2]
// 005f113f  85d2                 test edx, edx
// 005f1141  0f8ea4020000         jle 0x5f13eb
// 005f1147  89542420             mov dword ptr [esp + 0x20], edx
// 005f114b  eb03                 jmp 0x5f1150
// 005f114d  8d4900               lea ecx, [ecx]
// 005f1150  8b4b44               mov ecx, dword ptr [ebx + 0x44]
// 005f1153  8d5101               lea edx, [ecx + 1]
// 005f1156  3b533c               cmp edx, dword ptr [ebx + 0x3c]
// 005f1159  7e13                 jle 0x5f116e
// 005f115b  8b4334               mov eax, dword ptr [ebx + 0x34]
// 005f115e  03c1                 add eax, ecx
// 005f1160  6a01                 push 1
// 005f1162  50                   push eax
// 005f1163  8bcb                 mov ecx, ebx
// 005f1165  e856400000           call 0x5f51c0
// 005f116a  8b442410             mov eax, dword ptr [esp + 0x10]
// 005f116e  8b5344               mov edx, dword ptr [ebx + 0x44]
// 005f1171  8b4b40               mov ecx, dword ptr [ebx + 0x40]
// 005f1174  8a0c0a               mov cl, byte ptr [edx + ecx]
// 005f1177  42                   inc edx
// 005f1178  895344               mov dword ptr [ebx + 0x44], edx
// 005f117b  3b4608               cmp eax, dword ptr [esi + 8]
// 005f117e  884c2417             mov byte ptr [esp + 0x17], cl
// 005f1182  0f8d50020000         jge 0x5f13d8
// 005f1188  8b5604               mov edx, dword ptr [esi + 4]
// 005f118b  0fb6c9               movzx ecx, cl
// 005f118e  c1e907               shr ecx, 7
// 005f1191  894c2410             mov dword ptr [esp + 0x10], ecx
// 005f1195  0fb64c8d00           movzx ecx, byte ptr [ebp + ecx*4]
// 005f119a  880c17               mov byte ptr [edi + edx], cl
// 005f119d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005f11a1  0fb64c8d01           movzx ecx, byte ptr [ebp + ecx*4 + 1]
// 005f11a6  8b5604               mov edx, dword ptr [esi + 4]
// 005f11a9  884c3a01             mov byte ptr [edx + edi + 1], cl
// 005f11ad  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005f11b1  0fb64c8d02           movzx ecx, byte ptr [ebp + ecx*4 + 2]
// 005f11b6  8b5604               mov edx, dword ptr [esi + 4]
// 005f11b9  884c3a02             mov byte ptr [edx + edi + 2], cl
// 005f11bd  8a4c2417             mov cl, byte ptr [esp + 0x17]
// 005f11c1  40                   inc eax
// 005f11c2  83c704               add edi, 4
// 005f11c5  3b4608               cmp eax, dword ptr [esi + 8]
// 005f11c8  89442410             mov dword ptr [esp + 0x10], eax
// 005f11cc  0f8d06020000         jge 0x5f13d8
// 005f11d2  8b5604               mov edx, dword ptr [esi + 4]
// 005f11d5  0fb6c9               movzx ecx, cl
// 005f11d8  c1e906               shr ecx, 6
// 005f11db  83e101               and ecx, 1
// 005f11de  894c2410             mov dword ptr [esp + 0x10], ecx
// 005f11e2  0fb64c8d00           movzx ecx, byte ptr [ebp + ecx*4]
// 005f11e7  880c17               mov byte ptr [edi + edx], cl
// 005f11ea  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005f11ee  0fb64c8d01           movzx ecx, byte ptr [ebp + ecx*4 + 1]
// 005f11f3  8b5604               mov edx, dword ptr [esi + 4]
// 005f11f6  884c3a01             mov byte ptr [edx + edi + 1], cl
// 005f11fa  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005f11fe  0fb64c8d02           movzx ecx, byte ptr [ebp + ecx*4 + 2]
// 005f1203  8b5604               mov edx, dword ptr [esi + 4]
// 005f1206  884c3a02             mov byte ptr [edx + edi + 2], cl
// 005f120a  8a4c2417             mov cl, byte ptr [esp + 0x17]
// 005f120e  40                   inc eax
// 005f120f  83c704               add edi, 4
// 005f1212  3b4608               cmp eax, dword ptr [esi + 8]
// 005f1215  89442410             mov dword ptr [esp + 0x10], eax
// 005f1219  0f8db9010000         jge 0x5f13d8
// 005f121f  8b5604               mov edx, dword ptr [esi + 4]
// 005f1222  0fb6c9               movzx ecx, cl
// 005f1225  c1e905               shr ecx, 5
// 005f1228  83e101               and ecx, 1
// 005f122b  894c2410             mov dword ptr [esp + 0x10], ecx
// 005f122f  0fb64c8d00           movzx ecx, byte ptr [ebp + ecx*4]
// 005f1234  880c17               mov byte ptr [edi + edx], cl
// 005f1237  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005f123b  0fb64c8d01           movzx ecx, byte ptr [ebp + ecx*4 + 1]
// 005f1240  8b5604               mov edx, dword ptr [esi + 4]
// 005f1243  884c3a01             mov byte ptr [edx + edi + 1], cl
// 005f1247  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005f124b  0fb64c8d02           movzx ecx, byte ptr [ebp + ecx*4 + 2]
// 005f1250  8b5604               mov edx, dword ptr [esi + 4]
// 005f1253  884c3a02             mov byte ptr [edx + edi + 2], cl
// 005f1257  8a4c2417             mov cl, byte ptr [esp + 0x17]
// 005f125b  40                   inc eax
// 005f125c  83c704               add edi, 4
// 005f125f  3b4608               cmp eax, dword ptr [esi + 8]
// 005f1262  89442410             mov dword ptr [esp + 0x10], eax
// 005f1266  0f8d6c010000         jge 0x5f13d8
// 005f126c  8b5604               mov edx, dword ptr [esi + 4]
// 005f126f  0fb6c9               movzx ecx, cl
// 005f1272  c1e904               shr ecx, 4
// 005f1275  83e101               and ecx, 1
// 005f1278  894c2410             mov dword ptr [esp + 0x10], ecx
// 005f127c  0fb64c8d00           movzx ecx, byte ptr [ebp + ecx*4]
// 005f1281  880c17               mov byte ptr [edi + edx], cl
// 005f1284  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005f1288  0fb64c8d01           movzx ecx, byte ptr [ebp + ecx*4 + 1]
// 005f128d  8b5604               mov edx, dword ptr [esi + 4]
// 005f1290  884c3a01             mov byte ptr [edx + edi + 1], cl
// 005f1294  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005f1298  0fb64c8d02           movzx ecx, byte ptr [ebp + ecx*4 + 2]
// 005f129d  8b5604               mov edx, dword ptr [esi + 4]
// 005f12a0  884c3a02             mov byte ptr [edx + edi + 2], cl
// 005f12a4  8a4c2417             mov cl, byte ptr [esp + 0x17]
// 005f12a8  40                   inc eax
// 005f12a9  83c704               add edi, 4
// 005f12ac  3b4608               cmp eax, dword ptr [esi + 8]
// 005f12af  89442410             mov dword ptr [esp + 0x10], eax
// 005f12b3  0f8d1f010000         jge 0x5f13d8
// 005f12b9  8b5604               mov edx, dword ptr [esi + 4]
// 005f12bc  0fb6c9               movzx ecx, cl
// 005f12bf  c1e903               shr ecx, 3
// 005f12c2  83e101               and ecx, 1
// 005f12c5  894c2410             mov dword ptr [esp + 0x10], ecx
// 005f12c9  0fb64c8d00           movzx ecx, byte ptr [ebp + ecx*4]
// 005f12ce  880c17               mov byte ptr [edi + edx], cl
// 005f12d1  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005f12d5  0fb64c8d01           movzx ecx, byte ptr [ebp + ecx*4 + 1]
// 005f12da  8b5604               mov edx, dword ptr [esi + 4]
// 005f12dd  884c3a01             mov byte ptr [edx + edi + 1], cl
// 005f12e1  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005f12e5  0fb64c8d02           movzx ecx, byte ptr [ebp + ecx*4 + 2]
// 005f12ea  8b5604               mov edx, dword ptr [esi + 4]
// 005f12ed  884c3a02             mov byte ptr [edx + edi + 2], cl
// 005f12f1  8a4c2417             mov cl, byte ptr [esp + 0x17]
// 005f12f5  40                   inc eax
// 005f12f6  83c704               add edi, 4
// 005f12f9  3b4608               cmp eax, dword ptr [esi + 8]
// 005f12fc  89442410             mov dword ptr [esp + 0x10], eax
// 005f1300  0f8dd2000000         jge 0x5f13d8
// 005f1306  8b5604               mov edx, dword ptr [esi + 4]
// 005f1309  0fb6c9               movzx ecx, cl
// 005f130c  c1e902               shr ecx, 2
// 005f130f  83e101               and ecx, 1
// 005f1312  894c2410             mov dword ptr [esp + 0x10], ecx
// 005f1316  0fb64c8d00           movzx ecx, byte ptr [ebp + ecx*4]
// 005f131b  880c17               mov byte ptr [edi + edx], cl
// 005f131e  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005f1322  0fb64c8d01           movzx ecx, byte ptr [ebp + ecx*4 + 1]
// 005f1327  8b5604               mov edx, dword ptr [esi + 4]
// 005f132a  884c3a01             mov byte ptr [edx + edi + 1], cl
// 005f132e  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005f1332  0fb64c8d02           movzx ecx, byte ptr [ebp + ecx*4 + 2]
// 005f1337  8b5604               mov edx, dword ptr [esi + 4]
// 005f133a  884c3a02             mov byte ptr [edx + edi + 2], cl
// 005f133e  8a4c2417             mov cl, byte ptr [esp + 0x17]
// 005f1342  40                   inc eax
// 005f1343  83c704               add edi, 4
// 005f1346  3b4608               cmp eax, dword ptr [esi + 8]
// 005f1349  89442410             mov dword ptr [esp + 0x10], eax
// 005f134d  0f8d85000000         jge 0x5f13d8
// 005f1353  8b5604               mov edx, dword ptr [esi + 4]
// 005f1356  0fb6c9               movzx ecx, cl
// 005f1359  d1e9                 shr ecx, 1
// 005f135b  83e101               and ecx, 1
// 005f135e  894c2410             mov dword ptr [esp + 0x10], ecx
// 005f1362  0fb64c8d00           movzx ecx, byte ptr [ebp + ecx*4]
// 005f1367  880c17               mov byte ptr [edi + edx], cl
// 005f136a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005f136e  0fb64c8d01           movzx ecx, byte ptr [ebp + ecx*4 + 1]
// 005f1373  8b5604               mov edx, dword ptr [esi + 4]
// 005f1376  884c3a01             mov byte ptr [edx + edi + 1], cl
// 005f137a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005f137e  0fb64c8d02           movzx ecx, byte ptr [ebp + ecx*4 + 2]
// 005f1383  8b5604               mov edx, dword ptr [esi + 4]
// 005f1386  884c3a02             mov byte ptr [edx + edi + 2], cl
// 005f138a  8a4c2417             mov cl, byte ptr [esp + 0x17]
// 005f138e  40                   inc eax
// 005f138f  83c704               add edi, 4
// 005f1392  3b4608               cmp eax, dword ptr [esi + 8]
// 005f1395  89442410             mov dword ptr [esp + 0x10], eax
// 005f1399  7d3d                 jge 0x5f13d8
// 005f139b  8b5604               mov edx, dword ptr [esi + 4]
// 005f139e  0fb6c9               movzx ecx, cl
// 005f13a1  83e101               and ecx, 1
// 005f13a4  894c2410             mov dword ptr [esp + 0x10], ecx
// 005f13a8  0fb64c8d00           movzx ecx, byte ptr [ebp + ecx*4]
// 005f13ad  880c17               mov byte ptr [edi + edx], cl
// 005f13b0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005f13b4  0fb64c8d01           movzx ecx, byte ptr [ebp + ecx*4 + 1]
// 005f13b9  8b5604               mov edx, dword ptr [esi + 4]
// 005f13bc  884c3a01             mov byte ptr [edx + edi + 1], cl
// 005f13c0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005f13c4  0fb64c8d02           movzx ecx, byte ptr [ebp + ecx*4 + 2]
// 005f13c9  8b5604               mov edx, dword ptr [esi + 4]
// 005f13cc  40                   inc eax
// 005f13cd  884c3a02             mov byte ptr [edx + edi + 2], cl
// 005f13d1  89442410             mov dword ptr [esp + 0x10], eax
// 005f13d5  83c704               add edi, 4
// 005f13d8  836c242001           sub dword ptr [esp + 0x20], 1
// 005f13dd  0f856dfdffff         jne 0x5f1150
// 005f13e3  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005f13e7  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005f13eb  034c2424             add ecx, dword ptr [esp + 0x24]
// 005f13ef  894c2418             mov dword ptr [esp + 0x18], ecx
// 005f13f3  3b4c2428             cmp ecx, dword ptr [esp + 0x28]
// 005f13f7  0f8533fdffff         jne 0x5f1130
// 005f13fd  e9f6010000           jmp 0x5f15f8
// 005f1402  83f804               cmp eax, 4
// 005f1405  0f8521010000         jne 0x5f152c
// 005f140b  8b4608               mov eax, dword ptr [esi + 8]
// 005f140e  40                   inc eax
// 005f140f  d1f8                 sar eax, 1
// 005f1411  8bd0                 mov edx, eax
// 005f1413  83e203               and edx, 3
// 005f1416  89442420             mov dword ptr [esp + 0x20], eax
// 005f141a  740d                 je 0x5f1429
// 005f141c  bf04000000           mov edi, 4
// 005f1421  2bfa                 sub edi, edx
// 005f1423  03c7                 add eax, edi
// 005f1425  89442420             mov dword ptr [esp + 0x20], eax
// 005f1429  894c2418             mov dword ptr [esp + 0x18], ecx
// 005f142d  3b4c2428             cmp ecx, dword ptr [esp + 0x28]
// 005f1431  0f84c1010000         je 0x5f15f8
// 005f1437  eb07                 jmp 0x5f1440
// 005f1439  8da42400000000       lea esp, [esp]
// 005f1440  8b7e08               mov edi, dword ptr [esi + 8]
// 005f1443  8b442418             mov eax, dword ptr [esp + 0x18]
// 005f1447  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005f144b  0faff8               imul edi, eax
// 005f144e  03ff                 add edi, edi
// 005f1450  03ff                 add edi, edi
// 005f1452  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005f145a  85c9                 test ecx, ecx
// 005f145c  0f8eb3000000         jle 0x5f1515
// 005f1462  894c241c             mov dword ptr [esp + 0x1c], ecx
// 005f1466  8b4344               mov eax, dword ptr [ebx + 0x44]
// 005f1469  8d5001               lea edx, [eax + 1]
// 005f146c  3b533c               cmp edx, dword ptr [ebx + 0x3c]
// 005f146f  7e0f                 jle 0x5f1480
// 005f1471  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 005f1474  03c8                 add ecx, eax
// 005f1476  6a01                 push 1
// 005f1478  51                   push ecx
// 005f1479  8bcb                 mov ecx, ebx
// 005f147b  e8403d0000           call 0x5f51c0
// 005f1480  8b4344               mov eax, dword ptr [ebx + 0x44]
// 005f1483  8b5340               mov edx, dword ptr [ebx + 0x40]
// 005f1486  8a0c10               mov cl, byte ptr [eax + edx]
// 005f1489  8b542410             mov edx, dword ptr [esp + 0x10]
// 005f148d  40                   inc eax
// 005f148e  0fb6c9               movzx ecx, cl
// 005f1491  894344               mov dword ptr [ebx + 0x44], eax
// 005f1494  8bc1                 mov eax, ecx
// 005f1496  83e10f               and ecx, 0xf
// 005f1499  c1e804               shr eax, 4
// 005f149c  3b5608               cmp edx, dword ptr [esi + 8]
// 005f149f  894c243c             mov dword ptr [esp + 0x3c], ecx
// 005f14a3  7d2e                 jge 0x5f14d3
// 005f14a5  0fb6548500           movzx edx, byte ptr [ebp + eax*4]
// 005f14aa  8b4e04               mov ecx, dword ptr [esi + 4]
// 005f14ad  ff442410             inc dword ptr [esp + 0x10]
// 005f14b1  88140f               mov byte ptr [edi + ecx], dl
// 005f14b4  0fb6548501           movzx edx, byte ptr [ebp + eax*4 + 1]
// 005f14b9  8b4e04               mov ecx, dword ptr [esi + 4]
// 005f14bc  88543901             mov byte ptr [ecx + edi + 1], dl
// 005f14c0  0fb6548502           movzx edx, byte ptr [ebp + eax*4 + 2]
// 005f14c5  8b4e04               mov ecx, dword ptr [esi + 4]
// 005f14c8  88543902             mov byte ptr [ecx + edi + 2], dl
// 005f14cc  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 005f14d0  83c704               add edi, 4
// 005f14d3  8b442410             mov eax, dword ptr [esp + 0x10]
// 005f14d7  3b4608               cmp eax, dword ptr [esi + 8]
// 005f14da  7d2a                 jge 0x5f1506
// 005f14dc  0fb6448d00           movzx eax, byte ptr [ebp + ecx*4]
// 005f14e1  8b5604               mov edx, dword ptr [esi + 4]
// 005f14e4  ff442410             inc dword ptr [esp + 0x10]
// 005f14e8  880417               mov byte ptr [edi + edx], al
// 005f14eb  0fb6448d01           movzx eax, byte ptr [ebp + ecx*4 + 1]
// 005f14f0  8b5604               mov edx, dword ptr [esi + 4]
// 005f14f3  88443a01             mov byte ptr [edx + edi + 1], al
// 005f14f7  0fb6448d02           movzx eax, byte ptr [ebp + ecx*4 + 2]
// 005f14fc  8b5604               mov edx, dword ptr [esi + 4]
// 005f14ff  88443a02             mov byte ptr [edx + edi + 2], al
// 005f1503  83c704               add edi, 4
// 005f1506  836c241c01           sub dword ptr [esp + 0x1c], 1
// 005f150b  0f8555ffffff         jne 0x5f1466
// 005f1511  8b442418             mov eax, dword ptr [esp + 0x18]
// 005f1515  03442424             add eax, dword ptr [esp + 0x24]
// 005f1519  89442418             mov dword ptr [esp + 0x18], eax
// 005f151d  3b442428             cmp eax, dword ptr [esp + 0x28]
// 005f1521  0f8519ffffff         jne 0x5f1440
// 005f1527  e9cc000000           jmp 0x5f15f8
// 005f152c  83f808               cmp eax, 8
// 005f152f  0f85c3000000         jne 0x5f15f8
// 005f1535  8b7e08               mov edi, dword ptr [esi + 8]
// 005f1538  8bc7                 mov eax, edi
// 005f153a  83e003               and eax, 3
// 005f153d  897c241c             mov dword ptr [esp + 0x1c], edi
// 005f1541  740d                 je 0x5f1550
// 005f1543  ba04000000           mov edx, 4
// 005f1548  2bd0                 sub edx, eax
// 005f154a  03fa                 add edi, edx
// 005f154c  897c241c             mov dword ptr [esp + 0x1c], edi
// 005f1550  894c2418             mov dword ptr [esp + 0x18], ecx
// 005f1554  3b4c2428             cmp ecx, dword ptr [esp + 0x28]
// 005f1558  0f849a000000         je 0x5f15f8
// 005f155e  8bff                 mov edi, edi
// 005f1560  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005f1568  85ff                 test edi, edi
// 005f156a  7e76                 jle 0x5f15e2
// 005f156c  897c2420             mov dword ptr [esp + 0x20], edi
// 005f1570  8b4344               mov eax, dword ptr [ebx + 0x44]
// 005f1573  8d4801               lea ecx, [eax + 1]
// 005f1576  3b4b3c               cmp ecx, dword ptr [ebx + 0x3c]
// 005f1579  7e0f                 jle 0x5f158a
// 005f157b  8b5334               mov edx, dword ptr [ebx + 0x34]
// 005f157e  6a01                 push 1
// 005f1580  03d0                 add edx, eax
// 005f1582  52                   push edx
// 005f1583  8bcb                 mov ecx, ebx
// 005f1585  e8363c0000           call 0x5f51c0
// 005f158a  8b4344               mov eax, dword ptr [ebx + 0x44]
// 005f158d  8b4b40               mov ecx, dword ptr [ebx + 0x40]
// 005f1590  8a0c08               mov cl, byte ptr [eax + ecx]
// 005f1593  40                   inc eax
// 005f1594  894344               mov dword ptr [ebx + 0x44], eax
// 005f1597  8b4608               mov eax, dword ptr [esi + 8]
// 005f159a  39442410             cmp dword ptr [esp + 0x10], eax
// 005f159e  7d3b                 jge 0x5f15db
// 005f15a0  0faf442418           imul eax, dword ptr [esp + 0x18]
// 005f15a5  03442410             add eax, dword ptr [esp + 0x10]
// 005f15a9  8b5604               mov edx, dword ptr [esi + 4]
// 005f15ac  0fb6f9               movzx edi, cl
// 005f15af  0fb64cbd00           movzx ecx, byte ptr [ebp + edi*4]
// 005f15b4  03c0                 add eax, eax
// 005f15b6  03c0                 add eax, eax
// 005f15b8  ff442410             inc dword ptr [esp + 0x10]
// 005f15bc  880c10               mov byte ptr [eax + edx], cl
// 005f15bf  0fb64cbd01           movzx ecx, byte ptr [ebp + edi*4 + 1]
// 005f15c4  8b5604               mov edx, dword ptr [esi + 4]
// 005f15c7  884c0201             mov byte ptr [edx + eax + 1], cl
// 005f15cb  0fb64cbd02           movzx ecx, byte ptr [ebp + edi*4 + 2]
// 005f15d0  8b5604               mov edx, dword ptr [esi + 4]
// 005f15d3  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 005f15d7  884c0202             mov byte ptr [edx + eax + 2], cl
// 005f15db  836c242001           sub dword ptr [esp + 0x20], 1
// 005f15e0  758e                 jne 0x5f1570
// 005f15e2  8b442418             mov eax, dword ptr [esp + 0x18]
// 005f15e6  03442424             add eax, dword ptr [esp + 0x24]
// 005f15ea  89442418             mov dword ptr [esp + 0x18], eax
// 005f15ee  3b442428             cmp eax, dword ptr [esp + 0x28]
// 005f15f2  0f8568ffffff         jne 0x5f1560
// 005f15f8  8b5608               mov edx, dword ptr [esi + 8]
// 005f15fb  89542420             mov dword ptr [esp + 0x20], edx
// 005f15ff  db442420             fild dword ptr [esp + 0x20]
// 005f1603  83ec08               sub esp, 8
// 005f1606  dc0d28259c00         fmul qword ptr [0x9c2528]
// 005f160c  dd1c24               fstp qword ptr [esp]
// 005f160f  ff1564b89800         call dword ptr [0x98b864]
// 005f1615  83c408               add esp, 8
// 005f1618  e8d3362000           call 0x7f4cf0
// 005f161d  8bc8                 mov ecx, eax
// 005f161f  83e103               and ecx, 3
// 005f1622  89442418             mov dword ptr [esp + 0x18], eax
// 005f1626  740d                 je 0x5f1635
// 005f1628  ba04000000           mov edx, 4
// 005f162d  2bd1                 sub edx, ecx
// 005f162f  03c2                 add eax, edx
// 005f1631  89442418             mov dword ptr [esp + 0x18], eax
// 005f1635  8b460c               mov eax, dword ptr [esi + 0xc]
// 005f1638  83e801               sub eax, 1
// 005f163b  8944241c             mov dword ptr [esp + 0x1c], eax
// 005f163f  0f8897000000         js 0x5f16dc
// 005f1645  eb09                 jmp 0x5f1650
// 005f1647  8da42400000000       lea esp, [esp]
// 005f164e  8bff                 mov edi, edi
// 005f1650  837c241800           cmp dword ptr [esp + 0x18], 0
// 005f1655  c744242400000000     mov dword ptr [esp + 0x24], 0
// 005f165d  7e72                 jle 0x5f16d1
// 005f165f  8b442418             mov eax, dword ptr [esp + 0x18]
// 005f1663  89442420             mov dword ptr [esp + 0x20], eax
// 005f1667  8b4344               mov eax, dword ptr [ebx + 0x44]
// 005f166a  8d4801               lea ecx, [eax + 1]
// 005f166d  3b4b3c               cmp ecx, dword ptr [ebx + 0x3c]
// 005f1670  7e0f                 jle 0x5f1681
// 005f1672  8b5334               mov edx, dword ptr [ebx + 0x34]
// 005f1675  6a01                 push 1
// 005f1677  03d0                 add edx, eax
// 005f1679  52                   push edx
// 005f167a  8bcb                 mov ecx, ebx
// 005f167c  e83f3b0000           call 0x5f51c0
// 005f1681  8b4344               mov eax, dword ptr [ebx + 0x44]
// 005f1684  8b4b40               mov ecx, dword ptr [ebx + 0x40]
// 005f1687  8a1408               mov dl, byte ptr [eax + ecx]
// 005f168a  40                   inc eax
// 005f168b  88542417             mov byte ptr [esp + 0x17], dl
// 005f168f  894344               mov dword ptr [ebx + 0x44], eax
// 005f1692  33d2                 xor edx, edx
// 005f1694  8b7e08               mov edi, dword ptr [esi + 8]
// 005f1697  397c2424             cmp dword ptr [esp + 0x24], edi
// 005f169b  7d2d                 jge 0x5f16ca
// 005f169d  0faf7c241c           imul edi, dword ptr [esp + 0x1c]
// 005f16a2  0fb6442417           movzx eax, byte ptr [esp + 0x17]
// 005f16a7  037c2424             add edi, dword ptr [esp + 0x24]
// 005f16ab  ff442424             inc dword ptr [esp + 0x24]
// 005f16af  b907000000           mov ecx, 7
// 005f16b4  2aca                 sub cl, dl
// 005f16b6  d3e8                 shr eax, cl
// 005f16b8  8b4e04               mov ecx, dword ptr [esi + 4]
// 005f16bb  42                   inc edx
// 005f16bc  83e001               and eax, 1
// 005f16bf  fec8                 dec al
// 005f16c1  83fa08               cmp edx, 8
// 005f16c4  8844b903             mov byte ptr [ecx + edi*4 + 3], al
// 005f16c8  7cca                 jl 0x5f1694
// 005f16ca  836c242001           sub dword ptr [esp + 0x20], 1
// 005f16cf  7596                 jne 0x5f1667
// 005f16d1  836c241c01           sub dword ptr [esp + 0x1c], 1
// 005f16d6  0f8974ffffff         jns 0x5f1650
// 005f16dc  55                   push ebp
// 005f16dd  c78424e4000000ffffffff mov dword ptr [esp + 0xe4], 0xffffffff
// 005f16e8  e8f38cffff           call 0x5ea3e0
// 005f16ed  8b8c24dc000000       mov ecx, dword ptr [esp + 0xdc]
// 005f16f4  83c404               add esp, 4
// 005f16f7  5f                   pop edi
// 005f16f8  5e                   pop esi
// 005f16f9  5d                   pop ebp
// 005f16fa  5b                   pop ebx
// 005f16fb  64890d00000000       mov dword ptr fs:[0], ecx
// 005f1702  81c4d4000000         add esp, 0xd4
// 005f1708  c20400               ret 4
// library g3d-6.09-rbx2008/G3Dcpp\GImage_bmp.cpp (function ?decodeICO@GImage@G3D@@AAEXAAVBinaryInput@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/GImage_bmp.cpp
