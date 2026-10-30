// roc 2011-06 0082c9e0  unit: CXTPCommandBarKeyboardTip  size: 1907 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0082c9e0
//
// 0082c9e0  6aff                 push -1
// 0082c9e2  68033da000           push 0xa03d03
// 0082c9e7  64a100000000         mov eax, dword ptr fs:[0]
// 0082c9ed  50                   push eax
// 0082c9ee  83ec64               sub esp, 0x64
// 0082c9f1  53                   push ebx
// 0082c9f2  55                   push ebp
// 0082c9f3  56                   push esi
// 0082c9f4  57                   push edi
// 0082c9f5  a12058c900           mov eax, dword ptr [0xc95820]
// 0082c9fa  33c4                 xor eax, esp
// 0082c9fc  50                   push eax
// 0082c9fd  8d442478             lea eax, [esp + 0x78]
// 0082ca01  64a300000000         mov dword ptr fs:[0], eax
// 0082ca07  8bd9                 mov ebx, ecx
// 0082ca09  895c2414             mov dword ptr [esp + 0x14], ebx
// 0082ca0d  e83eecffff           call 0x82b650
// 0082ca12  8b4374               mov eax, dword ptr [ebx + 0x74]
// 0082ca15  33ed                 xor ebp, ebp
// 0082ca17  39a8c4000000         cmp dword ptr [eax + 0xc4], ebp
// 0082ca1d  0f841a070000         je 0x82d13d
// 0082ca23  8bb42488000000       mov esi, dword ptr [esp + 0x88]
// 0082ca2a  3bf5                 cmp esi, ebp
// 0082ca2c  0f840b070000         je 0x82d13d
// 0082ca32  396e20               cmp dword ptr [esi + 0x20], ebp
// 0082ca35  0f8402070000         je 0x82d13d
// 0082ca3b  8bcb                 mov ecx, ebx
// 0082ca3d  e87ebfc2ff           call 0x4589c0
// 0082ca42  8bc8                 mov ecx, eax
// 0082ca44  e8376b0400           call 0x873580
// 0082ca49  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0082ca4c  51                   push ecx
// 0082ca4d  ff152c1ba400         call dword ptr [0xa41b2c]
// 0082ca53  8b94248c000000       mov edx, dword ptr [esp + 0x8c]
// 0082ca5a  895344               mov dword ptr [ebx + 0x44], edx
// 0082ca5d  897340               mov dword ptr [ebx + 0x40], esi
// 0082ca60  896b48               mov dword ptr [ebx + 0x48], ebp
// 0082ca63  8b06                 mov eax, dword ptr [esi]
// 0082ca65  8b90c4010000         mov edx, dword ptr [eax + 0x1c4]
// 0082ca6b  8bce                 mov ecx, esi
// 0082ca6d  ffd2                 call edx
// 0082ca6f  396b34               cmp dword ptr [ebx + 0x34], ebp
// 0082ca72  7508                 jne 0x82ca7c
// 0082ca74  896b40               mov dword ptr [ebx + 0x40], ebp
// 0082ca77  e9c1060000           jmp 0x82d13d
// 0082ca7c  8bcb                 mov ecx, ebx
// 0082ca7e  e8add7ffff           call 0x82a230
// 0082ca83  8bf8                 mov edi, eax
// 0082ca85  56                   push esi
// 0082ca86  8d4c2468             lea ecx, [esp + 0x68]
// 0082ca8a  897c242c             mov dword ptr [esp + 0x2c], edi
// 0082ca8e  e895e4fdff           call 0x80af28
// 0082ca93  81c7bc000000         add edi, 0xbc
// 0082ca99  57                   push edi
// 0082ca9a  8d442468             lea eax, [esp + 0x68]
// 0082ca9e  50                   push eax
// 0082ca9f  8d4c245c             lea ecx, [esp + 0x5c]
// 0082caa3  89ac2488000000       mov dword ptr [esp + 0x88], ebp
// 0082caaa  e871060300           call 0x85d120
// 0082caaf  8b6b34               mov ebp, dword ptr [ebx + 0x34]
// 0082cab2  83c5ff               add ebp, -1
// 0082cab5  c684248000000001     mov byte ptr [esp + 0x80], 1
// 0082cabd  0f88f0000000         js 0x82cbb3
// 0082cac3  85ed                 test ebp, ebp
// 0082cac5  0f8c86020000         jl 0x82cd51
// 0082cacb  3b6b34               cmp ebp, dword ptr [ebx + 0x34]
// 0082cace  0f8d7d020000         jge 0x82cd51
// 0082cad4  8b4b30               mov ecx, dword ptr [ebx + 0x30]
// 0082cad7  8b34a9               mov esi, dword ptr [ecx + ebp*4]
// 0082cada  8d04a9               lea eax, [ecx + ebp*4]
// 0082cadd  8d4e54               lea ecx, [esi + 0x54]
// 0082cae0  898c248c000000       mov dword ptr [esp + 0x8c], ecx
// 0082cae7  ff15b026a400         call dword ptr [0xa426b0]
// 0082caed  33d2                 xor edx, edx
// 0082caef  84c0                 test al, al
// 0082caf1  0f94c2               sete dl
// 0082caf4  8bc2                 mov eax, edx
// 0082caf6  89467c               mov dword ptr [esi + 0x7c], eax
// 0082caf9  85c0                 test eax, eax
// 0082cafb  0f85a9000000         jne 0x82cbaa
// 0082cb01  8d7e58               lea edi, [esi + 0x58]
// 0082cb04  8bcf                 mov ecx, edi
// 0082cb06  ff15b026a400         call dword ptr [0xa426b0]
// 0082cb0c  84c0                 test al, al
// 0082cb0e  7421                 je 0x82cb31
// 0082cb10  8b06                 mov eax, dword ptr [esi]
// 0082cb12  8b5068               mov edx, dword ptr [eax + 0x68]
// 0082cb15  8bce                 mov ecx, esi
// 0082cb17  ffd2                 call edx
// 0082cb19  8b06                 mov eax, dword ptr [esi]
// 0082cb1b  8b5004               mov edx, dword ptr [eax + 4]
// 0082cb1e  6a01                 push 1
// 0082cb20  8bce                 mov ecx, esi
// 0082cb22  ffd2                 call edx
// 0082cb24  6a01                 push 1
// 0082cb26  55                   push ebp
// 0082cb27  8d4b2c               lea ecx, [ebx + 0x2c]
// 0082cb2a  e851d7ffff           call 0x82a280
// 0082cb2f  eb79                 jmp 0x82cbaa
// 0082cb31  8bcf                 mov ecx, edi
// 0082cb33  ff151422a400         call dword ptr [0xa42214]
// 0082cb39  6a00                 push 0
// 0082cb3b  6a26                 push 0x26
// 0082cb3d  8bcf                 mov ecx, edi
// 0082cb3f  ff154c27a400         call dword ptr [0xa4274c]
// 0082cb45  8bd8                 mov ebx, eax
// 0082cb47  83fbff               cmp ebx, -1
// 0082cb4a  7420                 je 0x82cb6c
// 0082cb4c  8d4301               lea eax, [ebx + 1]
// 0082cb4f  50                   push eax
// 0082cb50  8bcf                 mov ecx, edi
// 0082cb52  ff153c25a400         call dword ptr [0xa4253c]
// 0082cb58  3c26                 cmp al, 0x26
// 0082cb5a  7510                 jne 0x82cb6c
// 0082cb5c  83c302               add ebx, 2
// 0082cb5f  53                   push ebx
// 0082cb60  6a26                 push 0x26
// 0082cb62  8bcf                 mov ecx, edi
// 0082cb64  ff154c27a400         call dword ptr [0xa4274c]
// 0082cb6a  8bd8                 mov ebx, eax
// 0082cb6c  83c65c               add esi, 0x5c
// 0082cb6f  8bce                 mov ecx, esi
// 0082cb71  ff15b026a400         call dword ptr [0xa426b0]
// 0082cb77  84c0                 test al, al
// 0082cb79  741d                 je 0x82cb98
// 0082cb7b  43                   inc ebx
// 0082cb7c  53                   push ebx
// 0082cb7d  8bcf                 mov ecx, edi
// 0082cb7f  ff157028a400         call dword ptr [0xa42870]
// 0082cb85  0fb6c8               movzx ecx, al
// 0082cb88  51                   push ecx
// 0082cb89  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 0082cb90  ff156c28a400         call dword ptr [0xa4286c]
// 0082cb96  eb0e                 jmp 0x82cba6
// 0082cb98  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 0082cb9f  56                   push esi
// 0082cba0  ff156425a400         call dword ptr [0xa42564]
// 0082cba6  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0082cbaa  83ed01               sub ebp, 1
// 0082cbad  0f8910ffffff         jns 0x82cac3
// 0082cbb3  8b7b34               mov edi, dword ptr [ebx + 0x34]
// 0082cbb6  33f6                 xor esi, esi
// 0082cbb8  897c2418             mov dword ptr [esp + 0x18], edi
// 0082cbbc  85ff                 test edi, edi
// 0082cbbe  0f8e08030000         jle 0x82cecc
// 0082cbc4  85f6                 test esi, esi
// 0082cbc6  0f8c85010000         jl 0x82cd51
// 0082cbcc  8b442414             mov eax, dword ptr [esp + 0x14]
// 0082cbd0  3b7034               cmp esi, dword ptr [eax + 0x34]
// 0082cbd3  0f8d78010000         jge 0x82cd51
// 0082cbd9  8b5030               mov edx, dword ptr [eax + 0x30]
// 0082cbdc  8b3cb2               mov edi, dword ptr [edx + esi*4]
// 0082cbdf  8d04b2               lea eax, [edx + esi*4]
// 0082cbe2  8d4754               lea eax, [edi + 0x54]
// 0082cbe5  50                   push eax
// 0082cbe6  8d4c2428             lea ecx, [esp + 0x28]
// 0082cbea  ff15e42da400         call dword ptr [0xa42de4]
// 0082cbf0  8d4c2440             lea ecx, [esp + 0x40]
// 0082cbf4  e827d7ffff           call 0x82a320
// 0082cbf9  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0082cbfd  57                   push edi
// 0082cbfe  51                   push ecx
// 0082cbff  8d4c2448             lea ecx, [esp + 0x48]
// 0082cc03  c684248800000003     mov byte ptr [esp + 0x88], 3
// 0082cc0b  e880200100           call 0x83ec90
// 0082cc10  689c3eac00           push 0xac3e9c
// 0082cc15  8d8c2490000000       lea ecx, [esp + 0x90]
// 0082cc1c  ff15002ea400         call dword ptr [0xa42e00]
// 0082cc22  46                   inc esi
// 0082cc23  3b742418             cmp esi, dword ptr [esp + 0x18]
// 0082cc27  c684248000000004     mov byte ptr [esp + 0x80], 4
// 0082cc2f  8974243c             mov dword ptr [esp + 0x3c], esi
// 0082cc33  7d7d                 jge 0x82ccb2
// 0082cc35  85f6                 test esi, esi
// 0082cc37  0f8c14010000         jl 0x82cd51
// 0082cc3d  8b542414             mov edx, dword ptr [esp + 0x14]
// 0082cc41  3b7234               cmp esi, dword ptr [edx + 0x34]
// 0082cc44  0f8d07010000         jge 0x82cd51
// 0082cc4a  8bc2                 mov eax, edx
// 0082cc4c  8b4830               mov ecx, dword ptr [eax + 0x30]
// 0082cc4f  8b2cb1               mov ebp, dword ptr [ecx + esi*4]
// 0082cc52  8d04b1               lea eax, [ecx + esi*4]
// 0082cc55  6a00                 push 0
// 0082cc57  8d4c2428             lea ecx, [esp + 0x28]
// 0082cc5b  8d7d54               lea edi, [ebp + 0x54]
// 0082cc5e  ff153c25a400         call dword ptr [0xa4253c]
// 0082cc64  6a00                 push 0
// 0082cc66  8bcf                 mov ecx, edi
// 0082cc68  8ad8                 mov bl, al
// 0082cc6a  ff153c25a400         call dword ptr [0xa4253c]
// 0082cc70  3ac3                 cmp al, bl
// 0082cc72  7537                 jne 0x82ccab
// 0082cc74  8b542448             mov edx, dword ptr [esp + 0x48]
// 0082cc78  55                   push ebp
// 0082cc79  52                   push edx
// 0082cc7a  8d4c2448             lea ecx, [esp + 0x48]
// 0082cc7e  e80d200100           call 0x83ec90
// 0082cc83  8bcf                 mov ecx, edi
// 0082cc85  ff15a826a400         call dword ptr [0xa426a8]
// 0082cc8b  83f802               cmp eax, 2
// 0082cc8e  751b                 jne 0x82ccab
// 0082cc90  6a01                 push 1
// 0082cc92  8bcf                 mov ecx, edi
// 0082cc94  ff153c25a400         call dword ptr [0xa4253c]
// 0082cc9a  0fb6c0               movzx eax, al
// 0082cc9d  50                   push eax
// 0082cc9e  8d8c2490000000       lea ecx, [esp + 0x90]
// 0082cca5  ff156828a400         call dword ptr [0xa42868]
// 0082ccab  46                   inc esi
// 0082ccac  3b742418             cmp esi, dword ptr [esp + 0x18]
// 0082ccb0  7c83                 jl 0x82cc35
// 0082ccb2  8b5c2448             mov ebx, dword ptr [esp + 0x48]
// 0082ccb6  83fb02               cmp ebx, 2
// 0082ccb9  0f8cc7010000         jl 0x82ce86
// 0082ccbf  33ff                 xor edi, edi
// 0082ccc1  c744242c01000000     mov dword ptr [esp + 0x2c], 1
// 0082ccc9  897c2434             mov dword ptr [esp + 0x34], edi
// 0082cccd  85db                 test ebx, ebx
// 0082cccf  0f8eb1010000         jle 0x82ce86
// 0082ccd5  85ff                 test edi, edi
// 0082ccd7  7c78                 jl 0x82cd51
// 0082ccd9  3bfb                 cmp edi, ebx
// 0082ccdb  7d74                 jge 0x82cd51
// 0082ccdd  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0082cce1  8b34b9               mov esi, dword ptr [ecx + edi*4]
// 0082cce4  8d6e54               lea ebp, [esi + 0x54]
// 0082cce7  8bcd                 mov ecx, ebp
// 0082cce9  ff15a826a400         call dword ptr [0xa426a8]
// 0082ccef  83f801               cmp eax, 1
// 0082ccf2  0f8f81010000         jg 0x82ce79
// 0082ccf8  83c658               add esi, 0x58
// 0082ccfb  8bce                 mov ecx, esi
// 0082ccfd  33ff                 xor edi, edi
// 0082ccff  ff15a826a400         call dword ptr [0xa426a8]
// 0082cd05  48                   dec eax
// 0082cd06  85c0                 test eax, eax
// 0082cd08  7e76                 jle 0x82cd80
// 0082cd0a  8d9b00000000         lea ebx, [ebx]
// 0082cd10  57                   push edi
// 0082cd11  8bce                 mov ecx, esi
// 0082cd13  ff153c25a400         call dword ptr [0xa4253c]
// 0082cd19  3c20                 cmp al, 0x20
// 0082cd1b  7524                 jne 0x82cd41
// 0082cd1d  6a00                 push 0
// 0082cd1f  8d5701               lea edx, [edi + 1]
// 0082cd22  52                   push edx
// 0082cd23  8bce                 mov ecx, esi
// 0082cd25  ff153c25a400         call dword ptr [0xa4253c]
// 0082cd2b  0fb6c0               movzx eax, al
// 0082cd2e  50                   push eax
// 0082cd2f  8d8c2494000000       lea ecx, [esp + 0x94]
// 0082cd36  ff154c27a400         call dword ptr [0xa4274c]
// 0082cd3c  83f8ff               cmp eax, -1
// 0082cd3f  7415                 je 0x82cd56
// 0082cd41  8bce                 mov ecx, esi
// 0082cd43  47                   inc edi
// 0082cd44  ff15a826a400         call dword ptr [0xa426a8]
// 0082cd4a  48                   dec eax
// 0082cd4b  3bf8                 cmp edi, eax
// 0082cd4d  7cc1                 jl 0x82cd10
// 0082cd4f  eb2f                 jmp 0x82cd80
// 0082cd51  e8b4d5fdff           call 0x80a30a
// 0082cd56  47                   inc edi
// 0082cd57  57                   push edi
// 0082cd58  8bce                 mov ecx, esi
// 0082cd5a  ff153c25a400         call dword ptr [0xa4253c]
// 0082cd60  8ad8                 mov bl, al
// 0082cd62  885c241c             mov byte ptr [esp + 0x1c], bl
// 0082cd66  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0082cd6a  51                   push ecx
// 0082cd6b  8d8c2490000000       lea ecx, [esp + 0x90]
// 0082cd72  ff156828a400         call dword ptr [0xa42868]
// 0082cd78  84db                 test bl, bl
// 0082cd7a  0f85e4000000         jne 0x82ce64
// 0082cd80  6a00                 push 0
// 0082cd82  8bce                 mov ecx, esi
// 0082cd84  ff153c25a400         call dword ptr [0xa4253c]
// 0082cd8a  33d2                 xor edx, edx
// 0082cd8c  3c26                 cmp al, 0x26
// 0082cd8e  0f94c2               sete dl
// 0082cd91  8bce                 mov ecx, esi
// 0082cd93  8bfa                 mov edi, edx
// 0082cd95  57                   push edi
// 0082cd96  ff153c25a400         call dword ptr [0xa4253c]
// 0082cd9c  6a00                 push 0
// 0082cd9e  8bcd                 mov ecx, ebp
// 0082cda0  8ad8                 mov bl, al
// 0082cda2  ff153c25a400         call dword ptr [0xa4253c]
// 0082cda8  3ad8                 cmp bl, al
// 0082cdaa  7501                 jne 0x82cdad
// 0082cdac  47                   inc edi
// 0082cdad  8bce                 mov ecx, esi
// 0082cdaf  ff15a826a400         call dword ptr [0xa426a8]
// 0082cdb5  3bf8                 cmp edi, eax
// 0082cdb7  7d5a                 jge 0x82ce13
// 0082cdb9  8da42400000000       lea esp, [esp]
// 0082cdc0  6a00                 push 0
// 0082cdc2  57                   push edi
// 0082cdc3  8bce                 mov ecx, esi
// 0082cdc5  ff153c25a400         call dword ptr [0xa4253c]
// 0082cdcb  0fb6c0               movzx eax, al
// 0082cdce  50                   push eax
// 0082cdcf  8d8c2494000000       lea ecx, [esp + 0x94]
// 0082cdd6  ff154c27a400         call dword ptr [0xa4274c]
// 0082cddc  8bce                 mov ecx, esi
// 0082cdde  83f8ff               cmp eax, -1
// 0082cde1  740d                 je 0x82cdf0
// 0082cde3  47                   inc edi
// 0082cde4  ff15a826a400         call dword ptr [0xa426a8]
// 0082cdea  3bf8                 cmp edi, eax
// 0082cdec  7cd2                 jl 0x82cdc0
// 0082cdee  eb23                 jmp 0x82ce13
// 0082cdf0  57                   push edi
// 0082cdf1  ff153c25a400         call dword ptr [0xa4253c]
// 0082cdf7  8ad8                 mov bl, al
// 0082cdf9  885c241c             mov byte ptr [esp + 0x1c], bl
// 0082cdfd  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0082ce01  51                   push ecx
// 0082ce02  8d8c2490000000       lea ecx, [esp + 0x90]
// 0082ce09  ff156828a400         call dword ptr [0xa42868]
// 0082ce0f  84db                 test bl, bl
// 0082ce11  7551                 jne 0x82ce64
// 0082ce13  8d4c2420             lea ecx, [esp + 0x20]
// 0082ce17  ff15b42da400         call dword ptr [0xa42db4]
// 0082ce1d  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 0082ce21  56                   push esi
// 0082ce22  8d542424             lea edx, [esp + 0x24]
// 0082ce26  68983eac00           push 0xac3e98
// 0082ce2b  52                   push edx
// 0082ce2c  c684248c00000005     mov byte ptr [esp + 0x8c], 5
// 0082ce34  ff15bc2da400         call dword ptr [0xa42dbc]
// 0082ce3a  83c40c               add esp, 0xc
// 0082ce3d  6a00                 push 0
// 0082ce3f  8d4c2424             lea ecx, [esp + 0x24]
// 0082ce43  ff153c25a400         call dword ptr [0xa4253c]
// 0082ce49  46                   inc esi
// 0082ce4a  8d4c2420             lea ecx, [esp + 0x20]
// 0082ce4e  8844241c             mov byte ptr [esp + 0x1c], al
// 0082ce52  8974242c             mov dword ptr [esp + 0x2c], esi
// 0082ce56  c684248000000004     mov byte ptr [esp + 0x80], 4
// 0082ce5e  ff15082ea400         call dword ptr [0xa42e08]
// 0082ce64  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0082ce68  50                   push eax
// 0082ce69  8bcd                 mov ecx, ebp
// 0082ce6b  ff156828a400         call dword ptr [0xa42868]
// 0082ce71  8b5c2448             mov ebx, dword ptr [esp + 0x48]
// 0082ce75  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 0082ce79  47                   inc edi
// 0082ce7a  3bfb                 cmp edi, ebx
// 0082ce7c  897c2434             mov dword ptr [esp + 0x34], edi
// 0082ce80  0f8c4ffeffff         jl 0x82ccd5
// 0082ce86  8d8c248c000000       lea ecx, [esp + 0x8c]
// 0082ce8d  ff15082ea400         call dword ptr [0xa42e08]
// 0082ce93  8d4c2440             lea ecx, [esp + 0x40]
// 0082ce97  c684248000000002     mov byte ptr [esp + 0x80], 2
// 0082ce9f  e89cd4ffff           call 0x82a340
// 0082cea4  8d4c2424             lea ecx, [esp + 0x24]
// 0082cea8  c684248000000001     mov byte ptr [esp + 0x80], 1
// 0082ceb0  ff15082ea400         call dword ptr [0xa42e08]
// 0082ceb6  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 0082ceba  3b742418             cmp esi, dword ptr [esp + 0x18]
// 0082cebe  0f8c00fdffff         jl 0x82cbc4
// 0082cec4  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0082cec8  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0082cecc  8bcb                 mov ecx, ebx
// 0082cece  e81dd0ffff           call 0x829ef0
// 0082ced3  8944243c             mov dword ptr [esp + 0x3c], eax
// 0082ced7  c784248c00000000000000 mov dword ptr [esp + 0x8c], 0
// 0082cee2  85ff                 test edi, edi
// 0082cee4  0f8eed010000         jle 0x82d0d7
// 0082ceea  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 0082cef1  85c0                 test eax, eax
// 0082cef3  0f8c58feffff         jl 0x82cd51
// 0082cef9  3b4334               cmp eax, dword ptr [ebx + 0x34]
// 0082cefc  0f8d4ffeffff         jge 0x82cd51
// 0082cf02  8b4b30               mov ecx, dword ptr [ebx + 0x30]
// 0082cf05  8b3481               mov esi, dword ptr [ecx + eax*4]
// 0082cf08  837e7000             cmp dword ptr [esi + 0x70], 0
// 0082cf0c  8d0481               lea eax, [ecx + eax*4]
// 0082cf0f  0f84a1010000         je 0x82d0b6
// 0082cf15  8d54242c             lea edx, [esp + 0x2c]
// 0082cf19  8d7e54               lea edi, [esi + 0x54]
// 0082cf1c  52                   push edx
// 0082cf1d  8bcf                 mov ecx, edi
// 0082cf1f  ff15a826a400         call dword ptr [0xa426a8]
// 0082cf25  50                   push eax
// 0082cf26  8bcf                 mov ecx, edi
// 0082cf28  ff15c82da400         call dword ptr [0xa42dc8]
// 0082cf2e  50                   push eax
// 0082cf2f  8b442478             mov eax, dword ptr [esp + 0x78]
// 0082cf33  50                   push eax
// 0082cf34  ff153801a400         call dword ptr [0xa40138]
// 0082cf3a  8b442430             mov eax, dword ptr [esp + 0x30]
// 0082cf3e  83c002               add eax, 2
// 0082cf41  83f80f               cmp eax, 0xf
// 0082cf44  8be8                 mov ebp, eax
// 0082cf46  7f05                 jg 0x82cf4d
// 0082cf48  bd0f000000           mov ebp, 0xf
// 0082cf4d  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0082cf51  83c006               add eax, 6
// 0082cf54  83f810               cmp eax, 0x10
// 0082cf57  8bd8                 mov ebx, eax
// 0082cf59  7f05                 jg 0x82cf60
// 0082cf5b  bb10000000           mov ebx, 0x10
// 0082cf60  8b4e64               mov ecx, dword ptr [esi + 0x64]
// 0082cf63  894c2434             mov dword ptr [esp + 0x34], ecx
// 0082cf67  8b5668               mov edx, dword ptr [esi + 0x68]
// 0082cf6a  89542438             mov dword ptr [esp + 0x38], edx
// 0082cf6e  8b4660               mov eax, dword ptr [esi + 0x60]
// 0082cf71  50                   push eax
// 0082cf72  e89ddbfdff           call 0x80ab14
// 0082cf77  50                   push eax
// 0082cf78  e8bfd4fdff           call 0x80a43c
// 0082cf7d  83c408               add esp, 8
// 0082cf80  85c0                 test eax, eax
// 0082cf82  7516                 jne 0x82cf9a
// 0082cf84  8b942488000000       mov edx, dword ptr [esp + 0x88]
// 0082cf8b  8b4220               mov eax, dword ptr [edx + 0x20]
// 0082cf8e  8d4c2434             lea ecx, [esp + 0x34]
// 0082cf92  51                   push ecx
// 0082cf93  50                   push eax
// 0082cf94  ff15781ca400         call dword ptr [0xa41c78]
// 0082cf9a  8b4e78               mov ecx, dword ptr [esi + 0x78]
// 0082cf9d  f6c104               test cl, 4
// 0082cfa0  740b                 je 0x82cfad
// 0082cfa2  8bc5                 mov eax, ebp
// 0082cfa4  99                   cdq 
// 0082cfa5  2bc2                 sub eax, edx
// 0082cfa7  8bf8                 mov edi, eax
// 0082cfa9  d1ff                 sar edi, 1
// 0082cfab  eb0e                 jmp 0x82cfbb
// 0082cfad  8bd1                 mov edx, ecx
// 0082cfaf  80e208               and dl, 8
// 0082cfb2  0fb6fa               movzx edi, dl
// 0082cfb5  f7df                 neg edi
// 0082cfb7  1bff                 sbb edi, edi
// 0082cfb9  23fd                 and edi, ebp
// 0082cfbb  f6c101               test cl, 1
// 0082cfbe  7409                 je 0x82cfc9
// 0082cfc0  8bc3                 mov eax, ebx
// 0082cfc2  99                   cdq 
// 0082cfc3  2bc2                 sub eax, edx
// 0082cfc5  d1f8                 sar eax, 1
// 0082cfc7  eb12                 jmp 0x82cfdb
// 0082cfc9  837c243c00           cmp dword ptr [esp + 0x3c], 0
// 0082cfce  7509                 jne 0x82cfd9
// 0082cfd0  f6c102               test cl, 2
// 0082cfd3  7504                 jne 0x82cfd9
// 0082cfd5  33c0                 xor eax, eax
// 0082cfd7  eb02                 jmp 0x82cfdb
// 0082cfd9  8bc3                 mov eax, ebx
// 0082cfdb  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0082cfdf  8b542434             mov edx, dword ptr [esp + 0x34]
// 0082cfe3  2bd0                 sub edx, eax
// 0082cfe5  8b442428             mov eax, dword ptr [esp + 0x28]
// 0082cfe9  2bcf                 sub ecx, edi
// 0082cfeb  89542440             mov dword ptr [esp + 0x40], edx
// 0082cfef  03d3                 add edx, ebx
// 0082cff1  894c2444             mov dword ptr [esp + 0x44], ecx
// 0082cff5  03cd                 add ecx, ebp
// 0082cff7  83b8dc00000000       cmp dword ptr [eax + 0xdc], 0
// 0082cffe  89542448             mov dword ptr [esp + 0x48], edx
// 0082d002  894c244c             mov dword ptr [esp + 0x4c], ecx
// 0082d006  740d                 je 0x82d015
// 0082d008  837e6c00             cmp dword ptr [esi + 0x6c], 0
// 0082d00c  7507                 jne 0x82d015
// 0082d00e  bb01000000           mov ebx, 1
// 0082d013  eb02                 jmp 0x82d017
// 0082d015  33db                 xor ebx, ebx
// 0082d017  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 0082d01e  8b3e                 mov edi, dword ptr [esi]
// 0082d020  6a00                 push 0
// 0082d022  6a00                 push 0
// 0082d024  51                   push ecx
// 0082d025  8d54244c             lea edx, [esp + 0x4c]
// 0082d029  52                   push edx
// 0082d02a  6800000080           push 0x80000000
// 0082d02f  6a00                 push 0
// 0082d031  6a00                 push 0
// 0082d033  6a00                 push 0
// 0082d035  6a00                 push 0
// 0082d037  6800080000           push 0x800
// 0082d03c  83c760               add edi, 0x60
// 0082d03f  e8e6d9fdff           call 0x80aa2a
// 0082d044  8b17                 mov edx, dword ptr [edi]
// 0082d046  50                   push eax
// 0082d047  8bc3                 mov eax, ebx
// 0082d049  f7d8                 neg eax
// 0082d04b  1bc0                 sbb eax, eax
// 0082d04d  2500000800           and eax, 0x80000
// 0082d052  0d80000000           or eax, 0x80
// 0082d057  50                   push eax
// 0082d058  8bce                 mov ecx, esi
// 0082d05a  ffd2                 call edx
// 0082d05c  8b442444             mov eax, dword ptr [esp + 0x44]
// 0082d060  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0082d064  8b542448             mov edx, dword ptr [esp + 0x48]
// 0082d068  6810020000           push 0x210
// 0082d06d  2bc8                 sub ecx, eax
// 0082d06f  51                   push ecx
// 0082d070  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0082d074  2bd1                 sub edx, ecx
// 0082d076  52                   push edx
// 0082d077  50                   push eax
// 0082d078  a1f821a400           mov eax, dword ptr [0xa421f8]
// 0082d07d  51                   push ecx
// 0082d07e  50                   push eax
// 0082d07f  8bce                 mov ecx, esi
// 0082d081  e8a4d3fdff           call 0x80a42a
// 0082d086  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0082d08a  8b11                 mov edx, dword ptr [ecx]
// 0082d08c  8b820c010000         mov eax, dword ptr [edx + 0x10c]
// 0082d092  6a01                 push 1
// 0082d094  56                   push esi
// 0082d095  6a00                 push 0
// 0082d097  ffd0                 call eax
// 0082d099  85db                 test ebx, ebx
// 0082d09b  7419                 je 0x82d0b6
// 0082d09d  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0082d0a0  8b542428             mov edx, dword ptr [esp + 0x28]
// 0082d0a4  8b82dc000000         mov eax, dword ptr [edx + 0xdc]
// 0082d0aa  6a02                 push 2
// 0082d0ac  6896000000           push 0x96
// 0082d0b1  6a00                 push 0
// 0082d0b3  51                   push ecx
// 0082d0b4  ffd0                 call eax
// 0082d0b6  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 0082d0bd  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0082d0c1  40                   inc eax
// 0082d0c2  3b442418             cmp eax, dword ptr [esp + 0x18]
// 0082d0c6  8984248c000000       mov dword ptr [esp + 0x8c], eax
// 0082d0cd  0f8c1efeffff         jl 0x82cef1
// 0082d0d3  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0082d0d7  33f6                 xor esi, esi
// 0082d0d9  85ff                 test edi, edi
// 0082d0db  7e3b                 jle 0x82d118
// 0082d0dd  8d4900               lea ecx, [ecx]
// 0082d0e0  85f6                 test esi, esi
// 0082d0e2  0f8c69fcffff         jl 0x82cd51
// 0082d0e8  3b7334               cmp esi, dword ptr [ebx + 0x34]
// 0082d0eb  0f8d60fcffff         jge 0x82cd51
// 0082d0f1  8b4b30               mov ecx, dword ptr [ebx + 0x30]
// 0082d0f4  8d04b1               lea eax, [ecx + esi*4]
// 0082d0f7  8b08                 mov ecx, dword ptr [eax]
// 0082d0f9  83797000             cmp dword ptr [ecx + 0x70], 0
// 0082d0fd  7414                 je 0x82d113
// 0082d0ff  6857020000           push 0x257
// 0082d104  6a00                 push 0
// 0082d106  6a00                 push 0
// 0082d108  6a00                 push 0
// 0082d10a  6a00                 push 0
// 0082d10c  6a00                 push 0
// 0082d10e  e817d3fdff           call 0x80a42a
// 0082d113  46                   inc esi
// 0082d114  3bf7                 cmp esi, edi
// 0082d116  7cc8                 jl 0x82d0e0
// 0082d118  8d4c2454             lea ecx, [esp + 0x54]
// 0082d11c  c684248000000000     mov byte ptr [esp + 0x80], 0
// 0082d124  e877000300           call 0x85d1a0
// 0082d129  8d4c2464             lea ecx, [esp + 0x64]
// 0082d12d  c7842480000000ffffffff mov dword ptr [esp + 0x80], 0xffffffff
// 0082d138  e8e5ddfdff           call 0x80af22
// 0082d13d  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 0082d141  64890d00000000       mov dword ptr fs:[0], ecx
// 0082d148  59                   pop ecx
// 0082d149  5f                   pop edi
// 0082d14a  5e                   pop esi
// 0082d14b  5d                   pop ebp
// 0082d14c  5b                   pop ebx
// 0082d14d  83c470               add esp, 0x70
// 0082d150  c20800               ret 8
// copied from an identical function in another client (function ?ShowKeyboardTips@CXTPCommandBars@@QAEXPAVCXTPCommandBar@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPCommandBars.cpp