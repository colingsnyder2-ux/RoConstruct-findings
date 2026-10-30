// roc 2012-06 009a4fb0  unit: CXTPCommandBarKeyboardTip  size: 1907 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009a4fb0
//
// 009a4fb0  6aff                 push -1
// 009a4fb2  6853daad00           push 0xadda53
// 009a4fb7  64a100000000         mov eax, dword ptr fs:[0]
// 009a4fbd  50                   push eax
// 009a4fbe  83ec64               sub esp, 0x64
// 009a4fc1  53                   push ebx
// 009a4fc2  55                   push ebp
// 009a4fc3  56                   push esi
// 009a4fc4  57                   push edi
// 009a4fc5  a1d027e000           mov eax, dword ptr [0xe027d0]
// 009a4fca  33c4                 xor eax, esp
// 009a4fcc  50                   push eax
// 009a4fcd  8d442478             lea eax, [esp + 0x78]
// 009a4fd1  64a300000000         mov dword ptr fs:[0], eax
// 009a4fd7  8bd9                 mov ebx, ecx
// 009a4fd9  895c2414             mov dword ptr [esp + 0x14], ebx
// 009a4fdd  e83eecffff           call 0x9a3c20
// 009a4fe2  8b4374               mov eax, dword ptr [ebx + 0x74]
// 009a4fe5  33ed                 xor ebp, ebp
// 009a4fe7  39a8c4000000         cmp dword ptr [eax + 0xc4], ebp
// 009a4fed  0f841a070000         je 0x9a570d
// 009a4ff3  8bb42488000000       mov esi, dword ptr [esp + 0x88]
// 009a4ffa  3bf5                 cmp esi, ebp
// 009a4ffc  0f840b070000         je 0x9a570d
// 009a5002  396e20               cmp dword ptr [esi + 0x20], ebp
// 009a5005  0f8402070000         je 0x9a570d
// 009a500b  8bcb                 mov ecx, ebx
// 009a500d  e84e3defff           call 0x898d60
// 009a5012  8bc8                 mov ecx, eax
// 009a5014  e8b76a0400           call 0x9ebad0
// 009a5019  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 009a501c  51                   push ecx
// 009a501d  ff15c43cb200         call dword ptr [0xb23cc4]
// 009a5023  8b94248c000000       mov edx, dword ptr [esp + 0x8c]
// 009a502a  895344               mov dword ptr [ebx + 0x44], edx
// 009a502d  897340               mov dword ptr [ebx + 0x40], esi
// 009a5030  896b48               mov dword ptr [ebx + 0x48], ebp
// 009a5033  8b06                 mov eax, dword ptr [esi]
// 009a5035  8b90c4010000         mov edx, dword ptr [eax + 0x1c4]
// 009a503b  8bce                 mov ecx, esi
// 009a503d  ffd2                 call edx
// 009a503f  396b34               cmp dword ptr [ebx + 0x34], ebp
// 009a5042  7508                 jne 0x9a504c
// 009a5044  896b40               mov dword ptr [ebx + 0x40], ebp
// 009a5047  e9c1060000           jmp 0x9a570d
// 009a504c  8bcb                 mov ecx, ebx
// 009a504e  e80dd8ffff           call 0x9a2860
// 009a5053  8bf8                 mov edi, eax
// 009a5055  56                   push esi
// 009a5056  8d4c2468             lea ecx, [esp + 0x68]
// 009a505a  897c242c             mov dword ptr [esp + 0x2c], edi
// 009a505e  e839dffdff           call 0x982f9c
// 009a5063  81c7bc000000         add edi, 0xbc
// 009a5069  57                   push edi
// 009a506a  8d442468             lea eax, [esp + 0x68]
// 009a506e  50                   push eax
// 009a506f  8d4c245c             lea ecx, [esp + 0x5c]
// 009a5073  89ac2488000000       mov dword ptr [esp + 0x88], ebp
// 009a507a  e8b1040300           call 0x9d5530
// 009a507f  8b6b34               mov ebp, dword ptr [ebx + 0x34]
// 009a5082  83c5ff               add ebp, -1
// 009a5085  c684248000000001     mov byte ptr [esp + 0x80], 1
// 009a508d  0f88f0000000         js 0x9a5183
// 009a5093  85ed                 test ebp, ebp
// 009a5095  0f8c86020000         jl 0x9a5321
// 009a509b  3b6b34               cmp ebp, dword ptr [ebx + 0x34]
// 009a509e  0f8d7d020000         jge 0x9a5321
// 009a50a4  8b4b30               mov ecx, dword ptr [ebx + 0x30]
// 009a50a7  8b34a9               mov esi, dword ptr [ecx + ebp*4]
// 009a50aa  8d04a9               lea eax, [ecx + ebp*4]
// 009a50ad  8d4e54               lea ecx, [esi + 0x54]
// 009a50b0  898c248c000000       mov dword ptr [esp + 0x8c], ecx
// 009a50b7  ff156046b200         call dword ptr [0xb24660]
// 009a50bd  33d2                 xor edx, edx
// 009a50bf  84c0                 test al, al
// 009a50c1  0f94c2               sete dl
// 009a50c4  8bc2                 mov eax, edx
// 009a50c6  89467c               mov dword ptr [esi + 0x7c], eax
// 009a50c9  85c0                 test eax, eax
// 009a50cb  0f85a9000000         jne 0x9a517a
// 009a50d1  8d7e58               lea edi, [esi + 0x58]
// 009a50d4  8bcf                 mov ecx, edi
// 009a50d6  ff156046b200         call dword ptr [0xb24660]
// 009a50dc  84c0                 test al, al
// 009a50de  7421                 je 0x9a5101
// 009a50e0  8b06                 mov eax, dword ptr [esi]
// 009a50e2  8b5068               mov edx, dword ptr [eax + 0x68]
// 009a50e5  8bce                 mov ecx, esi
// 009a50e7  ffd2                 call edx
// 009a50e9  8b06                 mov eax, dword ptr [esi]
// 009a50eb  8b5004               mov edx, dword ptr [eax + 4]
// 009a50ee  6a01                 push 1
// 009a50f0  8bce                 mov ecx, esi
// 009a50f2  ffd2                 call edx
// 009a50f4  6a01                 push 1
// 009a50f6  55                   push ebp
// 009a50f7  8d4b2c               lea ecx, [ebx + 0x2c]
// 009a50fa  e871e0feff           call 0x993170
// 009a50ff  eb79                 jmp 0x9a517a
// 009a5101  8bcf                 mov ecx, edi
// 009a5103  ff15d441b200         call dword ptr [0xb241d4]
// 009a5109  6a00                 push 0
// 009a510b  6a26                 push 0x26
// 009a510d  8bcf                 mov ecx, edi
// 009a510f  ff15f447b200         call dword ptr [0xb247f4]
// 009a5115  8bd8                 mov ebx, eax
// 009a5117  83fbff               cmp ebx, -1
// 009a511a  7420                 je 0x9a513c
// 009a511c  8d4301               lea eax, [ebx + 1]
// 009a511f  50                   push eax
// 009a5120  8bcf                 mov ecx, edi
// 009a5122  ff15e844b200         call dword ptr [0xb244e8]
// 009a5128  3c26                 cmp al, 0x26
// 009a512a  7510                 jne 0x9a513c
// 009a512c  83c302               add ebx, 2
// 009a512f  53                   push ebx
// 009a5130  6a26                 push 0x26
// 009a5132  8bcf                 mov ecx, edi
// 009a5134  ff15f447b200         call dword ptr [0xb247f4]
// 009a513a  8bd8                 mov ebx, eax
// 009a513c  83c65c               add esi, 0x5c
// 009a513f  8bce                 mov ecx, esi
// 009a5141  ff156046b200         call dword ptr [0xb24660]
// 009a5147  84c0                 test al, al
// 009a5149  741d                 je 0x9a5168
// 009a514b  43                   inc ebx
// 009a514c  53                   push ebx
// 009a514d  8bcf                 mov ecx, edi
// 009a514f  ff151849b200         call dword ptr [0xb24918]
// 009a5155  0fb6c8               movzx ecx, al
// 009a5158  51                   push ecx
// 009a5159  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 009a5160  ff151449b200         call dword ptr [0xb24914]
// 009a5166  eb0e                 jmp 0x9a5176
// 009a5168  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 009a516f  56                   push esi
// 009a5170  ff152045b200         call dword ptr [0xb24520]
// 009a5176  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 009a517a  83ed01               sub ebp, 1
// 009a517d  0f8910ffffff         jns 0x9a5093
// 009a5183  8b7b34               mov edi, dword ptr [ebx + 0x34]
// 009a5186  33f6                 xor esi, esi
// 009a5188  897c2418             mov dword ptr [esp + 0x18], edi
// 009a518c  85ff                 test edi, edi
// 009a518e  0f8e08030000         jle 0x9a549c
// 009a5194  85f6                 test esi, esi
// 009a5196  0f8c85010000         jl 0x9a5321
// 009a519c  8b442414             mov eax, dword ptr [esp + 0x14]
// 009a51a0  3b7034               cmp esi, dword ptr [eax + 0x34]
// 009a51a3  0f8d78010000         jge 0x9a5321
// 009a51a9  8b5030               mov edx, dword ptr [eax + 0x30]
// 009a51ac  8b3cb2               mov edi, dword ptr [edx + esi*4]
// 009a51af  8d04b2               lea eax, [edx + esi*4]
// 009a51b2  8d4754               lea eax, [edi + 0x54]
// 009a51b5  50                   push eax
// 009a51b6  8d4c2428             lea ecx, [esp + 0x28]
// 009a51ba  ff158047b200         call dword ptr [0xb24780]
// 009a51c0  8d4c2440             lea ecx, [esp + 0x40]
// 009a51c4  e827d7ffff           call 0x9a28f0
// 009a51c9  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 009a51cd  57                   push edi
// 009a51ce  51                   push ecx
// 009a51cf  8d4c2448             lea ecx, [esp + 0x48]
// 009a51d3  c684248800000003     mov byte ptr [esp + 0x88], 3
// 009a51db  e8f0cc0c00           call 0xa71ed0
// 009a51e0  687cf5c000           push 0xc0f57c
// 009a51e5  8d8c2490000000       lea ecx, [esp + 0x90]
// 009a51ec  ff15c847b200         call dword ptr [0xb247c8]
// 009a51f2  46                   inc esi
// 009a51f3  3b742418             cmp esi, dword ptr [esp + 0x18]
// 009a51f7  c684248000000004     mov byte ptr [esp + 0x80], 4
// 009a51ff  8974243c             mov dword ptr [esp + 0x3c], esi
// 009a5203  7d7d                 jge 0x9a5282
// 009a5205  85f6                 test esi, esi
// 009a5207  0f8c14010000         jl 0x9a5321
// 009a520d  8b542414             mov edx, dword ptr [esp + 0x14]
// 009a5211  3b7234               cmp esi, dword ptr [edx + 0x34]
// 009a5214  0f8d07010000         jge 0x9a5321
// 009a521a  8bc2                 mov eax, edx
// 009a521c  8b4830               mov ecx, dword ptr [eax + 0x30]
// 009a521f  8b2cb1               mov ebp, dword ptr [ecx + esi*4]
// 009a5222  8d04b1               lea eax, [ecx + esi*4]
// 009a5225  6a00                 push 0
// 009a5227  8d4c2428             lea ecx, [esp + 0x28]
// 009a522b  8d7d54               lea edi, [ebp + 0x54]
// 009a522e  ff15e844b200         call dword ptr [0xb244e8]
// 009a5234  6a00                 push 0
// 009a5236  8bcf                 mov ecx, edi
// 009a5238  8ad8                 mov bl, al
// 009a523a  ff15e844b200         call dword ptr [0xb244e8]
// 009a5240  3ac3                 cmp al, bl
// 009a5242  7537                 jne 0x9a527b
// 009a5244  8b542448             mov edx, dword ptr [esp + 0x48]
// 009a5248  55                   push ebp
// 009a5249  52                   push edx
// 009a524a  8d4c2448             lea ecx, [esp + 0x48]
// 009a524e  e87dcc0c00           call 0xa71ed0
// 009a5253  8bcf                 mov ecx, edi
// 009a5255  ff155846b200         call dword ptr [0xb24658]
// 009a525b  83f802               cmp eax, 2
// 009a525e  751b                 jne 0x9a527b
// 009a5260  6a01                 push 1
// 009a5262  8bcf                 mov ecx, edi
// 009a5264  ff15e844b200         call dword ptr [0xb244e8]
// 009a526a  0fb6c0               movzx eax, al
// 009a526d  50                   push eax
// 009a526e  8d8c2490000000       lea ecx, [esp + 0x90]
// 009a5275  ff151049b200         call dword ptr [0xb24910]
// 009a527b  46                   inc esi
// 009a527c  3b742418             cmp esi, dword ptr [esp + 0x18]
// 009a5280  7c83                 jl 0x9a5205
// 009a5282  8b5c2448             mov ebx, dword ptr [esp + 0x48]
// 009a5286  83fb02               cmp ebx, 2
// 009a5289  0f8cc7010000         jl 0x9a5456
// 009a528f  33ff                 xor edi, edi
// 009a5291  c744242c01000000     mov dword ptr [esp + 0x2c], 1
// 009a5299  897c2434             mov dword ptr [esp + 0x34], edi
// 009a529d  85db                 test ebx, ebx
// 009a529f  0f8eb1010000         jle 0x9a5456
// 009a52a5  85ff                 test edi, edi
// 009a52a7  7c78                 jl 0x9a5321
// 009a52a9  3bfb                 cmp edi, ebx
// 009a52ab  7d74                 jge 0x9a5321
// 009a52ad  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 009a52b1  8b34b9               mov esi, dword ptr [ecx + edi*4]
// 009a52b4  8d6e54               lea ebp, [esi + 0x54]
// 009a52b7  8bcd                 mov ecx, ebp
// 009a52b9  ff155846b200         call dword ptr [0xb24658]
// 009a52bf  83f801               cmp eax, 1
// 009a52c2  0f8f81010000         jg 0x9a5449
// 009a52c8  83c658               add esi, 0x58
// 009a52cb  8bce                 mov ecx, esi
// 009a52cd  33ff                 xor edi, edi
// 009a52cf  ff155846b200         call dword ptr [0xb24658]
// 009a52d5  48                   dec eax
// 009a52d6  85c0                 test eax, eax
// 009a52d8  7e76                 jle 0x9a5350
// 009a52da  8d9b00000000         lea ebx, [ebx]
// 009a52e0  57                   push edi
// 009a52e1  8bce                 mov ecx, esi
// 009a52e3  ff15e844b200         call dword ptr [0xb244e8]
// 009a52e9  3c20                 cmp al, 0x20
// 009a52eb  7524                 jne 0x9a5311
// 009a52ed  6a00                 push 0
// 009a52ef  8d5701               lea edx, [edi + 1]
// 009a52f2  52                   push edx
// 009a52f3  8bce                 mov ecx, esi
// 009a52f5  ff15e844b200         call dword ptr [0xb244e8]
// 009a52fb  0fb6c0               movzx eax, al
// 009a52fe  50                   push eax
// 009a52ff  8d8c2494000000       lea ecx, [esp + 0x94]
// 009a5306  ff15f447b200         call dword ptr [0xb247f4]
// 009a530c  83f8ff               cmp eax, -1
// 009a530f  7415                 je 0x9a5326
// 009a5311  8bce                 mov ecx, esi
// 009a5313  47                   inc edi
// 009a5314  ff155846b200         call dword ptr [0xb24658]
// 009a531a  48                   dec eax
// 009a531b  3bf8                 cmp edi, eax
// 009a531d  7cc1                 jl 0x9a52e0
// 009a531f  eb2f                 jmp 0x9a5350
// 009a5321  e89ad0fdff           call 0x9823c0
// 009a5326  47                   inc edi
// 009a5327  57                   push edi
// 009a5328  8bce                 mov ecx, esi
// 009a532a  ff15e844b200         call dword ptr [0xb244e8]
// 009a5330  8ad8                 mov bl, al
// 009a5332  885c241c             mov byte ptr [esp + 0x1c], bl
// 009a5336  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 009a533a  51                   push ecx
// 009a533b  8d8c2490000000       lea ecx, [esp + 0x90]
// 009a5342  ff151049b200         call dword ptr [0xb24910]
// 009a5348  84db                 test bl, bl
// 009a534a  0f85e4000000         jne 0x9a5434
// 009a5350  6a00                 push 0
// 009a5352  8bce                 mov ecx, esi
// 009a5354  ff15e844b200         call dword ptr [0xb244e8]
// 009a535a  33d2                 xor edx, edx
// 009a535c  3c26                 cmp al, 0x26
// 009a535e  0f94c2               sete dl
// 009a5361  8bce                 mov ecx, esi
// 009a5363  8bfa                 mov edi, edx
// 009a5365  57                   push edi
// 009a5366  ff15e844b200         call dword ptr [0xb244e8]
// 009a536c  6a00                 push 0
// 009a536e  8bcd                 mov ecx, ebp
// 009a5370  8ad8                 mov bl, al
// 009a5372  ff15e844b200         call dword ptr [0xb244e8]
// 009a5378  3ad8                 cmp bl, al
// 009a537a  7501                 jne 0x9a537d
// 009a537c  47                   inc edi
// 009a537d  8bce                 mov ecx, esi
// 009a537f  ff155846b200         call dword ptr [0xb24658]
// 009a5385  3bf8                 cmp edi, eax
// 009a5387  7d5a                 jge 0x9a53e3
// 009a5389  8da42400000000       lea esp, [esp]
// 009a5390  6a00                 push 0
// 009a5392  57                   push edi
// 009a5393  8bce                 mov ecx, esi
// 009a5395  ff15e844b200         call dword ptr [0xb244e8]
// 009a539b  0fb6c0               movzx eax, al
// 009a539e  50                   push eax
// 009a539f  8d8c2494000000       lea ecx, [esp + 0x94]
// 009a53a6  ff15f447b200         call dword ptr [0xb247f4]
// 009a53ac  8bce                 mov ecx, esi
// 009a53ae  83f8ff               cmp eax, -1
// 009a53b1  740d                 je 0x9a53c0
// 009a53b3  47                   inc edi
// 009a53b4  ff155846b200         call dword ptr [0xb24658]
// 009a53ba  3bf8                 cmp edi, eax
// 009a53bc  7cd2                 jl 0x9a5390
// 009a53be  eb23                 jmp 0x9a53e3
// 009a53c0  57                   push edi
// 009a53c1  ff15e844b200         call dword ptr [0xb244e8]
// 009a53c7  8ad8                 mov bl, al
// 009a53c9  885c241c             mov byte ptr [esp + 0x1c], bl
// 009a53cd  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 009a53d1  51                   push ecx
// 009a53d2  8d8c2490000000       lea ecx, [esp + 0x90]
// 009a53d9  ff151049b200         call dword ptr [0xb24910]
// 009a53df  84db                 test bl, bl
// 009a53e1  7551                 jne 0x9a5434
// 009a53e3  8d4c2420             lea ecx, [esp + 0x20]
// 009a53e7  ff158447b200         call dword ptr [0xb24784]
// 009a53ed  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 009a53f1  56                   push esi
// 009a53f2  8d542424             lea edx, [esp + 0x24]
// 009a53f6  6878f5c000           push 0xc0f578
// 009a53fb  52                   push edx
// 009a53fc  c684248c00000005     mov byte ptr [esp + 0x8c], 5
// 009a5404  ff158847b200         call dword ptr [0xb24788]
// 009a540a  83c40c               add esp, 0xc
// 009a540d  6a00                 push 0
// 009a540f  8d4c2424             lea ecx, [esp + 0x24]
// 009a5413  ff15e844b200         call dword ptr [0xb244e8]
// 009a5419  46                   inc esi
// 009a541a  8d4c2420             lea ecx, [esp + 0x20]
// 009a541e  8844241c             mov byte ptr [esp + 0x1c], al
// 009a5422  8974242c             mov dword ptr [esp + 0x2c], esi
// 009a5426  c684248000000004     mov byte ptr [esp + 0x80], 4
// 009a542e  ff15d047b200         call dword ptr [0xb247d0]
// 009a5434  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 009a5438  50                   push eax
// 009a5439  8bcd                 mov ecx, ebp
// 009a543b  ff151049b200         call dword ptr [0xb24910]
// 009a5441  8b5c2448             mov ebx, dword ptr [esp + 0x48]
// 009a5445  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 009a5449  47                   inc edi
// 009a544a  3bfb                 cmp edi, ebx
// 009a544c  897c2434             mov dword ptr [esp + 0x34], edi
// 009a5450  0f8c4ffeffff         jl 0x9a52a5
// 009a5456  8d8c248c000000       lea ecx, [esp + 0x8c]
// 009a545d  ff15d047b200         call dword ptr [0xb247d0]
// 009a5463  8d4c2440             lea ecx, [esp + 0x40]
// 009a5467  c684248000000002     mov byte ptr [esp + 0x80], 2
// 009a546f  e89cd4ffff           call 0x9a2910
// 009a5474  8d4c2424             lea ecx, [esp + 0x24]
// 009a5478  c684248000000001     mov byte ptr [esp + 0x80], 1
// 009a5480  ff15d047b200         call dword ptr [0xb247d0]
// 009a5486  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 009a548a  3b742418             cmp esi, dword ptr [esp + 0x18]
// 009a548e  0f8c00fdffff         jl 0x9a5194
// 009a5494  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 009a5498  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 009a549c  8bcb                 mov ecx, ebx
// 009a549e  e87dd0ffff           call 0x9a2520
// 009a54a3  8944243c             mov dword ptr [esp + 0x3c], eax
// 009a54a7  c784248c00000000000000 mov dword ptr [esp + 0x8c], 0
// 009a54b2  85ff                 test edi, edi
// 009a54b4  0f8eed010000         jle 0x9a56a7
// 009a54ba  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 009a54c1  85c0                 test eax, eax
// 009a54c3  0f8c58feffff         jl 0x9a5321
// 009a54c9  3b4334               cmp eax, dword ptr [ebx + 0x34]
// 009a54cc  0f8d4ffeffff         jge 0x9a5321
// 009a54d2  8b4b30               mov ecx, dword ptr [ebx + 0x30]
// 009a54d5  8b3481               mov esi, dword ptr [ecx + eax*4]
// 009a54d8  837e7000             cmp dword ptr [esi + 0x70], 0
// 009a54dc  8d0481               lea eax, [ecx + eax*4]
// 009a54df  0f84a1010000         je 0x9a5686
// 009a54e5  8d54242c             lea edx, [esp + 0x2c]
// 009a54e9  8d7e54               lea edi, [esi + 0x54]
// 009a54ec  52                   push edx
// 009a54ed  8bcf                 mov ecx, edi
// 009a54ef  ff155846b200         call dword ptr [0xb24658]
// 009a54f5  50                   push eax
// 009a54f6  8bcf                 mov ecx, edi
// 009a54f8  ff159847b200         call dword ptr [0xb24798]
// 009a54fe  50                   push eax
// 009a54ff  8b442478             mov eax, dword ptr [esp + 0x78]
// 009a5503  50                   push eax
// 009a5504  ff154021b200         call dword ptr [0xb22140]
// 009a550a  8b442430             mov eax, dword ptr [esp + 0x30]
// 009a550e  83c002               add eax, 2
// 009a5511  83f80f               cmp eax, 0xf
// 009a5514  8be8                 mov ebp, eax
// 009a5516  7f05                 jg 0x9a551d
// 009a5518  bd0f000000           mov ebp, 0xf
// 009a551d  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 009a5521  83c006               add eax, 6
// 009a5524  83f810               cmp eax, 0x10
// 009a5527  8bd8                 mov ebx, eax
// 009a5529  7f05                 jg 0x9a5530
// 009a552b  bb10000000           mov ebx, 0x10
// 009a5530  8b4e64               mov ecx, dword ptr [esi + 0x64]
// 009a5533  894c2434             mov dword ptr [esp + 0x34], ecx
// 009a5537  8b5668               mov edx, dword ptr [esi + 0x68]
// 009a553a  89542438             mov dword ptr [esp + 0x38], edx
// 009a553e  8b4660               mov eax, dword ptr [esi + 0x60]
// 009a5541  50                   push eax
// 009a5542  e853d6fdff           call 0x982b9a
// 009a5547  50                   push eax
// 009a5548  e899cffdff           call 0x9824e6
// 009a554d  83c408               add esp, 8
// 009a5550  85c0                 test eax, eax
// 009a5552  7516                 jne 0x9a556a
// 009a5554  8b942488000000       mov edx, dword ptr [esp + 0x88]
// 009a555b  8b4220               mov eax, dword ptr [edx + 0x20]
// 009a555e  8d4c2434             lea ecx, [esp + 0x34]
// 009a5562  51                   push ecx
// 009a5563  50                   push eax
// 009a5564  ff15dc3ab200         call dword ptr [0xb23adc]
// 009a556a  8b4e78               mov ecx, dword ptr [esi + 0x78]
// 009a556d  f6c104               test cl, 4
// 009a5570  740b                 je 0x9a557d
// 009a5572  8bc5                 mov eax, ebp
// 009a5574  99                   cdq 
// 009a5575  2bc2                 sub eax, edx
// 009a5577  8bf8                 mov edi, eax
// 009a5579  d1ff                 sar edi, 1
// 009a557b  eb0e                 jmp 0x9a558b
// 009a557d  8bd1                 mov edx, ecx
// 009a557f  80e208               and dl, 8
// 009a5582  0fb6fa               movzx edi, dl
// 009a5585  f7df                 neg edi
// 009a5587  1bff                 sbb edi, edi
// 009a5589  23fd                 and edi, ebp
// 009a558b  f6c101               test cl, 1
// 009a558e  7409                 je 0x9a5599
// 009a5590  8bc3                 mov eax, ebx
// 009a5592  99                   cdq 
// 009a5593  2bc2                 sub eax, edx
// 009a5595  d1f8                 sar eax, 1
// 009a5597  eb12                 jmp 0x9a55ab
// 009a5599  837c243c00           cmp dword ptr [esp + 0x3c], 0
// 009a559e  7509                 jne 0x9a55a9
// 009a55a0  f6c102               test cl, 2
// 009a55a3  7504                 jne 0x9a55a9
// 009a55a5  33c0                 xor eax, eax
// 009a55a7  eb02                 jmp 0x9a55ab
// 009a55a9  8bc3                 mov eax, ebx
// 009a55ab  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 009a55af  8b542434             mov edx, dword ptr [esp + 0x34]
// 009a55b3  2bd0                 sub edx, eax
// 009a55b5  8b442428             mov eax, dword ptr [esp + 0x28]
// 009a55b9  2bcf                 sub ecx, edi
// 009a55bb  89542440             mov dword ptr [esp + 0x40], edx
// 009a55bf  03d3                 add edx, ebx
// 009a55c1  894c2444             mov dword ptr [esp + 0x44], ecx
// 009a55c5  03cd                 add ecx, ebp
// 009a55c7  83b8dc00000000       cmp dword ptr [eax + 0xdc], 0
// 009a55ce  89542448             mov dword ptr [esp + 0x48], edx
// 009a55d2  894c244c             mov dword ptr [esp + 0x4c], ecx
// 009a55d6  740d                 je 0x9a55e5
// 009a55d8  837e6c00             cmp dword ptr [esi + 0x6c], 0
// 009a55dc  7507                 jne 0x9a55e5
// 009a55de  bb01000000           mov ebx, 1
// 009a55e3  eb02                 jmp 0x9a55e7
// 009a55e5  33db                 xor ebx, ebx
// 009a55e7  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 009a55ee  8b3e                 mov edi, dword ptr [esi]
// 009a55f0  6a00                 push 0
// 009a55f2  6a00                 push 0
// 009a55f4  51                   push ecx
// 009a55f5  8d54244c             lea edx, [esp + 0x4c]
// 009a55f9  52                   push edx
// 009a55fa  6800000080           push 0x80000000
// 009a55ff  6a00                 push 0
// 009a5601  6a00                 push 0
// 009a5603  6a00                 push 0
// 009a5605  6a00                 push 0
// 009a5607  6800080000           push 0x800
// 009a560c  83c760               add edi, 0x60
// 009a560f  e89cd4fdff           call 0x982ab0
// 009a5614  8b17                 mov edx, dword ptr [edi]
// 009a5616  50                   push eax
// 009a5617  8bc3                 mov eax, ebx
// 009a5619  f7d8                 neg eax
// 009a561b  1bc0                 sbb eax, eax
// 009a561d  2500000800           and eax, 0x80000
// 009a5622  0d80000000           or eax, 0x80
// 009a5627  50                   push eax
// 009a5628  8bce                 mov ecx, esi
// 009a562a  ffd2                 call edx
// 009a562c  8b442444             mov eax, dword ptr [esp + 0x44]
// 009a5630  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 009a5634  8b542448             mov edx, dword ptr [esp + 0x48]
// 009a5638  6810020000           push 0x210
// 009a563d  2bc8                 sub ecx, eax
// 009a563f  51                   push ecx
// 009a5640  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 009a5644  2bd1                 sub edx, ecx
// 009a5646  52                   push edx
// 009a5647  50                   push eax
// 009a5648  a1b841b200           mov eax, dword ptr [0xb241b8]
// 009a564d  51                   push ecx
// 009a564e  50                   push eax
// 009a564f  8bce                 mov ecx, esi
// 009a5651  e87ecefdff           call 0x9824d4
// 009a5656  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 009a565a  8b11                 mov edx, dword ptr [ecx]
// 009a565c  8b820c010000         mov eax, dword ptr [edx + 0x10c]
// 009a5662  6a01                 push 1
// 009a5664  56                   push esi
// 009a5665  6a00                 push 0
// 009a5667  ffd0                 call eax
// 009a5669  85db                 test ebx, ebx
// 009a566b  7419                 je 0x9a5686
// 009a566d  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 009a5670  8b542428             mov edx, dword ptr [esp + 0x28]
// 009a5674  8b82dc000000         mov eax, dword ptr [edx + 0xdc]
// 009a567a  6a02                 push 2
// 009a567c  6896000000           push 0x96
// 009a5681  6a00                 push 0
// 009a5683  51                   push ecx
// 009a5684  ffd0                 call eax
// 009a5686  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 009a568d  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 009a5691  40                   inc eax
// 009a5692  3b442418             cmp eax, dword ptr [esp + 0x18]
// 009a5696  8984248c000000       mov dword ptr [esp + 0x8c], eax
// 009a569d  0f8c1efeffff         jl 0x9a54c1
// 009a56a3  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 009a56a7  33f6                 xor esi, esi
// 009a56a9  85ff                 test edi, edi
// 009a56ab  7e3b                 jle 0x9a56e8
// 009a56ad  8d4900               lea ecx, [ecx]
// 009a56b0  85f6                 test esi, esi
// 009a56b2  0f8c69fcffff         jl 0x9a5321
// 009a56b8  3b7334               cmp esi, dword ptr [ebx + 0x34]
// 009a56bb  0f8d60fcffff         jge 0x9a5321
// 009a56c1  8b4b30               mov ecx, dword ptr [ebx + 0x30]
// 009a56c4  8d04b1               lea eax, [ecx + esi*4]
// 009a56c7  8b08                 mov ecx, dword ptr [eax]
// 009a56c9  83797000             cmp dword ptr [ecx + 0x70], 0
// 009a56cd  7414                 je 0x9a56e3
// 009a56cf  6857020000           push 0x257
// 009a56d4  6a00                 push 0
// 009a56d6  6a00                 push 0
// 009a56d8  6a00                 push 0
// 009a56da  6a00                 push 0
// 009a56dc  6a00                 push 0
// 009a56de  e8f1cdfdff           call 0x9824d4
// 009a56e3  46                   inc esi
// 009a56e4  3bf7                 cmp esi, edi
// 009a56e6  7cc8                 jl 0x9a56b0
// 009a56e8  8d4c2454             lea ecx, [esp + 0x54]
// 009a56ec  c684248000000000     mov byte ptr [esp + 0x80], 0
// 009a56f4  e8b7fe0200           call 0x9d55b0
// 009a56f9  8d4c2464             lea ecx, [esp + 0x64]
// 009a56fd  c7842480000000ffffffff mov dword ptr [esp + 0x80], 0xffffffff
// 009a5708  e889d8fdff           call 0x982f96
// 009a570d  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 009a5711  64890d00000000       mov dword ptr fs:[0], ecx
// 009a5718  59                   pop ecx
// 009a5719  5f                   pop edi
// 009a571a  5e                   pop esi
// 009a571b  5d                   pop ebp
// 009a571c  5b                   pop ebx
// 009a571d  83c470               add esp, 0x70
// 009a5720  c20800               ret 8
// copied from an identical function in another client (function ?ShowKeyboardTips@CXTPCommandBars@@QAEXPAVCXTPCommandBar@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPCommandBars.cpp