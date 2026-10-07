// roc 2008-06 006f3c00  unit: CXTPControls  size: 1229 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f3c00
//
// 006f3c00  83ec3c               sub esp, 0x3c
// 006f3c03  8b442450             mov eax, dword ptr [esp + 0x50]
// 006f3c07  8b00                 mov eax, dword ptr [eax]
// 006f3c09  53                   push ebx
// 006f3c0a  8b5c244c             mov ebx, dword ptr [esp + 0x4c]
// 006f3c0e  55                   push ebp
// 006f3c0f  56                   push esi
// 006f3c10  8be9                 mov ebp, ecx
// 006f3c12  83e010               and eax, 0x10
// 006f3c15  57                   push edi
// 006f3c16  896c2410             mov dword ptr [esp + 0x10], ebp
// 006f3c1a  8944241c             mov dword ptr [esp + 0x1c], eax
// 006f3c1e  8bff                 mov edi, edi
// 006f3c20  8b4d2c               mov ecx, dword ptr [ebp + 0x2c]
// 006f3c23  8d41ff               lea eax, [ecx - 1]
// 006f3c26  33d2                 xor edx, edx
// 006f3c28  8bf8                 mov edi, eax
// 006f3c2a  83ff02               cmp edi, 2
// 006f3c2d  89542418             mov dword ptr [esp + 0x18], edx
// 006f3c31  894c2414             mov dword ptr [esp + 0x14], ecx
// 006f3c35  0f8c8c000000         jl 0x6f3cc7
// 006f3c3b  8bcf                 mov ecx, edi
// 006f3c3d  c1e106               shl ecx, 6
// 006f3c40  8d5c1934             lea ebx, [ecx + ebx + 0x34]
// 006f3c44  eb02                 jmp 0x6f3c48
// 006f3c46  33d2                 xor edx, edx
// 006f3c48  3953f4               cmp dword ptr [ebx - 0xc], edx
// 006f3c4b  746d                 je 0x6f3cba
// 006f3c4d  3913                 cmp dword ptr [ebx], edx
// 006f3c4f  7569                 jne 0x6f3cba
// 006f3c51  3bfa                 cmp edi, edx
// 006f3c53  89542428             mov dword ptr [esp + 0x28], edx
// 006f3c57  8954242c             mov dword ptr [esp + 0x2c], edx
// 006f3c5b  89542430             mov dword ptr [esp + 0x30], edx
// 006f3c5f  8bc7                 mov eax, edi
// 006f3c61  7c57                 jl 0x6f3cba
// 006f3c63  8bf3                 mov esi, ebx
// 006f3c65  837ef400             cmp dword ptr [esi - 0xc], 0
// 006f3c69  743e                 je 0x6f3ca9
// 006f3c6b  83fa02               cmp edx, 2
// 006f3c6e  7405                 je 0x6f3c75
// 006f3c70  833e00               cmp dword ptr [esi], 0
// 006f3c73  753c                 jne 0x6f3cb1
// 006f3c75  85c0                 test eax, eax
// 006f3c77  7c17                 jl 0x6f3c90
// 006f3c79  3b442414             cmp eax, dword ptr [esp + 0x14]
// 006f3c7d  7d11                 jge 0x6f3c90
// 006f3c7f  3b452c               cmp eax, dword ptr [ebp + 0x2c]
// 006f3c82  0f8dcb030000         jge 0x6f4053
// 006f3c88  8b4d28               mov ecx, dword ptr [ebp + 0x28]
// 006f3c8b  8b0c81               mov ecx, dword ptr [ecx + eax*4]
// 006f3c8e  eb02                 jmp 0x6f3c92
// 006f3c90  33c9                 xor ecx, ecx
// 006f3c92  83b94801000004       cmp dword ptr [ecx + 0x148], 4
// 006f3c99  7516                 jne 0x6f3cb1
// 006f3c9b  89449428             mov dword ptr [esp + edx*4 + 0x28], eax
// 006f3c9f  42                   inc edx
// 006f3ca0  83fa03               cmp edx, 3
// 006f3ca3  0f84bd000000         je 0x6f3d66
// 006f3ca9  48                   dec eax
// 006f3caa  83ee40               sub esi, 0x40
// 006f3cad  85c0                 test eax, eax
// 006f3caf  7db4                 jge 0x6f3c65
// 006f3cb1  83fa03               cmp edx, 3
// 006f3cb4  0f84ac000000         je 0x6f3d66
// 006f3cba  4f                   dec edi
// 006f3cbb  83eb40               sub ebx, 0x40
// 006f3cbe  83ff02               cmp edi, 2
// 006f3cc1  7d83                 jge 0x6f3c46
// 006f3cc3  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006f3cc7  8d41ff               lea eax, [ecx - 1]
// 006f3cca  83f802               cmp eax, 2
// 006f3ccd  0f8c52010000         jl 0x6f3e25
// 006f3cd3  8b542458             mov edx, dword ptr [esp + 0x58]
// 006f3cd7  8bc8                 mov ecx, eax
// 006f3cd9  c1e106               shl ecx, 6
// 006f3cdc  837c112800           cmp dword ptr [ecx + edx + 0x28], 0
// 006f3ce1  8d3c11               lea edi, [ecx + edx]
// 006f3ce4  0f8429010000         je 0x6f3e13
// 006f3cea  837f3400             cmp dword ptr [edi + 0x34], 0
// 006f3cee  0f851f010000         jne 0x6f3e13
// 006f3cf4  33f6                 xor esi, esi
// 006f3cf6  33db                 xor ebx, ebx
// 006f3cf8  33ed                 xor ebp, ebp
// 006f3cfa  33d2                 xor edx, edx
// 006f3cfc  33c9                 xor ecx, ecx
// 006f3cfe  89742434             mov dword ptr [esp + 0x34], esi
// 006f3d02  895c2438             mov dword ptr [esp + 0x38], ebx
// 006f3d06  896c243c             mov dword ptr [esp + 0x3c], ebp
// 006f3d0a  85c0                 test eax, eax
// 006f3d0c  0f8cf8000000         jl 0x6f3e0a
// 006f3d12  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 006f3d16  8d7734               lea esi, [edi + 0x34]
// 006f3d19  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006f3d1d  8d6a04               lea ebp, [edx + 4]
// 006f3d20  837ef400             cmp dword ptr [esi - 0xc], 0
// 006f3d24  0f84c8000000         je 0x6f3df2
// 006f3d2a  83fa02               cmp edx, 2
// 006f3d2d  7409                 je 0x6f3d38
// 006f3d2f  833e00               cmp dword ptr [esi], 0
// 006f3d32  0f85c6000000         jne 0x6f3dfe
// 006f3d38  89449434             mov dword ptr [esp + edx*4 + 0x34], eax
// 006f3d3c  42                   inc edx
// 006f3d3d  85c9                 test ecx, ecx
// 006f3d3f  0f85a3000000         jne 0x6f3de8
// 006f3d45  85c0                 test eax, eax
// 006f3d47  0f8c8d000000         jl 0x6f3dda
// 006f3d4d  3bc3                 cmp eax, ebx
// 006f3d4f  0f8d85000000         jge 0x6f3dda
// 006f3d55  3b472c               cmp eax, dword ptr [edi + 0x2c]
// 006f3d58  0f8df5020000         jge 0x6f4053
// 006f3d5e  8b4f28               mov ecx, dword ptr [edi + 0x28]
// 006f3d61  8b0c81               mov ecx, dword ptr [ecx + eax*4]
// 006f3d64  eb76                 jmp 0x6f3ddc
// 006f3d66  8b442428             mov eax, dword ptr [esp + 0x28]
// 006f3d6a  85c0                 test eax, eax
// 006f3d6c  7c17                 jl 0x6f3d85
// 006f3d6e  3b442414             cmp eax, dword ptr [esp + 0x14]
// 006f3d72  7d11                 jge 0x6f3d85
// 006f3d74  3b452c               cmp eax, dword ptr [ebp + 0x2c]
// 006f3d77  0f8dd6020000         jge 0x6f4053
// 006f3d7d  8b5528               mov edx, dword ptr [ebp + 0x28]
// 006f3d80  8b0482               mov eax, dword ptr [edx + eax*4]
// 006f3d83  eb02                 jmp 0x6f3d87
// 006f3d85  33c0                 xor eax, eax
// 006f3d87  b903000000           mov ecx, 3
// 006f3d8c  898848010000         mov dword ptr [eax + 0x148], ecx
// 006f3d92  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 006f3d96  85c0                 test eax, eax
// 006f3d98  7c0d                 jl 0x6f3da7
// 006f3d9a  3b452c               cmp eax, dword ptr [ebp + 0x2c]
// 006f3d9d  7d08                 jge 0x6f3da7
// 006f3d9f  8b5528               mov edx, dword ptr [ebp + 0x28]
// 006f3da2  8b0482               mov eax, dword ptr [edx + eax*4]
// 006f3da5  eb02                 jmp 0x6f3da9
// 006f3da7  33c0                 xor eax, eax
// 006f3da9  898848010000         mov dword ptr [eax + 0x148], ecx
// 006f3daf  8b442430             mov eax, dword ptr [esp + 0x30]
// 006f3db3  85c0                 test eax, eax
// 006f3db5  7c16                 jl 0x6f3dcd
// 006f3db7  3b452c               cmp eax, dword ptr [ebp + 0x2c]
// 006f3dba  7d11                 jge 0x6f3dcd
// 006f3dbc  8b5528               mov edx, dword ptr [ebp + 0x28]
// 006f3dbf  8b0482               mov eax, dword ptr [edx + eax*4]
// 006f3dc2  898848010000         mov dword ptr [eax + 0x148], ecx
// 006f3dc8  e90a020000           jmp 0x6f3fd7
// 006f3dcd  33c0                 xor eax, eax
// 006f3dcf  898848010000         mov dword ptr [eax + 0x148], ecx
// 006f3dd5  e9fd010000           jmp 0x6f3fd7
// 006f3dda  33c9                 xor ecx, ecx
// 006f3ddc  39a948010000         cmp dword ptr [ecx + 0x148], ebp
// 006f3de2  7404                 je 0x6f3de8
// 006f3de4  33c9                 xor ecx, ecx
// 006f3de6  eb05                 jmp 0x6f3ded
// 006f3de8  b901000000           mov ecx, 1
// 006f3ded  83fa03               cmp edx, 3
// 006f3df0  740c                 je 0x6f3dfe
// 006f3df2  48                   dec eax
// 006f3df3  83ee40               sub esi, 0x40
// 006f3df6  85c0                 test eax, eax
// 006f3df8  0f8d22ffffff         jge 0x6f3d20
// 006f3dfe  8b6c243c             mov ebp, dword ptr [esp + 0x3c]
// 006f3e02  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 006f3e06  8b742434             mov esi, dword ptr [esp + 0x34]
// 006f3e0a  83fa03               cmp edx, 3
// 006f3e0d  7504                 jne 0x6f3e13
// 006f3e0f  85c9                 test ecx, ecx
// 006f3e11  7572                 jne 0x6f3e85
// 006f3e13  48                   dec eax
// 006f3e14  83f802               cmp eax, 2
// 006f3e17  0f8db6feffff         jge 0x6f3cd3
// 006f3e1d  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 006f3e21  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006f3e25  8d41ff               lea eax, [ecx - 1]
// 006f3e28  8bd8                 mov ebx, eax
// 006f3e2a  83fb02               cmp ebx, 2
// 006f3e2d  0f8cac010000         jl 0x6f3fdf
// 006f3e33  8b542458             mov edx, dword ptr [esp + 0x58]
// 006f3e37  8bcb                 mov ecx, ebx
// 006f3e39  c1e106               shl ecx, 6
// 006f3e3c  8d6c1134             lea ebp, [ecx + edx + 0x34]
// 006f3e40  33c9                 xor ecx, ecx
// 006f3e42  394df4               cmp dword ptr [ebp - 0xc], ecx
// 006f3e45  0f8407010000         je 0x6f3f52
// 006f3e4b  394d00               cmp dword ptr [ebp], ecx
// 006f3e4e  0f85fe000000         jne 0x6f3f52
// 006f3e54  33d2                 xor edx, edx
// 006f3e56  3bd9                 cmp ebx, ecx
// 006f3e58  894c2440             mov dword ptr [esp + 0x40], ecx
// 006f3e5c  894c2444             mov dword ptr [esp + 0x44], ecx
// 006f3e60  894c2448             mov dword ptr [esp + 0x48], ecx
// 006f3e64  8bc3                 mov eax, ebx
// 006f3e66  0f8ce6000000         jl 0x6f3f52
// 006f3e6c  8d7dd0               lea edi, [ebp - 0x30]
// 006f3e6f  90                   nop 
// 006f3e70  837f2400             cmp dword ptr [edi + 0x24], 0
// 006f3e74  0f84c7000000         je 0x6f3f41
// 006f3e7a  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 006f3e7f  7474                 je 0x6f3ef5
// 006f3e81  8b37                 mov esi, dword ptr [edi]
// 006f3e83  eb73                 jmp 0x6f3ef8
// 006f3e85  85f6                 test esi, esi
// 006f3e87  7c1b                 jl 0x6f3ea4
// 006f3e89  3b742414             cmp esi, dword ptr [esp + 0x14]
// 006f3e8d  7d15                 jge 0x6f3ea4
// 006f3e8f  8b442410             mov eax, dword ptr [esp + 0x10]
// 006f3e93  3b702c               cmp esi, dword ptr [eax + 0x2c]
// 006f3e96  0f8db7010000         jge 0x6f4053
// 006f3e9c  8b5028               mov edx, dword ptr [eax + 0x28]
// 006f3e9f  8b34b2               mov esi, dword ptr [edx + esi*4]
// 006f3ea2  eb06                 jmp 0x6f3eaa
// 006f3ea4  8b442410             mov eax, dword ptr [esp + 0x10]
// 006f3ea8  33f6                 xor esi, esi
// 006f3eaa  b903000000           mov ecx, 3
// 006f3eaf  898e48010000         mov dword ptr [esi + 0x148], ecx
// 006f3eb5  85db                 test ebx, ebx
// 006f3eb7  7c0d                 jl 0x6f3ec6
// 006f3eb9  3b582c               cmp ebx, dword ptr [eax + 0x2c]
// 006f3ebc  7d08                 jge 0x6f3ec6
// 006f3ebe  8b5028               mov edx, dword ptr [eax + 0x28]
// 006f3ec1  8b1c9a               mov ebx, dword ptr [edx + ebx*4]
// 006f3ec4  eb02                 jmp 0x6f3ec8
// 006f3ec6  33db                 xor ebx, ebx
// 006f3ec8  898b48010000         mov dword ptr [ebx + 0x148], ecx
// 006f3ece  85ed                 test ebp, ebp
// 006f3ed0  7c16                 jl 0x6f3ee8
// 006f3ed2  3b682c               cmp ebp, dword ptr [eax + 0x2c]
// 006f3ed5  7d11                 jge 0x6f3ee8
// 006f3ed7  8b4028               mov eax, dword ptr [eax + 0x28]
// 006f3eda  8b04a8               mov eax, dword ptr [eax + ebp*4]
// 006f3edd  898848010000         mov dword ptr [eax + 0x148], ecx
// 006f3ee3  e9eb000000           jmp 0x6f3fd3
// 006f3ee8  33c0                 xor eax, eax
// 006f3eea  898848010000         mov dword ptr [eax + 0x148], ecx
// 006f3ef0  e9de000000           jmp 0x6f3fd3
// 006f3ef5  8b77fc               mov esi, dword ptr [edi - 4]
// 006f3ef8  85c9                 test ecx, ecx
// 006f3efa  7404                 je 0x6f3f00
// 006f3efc  3bf2                 cmp esi, edx
// 006f3efe  754d                 jne 0x6f3f4d
// 006f3f00  83f902               cmp ecx, 2
// 006f3f03  7406                 je 0x6f3f0b
// 006f3f05  837f3000             cmp dword ptr [edi + 0x30], 0
// 006f3f09  7542                 jne 0x6f3f4d
// 006f3f0b  85c0                 test eax, eax
// 006f3f0d  7c1b                 jl 0x6f3f2a
// 006f3f0f  3b442414             cmp eax, dword ptr [esp + 0x14]
// 006f3f13  7d15                 jge 0x6f3f2a
// 006f3f15  8b542410             mov edx, dword ptr [esp + 0x10]
// 006f3f19  3b422c               cmp eax, dword ptr [edx + 0x2c]
// 006f3f1c  0f8d31010000         jge 0x6f4053
// 006f3f22  8b5228               mov edx, dword ptr [edx + 0x28]
// 006f3f25  8b1482               mov edx, dword ptr [edx + eax*4]
// 006f3f28  eb02                 jmp 0x6f3f2c
// 006f3f2a  33d2                 xor edx, edx
// 006f3f2c  83ba4801000003       cmp dword ptr [edx + 0x148], 3
// 006f3f33  7518                 jne 0x6f3f4d
// 006f3f35  89448c40             mov dword ptr [esp + ecx*4 + 0x40], eax
// 006f3f39  41                   inc ecx
// 006f3f3a  8bd6                 mov edx, esi
// 006f3f3c  83f903               cmp ecx, 3
// 006f3f3f  7424                 je 0x6f3f65
// 006f3f41  48                   dec eax
// 006f3f42  83ef40               sub edi, 0x40
// 006f3f45  85c0                 test eax, eax
// 006f3f47  0f8d23ffffff         jge 0x6f3e70
// 006f3f4d  83f903               cmp ecx, 3
// 006f3f50  7413                 je 0x6f3f65
// 006f3f52  4b                   dec ebx
// 006f3f53  83ed40               sub ebp, 0x40
// 006f3f56  83fb02               cmp ebx, 2
// 006f3f59  0f8de1feffff         jge 0x6f3e40
// 006f3f5f  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 006f3f63  eb7a                 jmp 0x6f3fdf
// 006f3f65  8b442440             mov eax, dword ptr [esp + 0x40]
// 006f3f69  85c0                 test eax, eax
// 006f3f6b  7c1b                 jl 0x6f3f88
// 006f3f6d  3b442414             cmp eax, dword ptr [esp + 0x14]
// 006f3f71  7d15                 jge 0x6f3f88
// 006f3f73  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006f3f77  3b412c               cmp eax, dword ptr [ecx + 0x2c]
// 006f3f7a  0f8dd3000000         jge 0x6f4053
// 006f3f80  8b5128               mov edx, dword ptr [ecx + 0x28]
// 006f3f83  8b0482               mov eax, dword ptr [edx + eax*4]
// 006f3f86  eb06                 jmp 0x6f3f8e
// 006f3f88  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006f3f8c  33c0                 xor eax, eax
// 006f3f8e  ba02000000           mov edx, 2
// 006f3f93  899048010000         mov dword ptr [eax + 0x148], edx
// 006f3f99  8b442444             mov eax, dword ptr [esp + 0x44]
// 006f3f9d  85c0                 test eax, eax
// 006f3f9f  7c0d                 jl 0x6f3fae
// 006f3fa1  3b412c               cmp eax, dword ptr [ecx + 0x2c]
// 006f3fa4  7d08                 jge 0x6f3fae
// 006f3fa6  8b7128               mov esi, dword ptr [ecx + 0x28]
// 006f3fa9  8b0486               mov eax, dword ptr [esi + eax*4]
// 006f3fac  eb02                 jmp 0x6f3fb0
// 006f3fae  33c0                 xor eax, eax
// 006f3fb0  899048010000         mov dword ptr [eax + 0x148], edx
// 006f3fb6  8b442448             mov eax, dword ptr [esp + 0x48]
// 006f3fba  85c0                 test eax, eax
// 006f3fbc  7c0d                 jl 0x6f3fcb
// 006f3fbe  3b412c               cmp eax, dword ptr [ecx + 0x2c]
// 006f3fc1  7d08                 jge 0x6f3fcb
// 006f3fc3  8b4928               mov ecx, dword ptr [ecx + 0x28]
// 006f3fc6  8b0481               mov eax, dword ptr [ecx + eax*4]
// 006f3fc9  eb02                 jmp 0x6f3fcd
// 006f3fcb  33c0                 xor eax, eax
// 006f3fcd  899048010000         mov dword ptr [eax + 0x148], edx
// 006f3fd3  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 006f3fd7  c744241801000000     mov dword ptr [esp + 0x18], 1
// 006f3fdf  8b742460             mov esi, dword ptr [esp + 0x60]
// 006f3fe3  8b5c2458             mov ebx, dword ptr [esp + 0x58]
// 006f3fe7  8b542454             mov edx, dword ptr [esp + 0x54]
// 006f3feb  56                   push esi
// 006f3fec  53                   push ebx
// 006f3fed  52                   push edx
// 006f3fee  8d44242c             lea eax, [esp + 0x2c]
// 006f3ff2  50                   push eax
// 006f3ff3  8bcd                 mov ecx, ebp
// 006f3ff5  e896ecffff           call 0x6f2c90
// 006f3ffa  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 006f3fff  8b5004               mov edx, dword ptr [eax + 4]
// 006f4002  8b08                 mov ecx, dword ptr [eax]
// 006f4004  8bc2                 mov eax, edx
// 006f4006  7502                 jne 0x6f400a
// 006f4008  8bc1                 mov eax, ecx
// 006f400a  3b44245c             cmp eax, dword ptr [esp + 0x5c]
// 006f400e  0f8ca6000000         jl 0x6f40ba
// 006f4014  837c241800           cmp dword ptr [esp + 0x18], 0
// 006f4019  0f8501fcffff         jne 0x6f3c20
// 006f401f  f60680               test byte ptr [esi], 0x80
// 006f4022  0f8492000000         je 0x6f40ba
// 006f4028  8b4d2c               mov ecx, dword ptr [ebp + 0x2c]
// 006f402b  bf01000000           mov edi, 1
// 006f4030  33c0                 xor eax, eax
// 006f4032  8bf7                 mov esi, edi
// 006f4034  85c9                 test ecx, ecx
// 006f4036  7e5b                 jle 0x6f4093
// 006f4038  8bd3                 mov edx, ebx
// 006f403a  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 006f403e  83c20c               add edx, 0xc
// 006f4041  837a1c00             cmp dword ptr [edx + 0x1c], 0
// 006f4045  7440                 je 0x6f4087
// 006f4047  85f6                 test esi, esi
// 006f4049  753a                 jne 0x6f4085
// 006f404b  85db                 test ebx, ebx
// 006f404d  7409                 je 0x6f4058
// 006f404f  8b32                 mov esi, dword ptr [edx]
// 006f4051  eb08                 jmp 0x6f405b
// 006f4053  e8ecc8faff           call 0x6a0944
// 006f4058  8b72fc               mov esi, dword ptr [edx - 4]
// 006f405b  3b74245c             cmp esi, dword ptr [esp + 0x5c]
// 006f405f  7e24                 jle 0x6f4085
// 006f4061  85c0                 test eax, eax
// 006f4063  7c11                 jl 0x6f4076
// 006f4065  3bc1                 cmp eax, ecx
// 006f4067  7d0d                 jge 0x6f4076
// 006f4069  3b452c               cmp eax, dword ptr [ebp + 0x2c]
// 006f406c  7de5                 jge 0x6f4053
// 006f406e  8b4d28               mov ecx, dword ptr [ebp + 0x28]
// 006f4071  8b0c81               mov ecx, dword ptr [ecx + eax*4]
// 006f4074  eb02                 jmp 0x6f4078
// 006f4076  33c9                 xor ecx, ecx
// 006f4078  c7814801000002000000 mov dword ptr [ecx + 0x148], 2
// 006f4082  897a24               mov dword ptr [edx + 0x24], edi
// 006f4085  33f6                 xor esi, esi
// 006f4087  8b4d2c               mov ecx, dword ptr [ebp + 0x2c]
// 006f408a  03c7                 add eax, edi
// 006f408c  83c240               add edx, 0x40
// 006f408f  3bc1                 cmp eax, ecx
// 006f4091  7cae                 jl 0x6f4041
// 006f4093  8b542460             mov edx, dword ptr [esp + 0x60]
// 006f4097  8b442458             mov eax, dword ptr [esp + 0x58]
// 006f409b  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 006f409f  8b742450             mov esi, dword ptr [esp + 0x50]
// 006f40a3  52                   push edx
// 006f40a4  50                   push eax
// 006f40a5  51                   push ecx
// 006f40a6  56                   push esi
// 006f40a7  8bcd                 mov ecx, ebp
// 006f40a9  e8e2ebffff           call 0x6f2c90
// 006f40ae  5f                   pop edi
// 006f40af  8bc6                 mov eax, esi
// 006f40b1  5e                   pop esi
// 006f40b2  5d                   pop ebp
// 006f40b3  5b                   pop ebx
// 006f40b4  83c43c               add esp, 0x3c
// 006f40b7  c21400               ret 0x14
// 006f40ba  8b442450             mov eax, dword ptr [esp + 0x50]
// 006f40be  5f                   pop edi
// 006f40bf  5e                   pop esi
// 006f40c0  5d                   pop ebp
// 006f40c1  895004               mov dword ptr [eax + 4], edx
// 006f40c4  8908                 mov dword ptr [eax], ecx
// 006f40c6  5b                   pop ebx
// 006f40c7  83c43c               add esp, 0x3c
// 006f40ca  c21400               ret 0x14
// library xtp-11.2.2/Source\CommandBars\XTPControls.cpp (function ?_ReduceSmartLayoutToolBar@CXTPControls@@IAE?AVCSize@@PAVCDC@@PAUXTPBUTTONINFO@1@HAAK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControls.cpp
